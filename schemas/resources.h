/*sheduler/shemas/resources - делаем
							в качестве улучшения кода в программу добавлены сетторы;)*/
//#include <string>
#include "identifiable.h"

//using namespace std;

class WorkerProductivityMode {
public:
	std::string Static = "static";
	std::string Stohastic = "stohastic";
};

class Resource : Identifiable {
private:
	std::string id;
	std::string name;
	int count;
	std::string contractor_id;
public:
	void set_id(std::string value);
	void set_name(std::string value);
	void set_count(int value);
	void set_contractor_id(std::string value);
	std::string get_contractor_id();
	std::string get_name();
	int get_count();
	std::string get_id();
};
class Worker : public Resource
{
public:
	std::string ignored_fields = "productivity";

public:
	Worker();
	std::string get_id();
	std::string get_name();
	int get_count();
	std::string get_contractor_id();
	float get_cost_one_unit();
	void set_id(std::string id);
	void set_name(std::string name);
	void set_count(int count);
	void set_contractor_id(std::string contractor_id);
	void set_cost_one_unit(float cost_one_unit);
	//Worker* copy_W(Worker* prev);
	void copy();
	int with_count(int count);
	float get_cost();
	//AgentId* get_agent_id();
	float get_productivity(std::string productivity_mode);
	std::string _repr();
	std::string _str();
};

class Equipment : Resource {};

class EmptySpaceConstructionObject {
private:
	std::string id;
	std::string name;
public:
	EmptySpaceConstructionObject(void);
};
class Material : public Resource {
private:
	std::string id;
	std::string name;
	int count;
	float cost_one_unit;
public:
	Material();
	std::string get_id();
	std::string get_name();
	int get_count();
	float get_cost_one_unit();
	void set_id(std::string id);
	void set_name(std::string name);
	void set_count(int count);
	void set_cost_one_unit(float cost_one_unit);
	Material* copy_M(Material* prev);
	void copy();
	int with_count(int value);
};

/*void main(void)
{
	char ststic[] = { "static" };
}*/
/*
#include "identifiable.h"

using namespace std;

class WorkerProductivityMode {
public:
	string Static = "static";
	string Stohastic = "stohastic";
};

class Resource : Identifiable {
private:
	string id;
	string name;
	int count;
	string contractor_id;
public:
	void set_id(string value);
	void set_name(string value);
	void set_count(int value);
	void set_contractor_id(string value);
	string get_agent_id();
	string get_name() {
		return name;
	}
	int get_count() {
		return count;
	}
	string get_id() {
		return id;
	}
};
class Worker : public Resource
{
public:
	string ignored_fields = "productivity";

public:
	Worker() {

	}
	Worker* copy(Worker* prev)
	{
		Worker* newW;

		newW->set_id(prev->get_id());
		newW->set_name(prev->get_name());
		newW->set_contractor_id(prev->get_agent_id());
		newW->set_count(prev->get_count());

		return newW;
	}
};
class EmptySpaceConstructionObject {
private:
	string id;
	string name;
public:
	EmptySpaceConstructionObject(void) {
		id = "00000000000000000";
		name = "empty space construction object";
	}
};
class Material : public Resource {
private:
	float cost_one_unit;
public:
	void set_cost_one_unit(float value) {
		cost_one_unit = value;
	}
	float get_cost_one_unit(void) {
		return cost_one_unit;
	}
	Material* copy(Material* prev)
	{
		Material* newW;

		newW->set_id(prev->get_id());
		newW->set_name(prev->get_name());
		newW->set_count(prev->get_count());

		return newW;
	}
	int with_count(int value) {
		set_count(value);
		return get_count();
	}
};
*/