//#pragma once
/*shemas/serializable - */
#ifndef serializable_HEADER
#define serializable_HEADER

class Serializable {
private:

public:
	std::string get_full_file_name(std::string, std::string);
};

class StrSerializable : Serializable {
private:
	std::string serializer_extension = "dat";

	struct SS {
		std::string data;
	};

	SS file_data;
public:
	std::string _serialize();
	SS load(std::string, std::string);
	void dump(std::string, std::string);
};
class JSONSerializable : Serializable {
private:
	std::string serializer_extension = "json";

	struct JS {
		std::string data;
	};

	JS file_data;
public:
	std::string _serialize();
	JS load(std::string, std::string);
	void dump(std::string, std::string);
};
class AutoJSONSerializable : JSONSerializable {
private:
	std::string serializer_extension = "json";
	//std::map<std::string, std::map<std::string, Worker>> WorkerContractorPool;

public:

};

#endif
