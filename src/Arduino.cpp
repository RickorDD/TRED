#include <ctime>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <iostream>
#include "Arduino.h"

using namespace std;

void delay(unsigned long ms) {

}

void pinMode(int pin, int mode) {

}

void analogWrite(int pin, int pwm) {
	cout << "analogWrite(" << pin << "," << pwm << ")" << endl;
}

int analogRead(int pin) {
	int dateivalue;
	int dateipin;
	fstream datei("c:\\Daten\\C++\\TRED\\analogvalue.txt", ios::in);
	while (datei >> dateipin) {
		datei >> dateivalue;
		if (dateipin == pin) {
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
	while (datei >> dateipin) {
		datei >> dateivalue;
		if (dateipin == pin) {
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
