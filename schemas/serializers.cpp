/*scheduler/utilities/serializers - из папки utilities, т.е. он тут временно*/
#include <string>
#include <typeinfo>

std::string CUSTOM_FIELD_SERIALIZER = "_serializer_for_fields";
std::string CUSTOM_FIELD_DESERIALIZER = "_deserializer_for_fields";
std::string CUSTOM_TYPE_SERIALIZER = "_serializer_for_types";
std::string CUSTOM_TYPE_DESERIALIZER = "_deserializer_for_types";

std::string custom_serializer(std::string type_or_field, bool deserializer)		//deserializer: bool = False, пока не вижу конкретного применения не исправлю
{
	if (typeid(type_or_field).name() == typeid(std::string).name()) {
		if (deserializer)
			return custom_field_deserializer(type_or_field);
		return custom_field_serializer(type_or_field);
	}
	std::string TypeError = "Unexpected type of param type_or_field";
	return TypeError;
}
int default_np_long_serializer(int n) {
	return int(n);
}
long default_np_long_deserializer(int n) {
	return long(n);
}