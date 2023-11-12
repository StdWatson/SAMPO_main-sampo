//#pragma once
#ifndef identifiable_HEADER
#define identifiable_HEADER

#include <string>

class Identifiable {
private:
	std::string id;
	std::string name;
public:
	void set_id(std::string n_id);
	void set_name(std::string n_name);
	std::string get_id(void);
	std::string get_name(void);
};
#endif



/*
#include <string>

class Identifiable {
private:
	std::string id;
	std::string name;
public:
	void set_id(std::string n_id) {
		id = n_id;
	}
	void set_name(std::string n_name) {
		name = n_name;
	}
	std::string get_id(void) {
		return id;
	}
	std::string get_name(void) {
		return name;
	}
};
*/