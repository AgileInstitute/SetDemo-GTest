#pragma once

#include <string>
#include <vector>

#include <NotALegitimateElementForThisTypeOfSet.h>

using namespace std;

class Set
{
private:
	vector<string> elements;

public:
	void add(string element);
	int size();
	bool contains(string element);

	Set(void);
	~Set(void);
};

