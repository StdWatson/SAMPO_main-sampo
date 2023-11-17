/*sheduler/shemas/types - набор нужных типов*/
#include <string>
//#include <tuple>

//using namespace std;

/*std::string ContractorName;
std::string WorkerName;*/

//std::tuple <std::string, std::string> AgentId(ContractorName, WorkerName);
//AgentId = make_tuple(ContractorName, WorkerName);

/*struct AgentId {
	std::string ContractorName;
	std::string WorkerName;
};*/

class EventType {
private:
	int INITIAL = -1;
	int START = 0;
	int END = 1;
public:
	int get_INITIAL() {
		return INITIAL;
	}
	int get_START() {
		return START;
	}
	int get_END() {
		return END;
	}
};

class ScheduleEvent : public EventType {
private:
	int seq_id;
	EventType event_type;
	double Time;	//time : Time
	//swork: Optional['ScheduledWork']
	int available_workers_count;
};