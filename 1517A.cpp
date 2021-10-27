#include <iostream>
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
		if (number % 2050)
			cout << -1;
		else
		{
			number /= 2050;
			auto sum = 0;
			while (number)
			{
				sum += number % 10;
				number /= 10;
			}
			cout << sum;
		}

		cout << endl;
	}
}