/*schedaler/schemas/interval - */
#include <iostream>
#include <random>
#include <cassert>
#include <stdlib.h>
#include <time.h>

float EPS = 0.00001;
float INF = 3.4e38;
float MINUS_INF = -3.4e38;

struct PRNG {
	std::mt19937 engine;
};

/*class Interval {
public:

};*/

class IntervalUniform {
private:
	float min_val = MINUS_INF;
	float max_val = INF;
	float rand;
public:
	IntervalUniform(float min_val, float max_val) {
		rand = 0;
		this->min_val = min_val;
		this->max_val = max_val;
	}
	float get_min_val() {
		return min_val;
	}
	float get_max_val() {
		return max_val;
	}
	void set_min_val(float value) {
		min_val = value;
	}
	void set_max_val(float value) {
		max_val = value;
	}
	float rand_float()								//надо улучшить
	{
		//srand(time(NULL));
		PRNG generator;
		std::random_device device;
		generator.engine.seed(device());
		//std::mt19937 rnd(time(NULL));

		assert(min_val < max_val);

		std::uniform_real_distribution<float> distribution(min_val, max_val);

		return distribution(generator.engine);
	}
	unsigned rand_int()
	{
		PRNG generator;
		std::random_device device;
		generator.engine.seed(device());
		//std::mt19937 rnd(2);

		assert(min_val < max_val);

		std::uniform_int_distribution<unsigned> distribution(min_val, max_val);
		int value = distribution(generator.engine);

		if (value < int(min_val - EPS))
			value = int(min_val - EPS);
		if (value > int(max_val + EPS))
			value = int(max_val + EPS);

		return value;
	}
};

class IntervalGaussian {
private:
	float mean;
	float sigma;
	float min_val = MINUS_INF;
	float max_val = INF;
	float rand;
public:
	IntervalGaussian(float mean = 1, float sigma = 0,
					 float min_val = 1, float max_val = 0) {
		this->mean = mean;
		this->sigma = sigma;
		rand = 0;
		this->min_val = min_val;
		this->max_val = max_val;
	}
	void set_mean(float value) {
		mean = value;
	}
	void set_sigma(float value) {
		sigma = value;
	}
	void set_min_val(float value) {
		min_val = value;
	}
	void set_max_val(float value) {
		max_val = value;
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
	float rand_float()
	{
		//srand(time(NULL));
		PRNG generator;
		std::mt19937 rnd(time(NULL));

		assert(min_val < max_val);

		std::normal_distribution<float> distribution(min_val, max_val);

		return distribution(generator.engine);
	}
	unsigned rand_int()
	{
		/*PRNG generator;
		std::mt19937 rnd(2);*/
		PRNG generator;
		std::random_device device;
		generator.engine.seed(device());

		assert(min_val < max_val);

		std::normal_distribution<float> distribution(min_val, max_val);
		int value = int(distribution(generator.engine));

		if (value < int(min_val - EPS))
			value = int(min_val - EPS);
		if (value > int(max_val + EPS))
			value = int(max_val + EPS);

		return value;
	}
};