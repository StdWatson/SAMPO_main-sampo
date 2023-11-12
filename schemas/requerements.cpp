/*/schemas/requerements - это хз что. хз зачем, но он тут есть.страдаем*/
#include <string>
#include <cmath>
#include "Time.h"

#define DEFAULT_MAX_COUNT 100

class WorkerReq{
private:
	std::string kind;
	Time volume;
	int min_count;
	int max_count;
	std::string name;
public:
	WorkerReq(void) {
		min_count = 1;
		max_count = DEFAULT_MAX_COUNT;
		name = "";
	}
	void set_kind(std::string kind) {
		this->kind = kind;
	}
	void set_name(std::string name) {
		this->name = name;
	}
	void set_min_count(int min_count) {
		this->min_count = min_count;
	}
	void set_max_count(int max_count) {
		this->max_count = max_count;
	}
	void set_volume(Time volume) {
		this->volume = volume;
	}
	std::string get_kind(void) {
		return this->kind;
	}
	std::string get_name(void) {
		return this->name;
	}
	int get_min_count(void) {
		return this->min_count;
	}
	int get_max_count(void) {
		return this->max_count;
	}
	Time get_volume(void) {
		return this->volume;
	}
	void scale_all(float scalar, std::string new_name) {
		int  new_max_count = round(get_max_count() * scalar);

		if (new_max_count < get_min_count())
			new_max_count = get_min_count();
		if (new_name == "")
			new_name = get_name();

		set_max_count(new_max_count);
		set_name(new_name);
		set_volume(volume * int(round(scalar)));
	}
	void scale_volume(float scalar, std::string new_name) {
		int  new_max_count = round(get_max_count() * scalar);

		if (new_max_count < get_min_count())
			new_max_count = get_min_count();
		if (new_name == "")
			new_name = get_name();

		set_max_count(new_max_count);
		set_name(new_name);
		set_volume(volume * int(round(scalar)));
	}
};
class EquipmentReq {
private:
	std::string kind;
	int count;
	std::string name;
public:
	void set_kind(std::string kind) {
		this->kind = kind;
	}
	void set_name(std::string name) {
		this->name = name;
	}
	void set_count(int count) {
		this->count = count;
	}
	std::string get_kind(void) {
		return this->kind;
	}
	std::string get_name(void) {
		return this->name;
	}
	int get_count(void) {
		return this->count;
	}
};
class ConstructionObjectReq {
private:
	std::string kind;
	int count;
	std::string name;
public:
	void set_kind(std::string kind) {
		this->kind = kind;
	}
	void set_name(std::string name) {
		this->name = name;
	}
	void set_count(int count) {
		this->count = count;
	}
	std::string get_kind(void) {
		return this->kind;
	}
	std::string get_name(void) {
		return this->name;
	}
	int get_count(void) {
		return this->count;
	}
};
