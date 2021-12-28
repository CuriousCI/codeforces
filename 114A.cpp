#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	double
		number,
		petricium,
		exponent = 0;

	cin >> number >> petricium;

	while (pow(number, exponent) < petricium)
		exponent++;

	if (pow(number, exponent) == petricium)
		cout << "YES" << endl
			 << exponent - 1;
	else
		cout << "NO";
}