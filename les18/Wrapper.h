#pragma once
#include <string>
#include <fstream>

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
