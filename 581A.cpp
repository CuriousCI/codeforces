#include <iostream>
#include <cstdint>
#include <math.h>

using namespace std;

int main()
{
	uint16_t blue, red;
	cin >> red >> blue;

	uint16_t min = (red < blue ? red : blue),
			 max = (red < blue ? blue : red);

	cout << min << ' ' << floor((float)(max - min) / 2);
}