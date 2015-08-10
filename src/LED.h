#ifndef LED_H
#define LED_H

class LED
{
	public:
		LED();
		void GoldOn();
		void GoldOff();
		void WhiteOn();
		void WhiteOff();
		bool WhiteState();
		bool GoldState();
		bool WhiteDim();
		bool WhiteTime();
	private:
		bool _WhiteState;
		bool _GoldState;
};
#endif
