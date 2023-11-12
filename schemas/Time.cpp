/*файл time.py - находится в schemas -  */
#include <string>
#include <stdio.h>

using namespace std;

static unsigned int TIME_INF = 2000000000;

class Time {
private:
	int value = 0;
	//string a;
	//int TIME_INF = 2000000000;

public:
	/*int inf(void){
		return
	}*/
	Time(int value) {
		this->value = value;
	}
	Time operator +(const Time& counter) const
	{
		return Time{value + counter.value};
	}
	Time operator *(const Time& counter) const
	{
		return Time{ value * counter.value };
	}
	Time operator *(int val) const
	{
		return value * val;
	}
	bool _lt(int other) {
		return (value < other);
	}
	bool _le(int other) {
		return (value <= other);
	}
	bool _gt(int other) {
		return (value > other);
	}
	bool _ge(int other) {
		return (value >= other);
	}
	bool _eq(int other) {
		return (value == other);
	}
	bool _bool(int other) {
		return (value != 0);
	}
	int _int(int other) {
		return value;
	}
	/*int get_value(void) {
		return value;
	}*/
	string _string(int other) {
		return to_string(value);
	}
	void set_value(int value) {
		this->value = value;
	}
	void set_time(int value) {
		if (value > TIME_INF)
			value = TIME_INF;
		else if (value < (-1 * TIME_INF))
			value = TIME_INF * (-1);
		this->value = value;
	}
	bool is_inf() {
		return (value == TIME_INF);
	}
};