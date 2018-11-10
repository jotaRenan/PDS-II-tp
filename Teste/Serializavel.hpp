#pragma once

#include <fstream>>
#include <iostream>

class Serializavel {
	public:
		virtual friend std::istream& operator>>(std::istream& is, Serializavel& s) = 0;
		virtual friend std::ostream& operator<<(std::ostream& os, const Serializavel& s) = 0;
};