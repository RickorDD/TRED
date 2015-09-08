#ifndef FSM_H_
#define FSM_H_

class State {
	public:
	State();
	void LEDWhiteOn();
	void LEDWhiteOff();
	bool LEDWhite();
	void LEDGoldOn();
	void LEDGoldOff();
	bool LEDGold();
	bool LEDWhiteDim();
};

#endif
