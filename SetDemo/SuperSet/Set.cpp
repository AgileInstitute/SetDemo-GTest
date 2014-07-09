#include "Set.h"
#include <algorithm>

using namespace std;

void Set::add(string element)
{
	if (element.empty())
		throw NotALegitimateElementForThisTypeOfSet();

	if (!contains(element))
		elements.push_back(element);
}

bool Set::contains(string element)
{
	return find(elements.begin(), elements.end(), element) != elements.end();
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
