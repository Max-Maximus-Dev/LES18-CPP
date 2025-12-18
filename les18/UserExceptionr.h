#pragma once
using namespace System;

public ref class UserException : public Exception {
private:
	
public:
	UserException(String^ msg) : Exception(msg) {}
};