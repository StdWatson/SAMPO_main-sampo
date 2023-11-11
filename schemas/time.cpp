/*файл time.py - находится в schemas -  */
#include <string>
#include <stdio.h>

using namespace std;

int TIME_INF = 2000000000;

class Time
{
private:
	int value = 0;
	string a;

public:
	/*int inf(void){
		return
	}*/
	Time(int s_value) {
		value = s_value;
	}
	bool __lt__(int other) {
		return (value < other);
	}
	bool __le__(int other) {
		return (value <= other);
	}
	bool __gt__(int other) {
		return (value > other);
	}
	bool __ge__(int other) {
		return (value >= other);
	}
	bool __eq__(int other) {
		return (value == other);
	}
	bool __bool__(int other) {
		return (value != 0);
	}
	int __int__(int other) {
		return value;
	}
	string __string__(int other) {
		return to_string(value);
	}
	void set_value(int n_value) {
		value = n_value;
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
