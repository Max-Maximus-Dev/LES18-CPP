#pragma once
using namespace System;

public ref class UserException : public Exception {
public:
	UserException(String^ msg) : Exception(msg) {}
};