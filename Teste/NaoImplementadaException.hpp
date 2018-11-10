#pragma once
#include <iostream>
#include <exception>

class NaoImplementadaException : public std::logic_error
{
	public:
		NaoImplementadaException();
};