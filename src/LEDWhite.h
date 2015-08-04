#ifndef SRC_LEDWHITE_H_
#define SRC_LEDWHITE_H_

class LEDWhite
{
	public:
		LEDWhite();
		void on();
		void off();
		bool states();

	private:
		bool _states;
};

#endif
