#ifndef FSM_H_
#define FSM_H_

class State {
	public:
	State();
	void LEDWhiteOn();
	void LEDWhiteOff();
	void LEDGoldOn();
	void LEDGoldOff();
	bool LEDWhiteDim();
};

#endif
