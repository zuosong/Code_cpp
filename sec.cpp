#include <iostream>
#include <limits>
#include <bitset>
 
using namespace std;
 
int main()
{
	/*
		Use bitset to create a binary set.
		numeric_limits<unsigned int>::digits is the binary length of type unsigned int.
 
		use constructor : bitset<T>(unsigned int binary_length);
 
	 */
	cout << bitset<numeric_limits< unsigned int>::digits>((unsigned int)(-10)) << endl;
	return 0;
}

