#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	int64_t number;
	cin >> cases;
	while (cases--)
	{
		cin >> number;
		int64_t sum = (number * (number + 1)) / 2, power = 1;
		while (power <= number)
		{
			sum -= power * 2;
			power *= 2;
		}

		cout << sum << endl;
	}
}