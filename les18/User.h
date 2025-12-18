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

public ref class WrappedUser {
public:
	void saveToFile(std::string filename, std::string& name, std::string& lastName, int age) {
		NativeUser nativeUser(name, lastName, age);
		std::ofstream file(filename, std::ios::app);
		if (file.is_open()) {
			file << "Name - " << nativeUser.getName() << std::endl;
			file << "LastName - " << nativeUser.getLastName() << std::endl;
			file << "Age - " << nativeUser.getAge() << std::endl;
			file.close();
		}
	}
};
