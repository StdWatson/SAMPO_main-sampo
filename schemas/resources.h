/*sheduler/shemas/resources - делаем
							в качестве улучшения кода в программу добавлены сетторы;)*/
//#include <string>
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
	string get_name();
	int get_count();
	string get_id();
};
class Worker : public Resource
{
public:
	string ignored_fields = "productivity";

public:
	Worker();
	Worker* copy(Worker* prev);
};
class EmptySpaceConstructionObject {
private:
	string id;
	string name;
public:
	EmptySpaceConstructionObject(void);
};
class Material : public Resource {
private:
	float cost_one_unit;
public:
	void set_cost_one_unit(float value);
	float get_cost_one_unit(void);
	Material* copy(Material* prev);
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