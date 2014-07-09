#pragma once

#include <string>
#include <vector>
using namespace std;

class Set
{
private:
	vector<string> elements;

public:
	void add(string element);
	int size();

	Set(void);
	~Set(void);
};

