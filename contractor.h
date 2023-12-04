#ifndef CONTRACTOR_H
#define CONTRACTOR_H

#include <map>

#include "identifiable.h"
#include "resources.h"


std::map<std::string, std::map<std::string, Worker>> WorkerContractorPool;

class Contractor : public Identifiable {
public:
    vector<Worker*> workers;

    explicit Contractor(vector<Worker*>& workers) : workers(workers) {}
};

#endif