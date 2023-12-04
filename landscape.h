#pragma once
//SAMPO-main/sampo/schemas/landscape - 

#include <string>
#include <vector>
#include "interval.h"
#include "resources.h"

using namespace std;

class ResourceSupply : Resource {
public:
	string id;
	string name;
	int count;

	explicit ResourceSupply(string id, string name, int count) : Resource(id, name, count){};
};
class Road : ResourceSupply {
public:
	string  id;
	string name;
	IntervalGaussian throughput;

	explicit Road(string id, string name, IntervalGaussian throughput) : ResourceSupply(id, name, int(throughput.mean)) {};
};
class ResourceHolder : ResourceSupply {
public:
	string id;
	string name;
	IntervalGaussian productivity;
	vector<Material*> materials;

	explicit ResourceHolder(string id, string name, IntervalGaussian productivity, vector<Material*>& materials)
		: ResourceSupply(id, name, int(productivity.mean)) {};
};
class LandscapeConfiguration {
public:
	vector<Road*> roads;
	vector<ResourceHolder*> holders;

	explicit LandscapeConfiguration(vector<Road*>& roads, vector<ResourceHolder*>& holders)
		: roads(roads), holders(holders) {};


};