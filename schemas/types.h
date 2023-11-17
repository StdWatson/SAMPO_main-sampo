/*sheduler/shemas/types - набор нужных типов*/
//#include <string>
//#include<tuple>
#include "Time.h"

//using namespace std;

/*std::string ContractorName;
std::string WorkerName;*/
//std::tuple <std::string, std::string> AgentId(ContractorName, WorkerName);

struct AgentId {
	std::string ContractorName;
	std::string WorkerName;
};

class EventType {
private:
	int INITIAL = -1;
	int START = 0;
	int END = 1;
public:
	int get_INITIAL();
	int get_START();
	int get_END();
};

class ScheduleEvent : public EventType {
private:
	int seq_id;
	EventType event_type;
	//double Time;	//time : Time
	Time time;
	//swork: Optional['ScheduledWork']
	std::string swork;
	int available_workers_count;
};