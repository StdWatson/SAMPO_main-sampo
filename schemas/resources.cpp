/*sheduler/shemas/resources - делаем
							в качестве улучшения кода в программу добавлены сетторы;)*/
#include <string>
#include "interval.h"
#include "types.h"

//using namespace std;

class WorkerProductivityMode {
public:
	std::string Static = "static";
	std::string Stohastic = "stohastic";
};

class Resource {				//надо сделать конструктор
private:
	std::string id;
	std::string name;
	int count;
	std::string contractor_id;
public:
	void set_id(std::string value) {
		id = value;
	}
	void set_name(std::string value) {
		name = value;
	}
	void set_count(int value) {
		count = value;
	}
	void set_contractor_id(std::string value) {
		contractor_id = value;
	}
	std::string get_id() {
		return id;
	}
	std::string get_name() {
		return name;
	}
	int get_count() {
		return count;
	}
	std::string get_contractor_id() {
		return contractor_id;
	}
};

class Worker : public Resource
{
public:
	std::string ignored_fields = "productivity";
private:
	std::string id;
	std::string name;
	int count;
	std::string contractor_id;
	IntervalGaussian productivity;
	float cost_one_unit;
public:
	Worker() : productivity(1, 0, 1, 1)
	{
		id = "";
		name = "";
		contractor_id = "";
		//productivity(1, 0, 1, 1);
		cost_one_unit = productivity.get_mean() * 10;
	}
	std::string get_id() {
		return id;
	}
	std::string get_name() {
		return name;
	}
	int get_count() {
		return count;
	}
	std::string get_contractor_id() {
		return contractor_id;
	}
	float get_cost_one_unit() {
		return cost_one_unit;
	}
	void set_id(std::string id) {
		this->id = id;
	}
	void set_name(std::string name) {
		this->name = name;
	}
	void set_count(int count) {
		this->count = count;
	}
	void set_contractor_id(std::string contractor_id) {
		this->contractor_id = contractor_id;
	}
	void set_cost_one_unit(float cost_one_unit) {
		this->cost_one_unit = cost_one_unit;
	}
	Worker* copy_W(Worker* prev){								//надо потом очистить память!!!
		Worker* newW = new Worker;

		newW->set_id(prev->get_id());
		newW->set_name(prev->get_name());
		newW->set_contractor_id(prev->get_contractor_id());
		newW->set_count(prev->get_count());

		return newW;
	}
	void copy() {
		id = get_id();
		name = get_name();
		count = get_count();
		contractor_id = get_contractor_id();
		//this->productivity = get_productivity();
	}
	int with_count(int count) {
		this->set_count(count);
	}
	float get_cost() {
		return (cost_one_unit * get_count());
	}
	AgentId* get_agent_id() {							//надо потом очистить память!!!
		AgentId* newagent = new AgentId;
		newagent->ContractorName = contractor_id;
		newagent->WorkerName = name;
		return newagent;
	}
	float get_productivity(std::string productivity_mode) {
		WorkerProductivityMode static_mod;

		if (productivity_mode == static_mod.Static)
			return this->productivity.get_mean() * get_count();
		return productivity.rand_float() * get_count();
	}
	std::string _repr() {
		std::string s_count = std::to_string(get_count());
		std::string f_str = s_count + " " + get_name();
		return f_str;
	}
	std::string _str() {
		return _repr();
	}
	/*~Worker()
	{
		delete newW;
	}*/
};

class ConstructionObject : Resource {};

class EmptySpaceConstructionObject : ConstructionObject {
private:
	std::string id;
	std::string name;
public:
	EmptySpaceConstructionObject(void) {
		id = "00000000000000000";
		name = "empty space construction object";
	}
};

class Equipment : Resource {};

class Material : public Resource {
private:
	std::string id;
	std::string name;
	int count;
	float cost_one_unit;
public:
	Material() {
		id = "";
		name = "";
		count = 0;
	}
	std::string get_id() {
		return id;
	}
	std::string get_name() {
		return name;
	}
	int get_count() {
		return count;
	}
	float get_cost_one_unit() {
		return cost_one_unit;
	}
	void set_id(std::string id) {
		this->id = id;
	}
	void set_name(std::string name) {
		this->name = name;
	}
	void set_count(int count) {
		this->count = count;
	}
	void set_cost_one_unit(float cost_one_unit) {
		this->cost_one_unit = cost_one_unit;
	}
	/*Material* copy_M(Material* prev)
	{
		Material* newW;

		newW->set_id(prev->get_id());
		newW->set_name(prev->get_name());
		newW->set_count(prev->get_count());

		return newW;
	}*/
	void copy() {
		this->id = get_id();
		this->name = get_name();
		this->count = get_count();
		//this->productivity = get_productivity();
	}
	int with_count(int value) {
		set_count(value);
		return get_count();
	}
};

/*void main(void)
{
	char ststic[] = { "static" };
}*/