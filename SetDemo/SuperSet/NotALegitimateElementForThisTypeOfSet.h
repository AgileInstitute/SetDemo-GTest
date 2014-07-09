#include <exception>

class NotALegitimateElementForThisTypeOfSet : public std::exception {
public:
	virtual const char* what();
};