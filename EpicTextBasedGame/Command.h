#pragma once
#include <sstream>

class Command
{
public:
	Command();
	~Command();

	void parse();
	void split();
};

