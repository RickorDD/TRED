#include <ctime>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include "Arduino.h"

using namespace std;

void delay(unsigned long ms) {

}

void pinMode(int pin, int mode) {

}

void analogWrite(int pin, int pwm) {

}

int analogRead(int pin) {
	int dateivalue;
	int dateipin;
	fstream datei("c:\\Daten\\C++\\TRED\\analogvalue.txt", ios::in);
	datei >> dateipin >> dateivalue;
	datei.close();
	if (pin == dateipin)
		return dateivalue;
	else
		return 0;
}

int analogRead(int pin, int value) {
	fstream datei("c:\\Daten\\C++\\TRED\\analogvalue.txt", ios::out);
	datei << pin << '\t' << value << endl;
	datei.close();
	return value;
}

bool digitalRead(int pin) {
	int dateivalue;
	int dateipin;
	fstream datei("c:\\Daten\\C++\\TRED\\digitalvalue.txt", ios::in);
	datei >> dateipin >> dateivalue;
	datei.close();
	if (pin == dateipin)
		return dateivalue;
	else
		return 0;
}

bool digitalRead(int pin, bool value) {
	fstream datei("c:\\Daten\\C++\\TRED\\digitalvalue.txt", ios::out);
	datei << pin << '\t' << value << endl;
	datei.close();
	return value;
}

int millis() {
	return clock();
}
