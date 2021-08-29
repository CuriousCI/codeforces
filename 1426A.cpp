#include <iostream>
#include <math.h>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint32_t number, apartments;
	cin >> cases;
	while (cases--)
	{
		cin >> number >> apartments;
		if (number <= 2)
			cout << 1;
		else
			cout << (number - 3) / apartments + 2;
		cout << endl;
	}
}