//#pragma once
#ifndef interval_HEADER
#define interval_HEADER

#include <iostream>
#include <random>
#include <cassert>

struct PRNG {
	std::mt19937 engine;
};

/*class Interval {
public:

};*/

class IntervalGaussian {
private:
	float mean;
	float sigma;
	float min_val;
	float max_val;
	float rand;
public:
	IntervalGaussian();
	void set_mean(float value);
	void set_sigma(float value);
	float get_mean();
	float get_sigma();
	float get_min_val();
	float get_max_val();
	float rand_float(float minValue, float maxValue);
	int rand_int(int minValue, int maxValue);
};
#endif