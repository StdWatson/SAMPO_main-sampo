/*schemas/contractor - */
#include <iostream>
#include <map>
#include "types.h"
#include "resources.h"
#include "identifiable.h"
#include "serializable.h"

//std::map<std::string, Worker>
std::map<std::string, std::map<std::string, Worker>> WorkerContractorPool;
int DEFAULT_CONTRACTOR_CAPACITY = 25;

class Contractor : AutoJSONSerializable {
private:
	std::map<std::string, Worker> workers;
	std::map<std::string, Equipment> equipments;
public:
	void __post_init__() {

	}
};