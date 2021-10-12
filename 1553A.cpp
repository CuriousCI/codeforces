#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint64_t number;

	cin >> cases;
	while (cases--)
	{
		cin >> number;
		cout << (number / 10) + (number % 10 == 9) << endl;
	}
}