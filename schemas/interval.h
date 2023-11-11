/*schedaler/schemas/interval - */
#include <iostream>
#include <random>
#include <cassert>

float EPS = 0.00001;
float INF = 3.4e38;
float MINUS_INF = -3.4e38;

struct PRNG{
	std::mt19937 engine;
};

/*class Interval {
public:

};*/

class IntervalGaussian {
private:
	float mean;
	float sigma;
	float min_val = MINUS_INF;
	float max_val = INF;
	float rand;
public:
	IntervalGaussian() {
		mean = 0;
		sigma = 0;
		rand = 0;
	}
	void set_mean(float value) {
		mean = value;
	}
	void set_sigma(float value) {
		sigma = value;
	}
	float get_mean() {
		return mean;
	}
	float get_sigma() {
		return sigma;
	}
	float get_min_val() {
		return min_val;
	}
	float get_max_val() {
		return max_val;
	}
	float rand_float(float minValue, float maxValue)
	{
		PRNG generator;
		std::mt19937 rnd(2);

		assert(minValue < maxValue);

		std::uniform_real_distribution<float> distribution(minValue, maxValue);

		return distribution(generator.engine);
	}
	int rand_int(int minValue, int maxValue)
	{
		PRNG generator;
		std::mt19937 rnd(2);

		assert(minValue < maxValue);

		std::uniform_real_distribution<float> distribution(minValue, maxValue);

		return int(distribution(generator.engine));
	}
};
