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
class IntervalUniform {
private:
	float min_val;
	float max_val;
	float rand;
public:
	IntervalUniform(float, float);
	void set_min_val(float value);
	void set_max_val(float value);
	float get_min_val();
	float get_max_val();
	float rand_float();
	unsigned rand_int();
};
class IntervalGaussian {
private:
	float mean;
	float sigma;
	float min_val;
	float max_val;
	float rand;
public:
	IntervalGaussian(float, float, float, float);
	void set_mean(float value);
	void set_sigma(float value);
	void set_min_val(float value);
	void set_max_val(float value);
	float get_mean();
	float get_sigma();
	float get_min_val();
	float get_max_val();
	float rand_float();
	int rand_int();
};
#endif