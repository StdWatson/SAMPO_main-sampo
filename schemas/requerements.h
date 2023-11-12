#ifndef requerements_HEADER
#define requerements_HEADER
#include <string>
#include "Time.h"


#define DEFAULT_MAX_COUNT 100

class WorkerReq {
private:
	std::string kind;
	Time volume;
	int min_count;
	int max_count;
	std::string name;
public:
	WorkerReq();
	void set_kind(std::string kind);
	void set_name(std::string name);
	void set_min_count(int min_count);
	void set_max_count(int max_count);
	void set_volume(Time volume);
	std::string get_kind(void);
	std::string get_name(void);
	int get_min_count(void);
	int get_max_count(void);
	Time get_volume(void);
	void scale_all(float scalar, std::string new_name);
	void scale_volume(float scalar, std::string new_name);
};
class EquipmentReq {
private:
	std::string kind;
	int count;
	std::string name;
public:
	void set_kind(std::string kind);
	void set_name(std::string name);
	void set_count(int count);
	std::string get_kind(void);
	std::string get_name(void);
	int get_count(void);
};
class ConstructionObjectReq {
private:
	std::string kind;
	int count;
	std::string name;
public:
	void set_kind(std::string kind);
	void set_name(std::string name);
	void set_count(int count);
	std::string get_kind(void);
	std::string get_name(void);
	int get_count(void);
};
#endif
