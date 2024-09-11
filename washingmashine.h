#ifndef WASH_h
#define WASH_h
#include "class.h"
class WashingMashine : public Appliance
{
public:
	void turn_on(int, int) override;
	~WashingMashine() = default;
	WashingMashine();
	WashingMashine(const WashingMashine&) = delete;
	WashingMashine(WashingMashine&&) = delete;
	WashingMashine& operator=(const WashingMashine&) = delete;
	WashingMashine& operator=(WashingMashine&&) = delete;
	bool get() override;

private:
	int time;
	int power;
};
#endif
