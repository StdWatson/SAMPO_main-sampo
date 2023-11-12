//#pragma once
/*файл time.py - находится в schemas -  */
//#include <string>
//#include <stdio.h>

//static unsigned int TIME_INFIT = 2000000000;

#ifndef Time_HEADER
#define Time_HEADER
class Time{
private:
	int value = 0;
	std::string a;

	/*int value = 0;
	std::string a;*/

public:
	Time();
	Time operator +(const Time& counter) const;
	Time operator *(const Time& counter) const;
	Time operator *(int val) const;
	bool _lt(int other);
	bool _le(int other);
	bool _gt(int other);
	bool _ge(int other);
	bool _eq(int other);
	bool _bool(int other);
	int _int(int other);
	std::string _string(int other);
	void set_value(int value);
	void set_time(int value);
	bool is_inf();
};
#endif