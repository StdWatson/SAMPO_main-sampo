/*shemas/serializable - */
#include <iostream>
#include <string>
#include <fstream>

/*struct SS {
	std::string data;
};*/
class Serializable {
private:

public:
	std::string get_full_file_name(std::string folder_path, std::string file_name) {
		std::string full_file_name = folder_path + file_name;
		return full_file_name;
	}
};
/*class StrSerializable : Serializable {
private:
	std::string serializer_extension = "dat";
public:

};*/

class StrSerializable : Serializable {
private:
	std::string serializer_extension = "dat";

	struct SS {
		std::string data;
	};

	SS file_data;
public:
	std::string _serialize() {
		return file_data.data;
	}
	SS load(std::string folder_path, std::string file_name) {
		std::string full_file_name = get_full_file_name(folder_path, file_name);
		std::ifstream read_file(full_file_name);

		if (!read_file.is_open())
			std::cout << "Open file error" << std::endl;
		else {
			std::string inf_str;

			while (getline(read_file, inf_str))
				file_data.data += inf_str;
		}
		read_file.close();

		return file_data;
	}
	void dump(std::string folder_path, std::string file_name) {
		std::string full_file_name = get_full_file_name(folder_path, file_name);
		std::ofstream write_file(full_file_name, std::ios_base::out);

		if (!write_file.is_open())
			std::cout << "Open file error" << std::endl;
		else {
			write_file << file_data.data;
		}
		write_file.close();
	}
};
class JSONSerializable : Serializable {
private:
	std::string serializer_extension = "json";

	struct JS {
		std::string data;
	};

	JS file_data;
public:
	std::string _serialize() {
		return file_data.data;
	}
	JS load(std::string folder_path, std::string file_name) {
		std::string full_file_name = get_full_file_name(folder_path, file_name);
		std::ifstream read_file(full_file_name);
		//SS file_data;

		/*read_file.seekg(0, std::ios_base::end);
		int size = read_file.tellg();
		read_file.seekg(0, std::ios_base::beg);*/

		if (!read_file.is_open())
			std::cout << "Open file error" << std::endl;
		else {
			std::string inf_str;

			while (getline(read_file, inf_str))
				file_data.data += inf_str;
		}
		read_file.close();

		return file_data;
	}
	void dump(std::string folder_path, std::string file_name) {
		std::string full_file_name = get_full_file_name(folder_path, file_name);
		std::ofstream write_file(full_file_name, std::ios_base::out);

		if (!write_file.is_open())
			std::cout << "Open file error" << std::endl;
		else {
			write_file << file_data.data;
		}
		write_file.close();
	}
};
class AutoJSONSerializable : JSONSerializable {
private:
	std::string serializer_extension = "json";
	//std::map<std::string, std::map<std::string, Worker>> WorkerContractorPool;

public:

};
