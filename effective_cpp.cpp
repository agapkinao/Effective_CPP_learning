#include <iostream>

using namespace std;

const int iValue = 5;

class CClass
{
	public:
		static const int iValue = 7;
};

const int CClass::iValue;

template<class T>
inline const T& Max(const T& a, const T& b)
{
	return a > b ? a : b;
}

int main()
{
	cout << "max(" << iValue << "," << CClass::iValue << ") = " << Max(iValue, CClass::iValue) ;
	
	return 0;
}