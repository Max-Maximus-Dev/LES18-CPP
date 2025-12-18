#pragma once
#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>

class NativeUser {
private:
	std::string name, lastName;
	int age;
public:
	NativeUser (std::string& name, std::string& lastName, int age) : name(name), lastName(lastName), age(age) {}
	std::string getName() { return name; }
	std::string getLastName() { return lastName; }
	int getAge() { return age; }
};

