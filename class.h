#ifndef CLASS_h
#define CLASS_h
class  Appliance
{
public:
	virtual void turn_on(int, int) = 0;
	void turn_off();
	virtual ~Appliance() = default;
	Appliance();
	Appliance(const Appliance&) = delete;
	Appliance(Appliance&&) = delete;
	Appliance& operator=(const Appliance&) = delete;
	Appliance& operator=(Appliance&&) = delete;
	virtual bool get();
	void set(bool);
private:
	bool is_on;
};
#endif
