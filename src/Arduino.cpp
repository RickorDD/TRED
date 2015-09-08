#include <ctime>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <iostream>
#include <string.h>
#include <unistd.h>
#include "Arduino.h"

using namespace std;
time_t curtime;

void delay(unsigned long ms) {
	int s;
	s = ms / 1000;
	sleep(s);
}

void pinMode(int pin, int mode) {

}

void digitalWrite(int pin, bool state) {
	fstream datei("c:\\Daten\\C++\\TRED\\log.txt", ios::out | ios::app);
	time(&curtime);
	struct tm * timeinfo;
	char buffer[80];
	timeinfo = localtime(&curtime);
	strftime(buffer, 80, "%d.%m. %H:%M:%S", timeinfo);
	datei << buffer << " OUTPUT " << "D" << pin << " State: " << state
			<< endl;
}

void analogWrite(int pin, int pwm) {
	fstream datei("c:\\Daten\\C++\\TRED\\log.txt", ios::out | ios::app);
	time(&curtime);
	struct tm * timeinfo;
	char buffer[80];
	timeinfo = localtime(&curtime);
	strftime(buffer, 80, "%d.%m. %H:%M:%S", timeinfo);
	datei << buffer << " OUTPUT " << "D" << pin << " PWM:   " << pwm << endl;
}

int analogRead(int pin) {
	int dateivalue;
	int dateipin;
	fstream datei("c:\\Daten\\C++\\TRED\\analogvalue.txt", ios::in);
	fstream dateiout("c:\\Daten\\C++\\TRED\\log.txt", ios::out | ios::app);
	time(&curtime);
	struct tm * timeinfo;
	char buffer[80];
	timeinfo = localtime(&curtime);
	strftime(buffer, 80, "%d.%m. %H:%M:%S", timeinfo);
	while (datei >> dateipin) {
		datei >> dateivalue;
		if (dateipin == pin) {
			dateiout << buffer << " INPUT  "<< "A" << dateipin << " Value: " << dateivalue << endl;
			return dateivalue;
		}
	}
	datei.close();
	return 0;
}

void analogReadMock(int pin, int value) {
	fstream datei("c:\\Daten\\C++\\TRED\\analogvalue.txt", ios::out | ios::app);
	datei << pin << " " << value << endl;
	datei.close();
}

bool digitalRead(int pin) {
	int dateivalue;
	int dateipin;
	fstream datei("c:\\Daten\\C++\\TRED\\digitalvalue.txt", ios::in);
	fstream dateiout("c:\\Daten\\C++\\TRED\\log.txt", ios::out | ios::app);
	time(&curtime);
	struct tm * timeinfo;
	char buffer[80];
	timeinfo = localtime(&curtime);
	strftime(buffer, 80, "%d.%m. %H:%M:%S", timeinfo);
	while (datei >> dateipin) {
		datei >> dateivalue;
		if (dateipin == pin) {
			dateiout << buffer << " INPUT  "<< "D" << dateipin << " State: " << dateivalue << endl;
			return dateivalue;
		}
	}
	datei.close();
	return 0;
}

void digitalReadMock(int pin, bool value) {
	fstream datei("c:\\Daten\\C++\\TRED\\digitalvalue.txt",
			ios::out | ios::app);
	datei << pin << " " << value << endl;
	datei.close();
}

int millis() {
	return clock();
}

void digitalReadMockInit() {
	fstream datei("c:\\Daten\\C++\\TRED\\digitalvalue.txt", ios::out);
	datei.close();
}

void analogReadMockInit() {
	fstream datei("c:\\Daten\\C++\\TRED\\analogvalue.txt", ios::out);
	datei.close();
}
