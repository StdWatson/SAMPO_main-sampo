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
	WorkerReq(void);
};
#endif
