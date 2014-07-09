#include "Set.h"

using namespace std;

void Set::add(string element)
{
	elements.push_back(element);
}


int Set::size()
{
	return elements.size();
}

Set::Set(void)
{
}


Set::~Set(void)
{
}
