#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;
	while (cases--)
	{
		uint64_t number, divisor, steps = 0;
		cin >> number >> divisor;
		while (number > 0)
		{
			if (number % divisor)
			{
				uint64_t modulo = number % divisor;
				steps += modulo;
				number -= modulo;
			}
			else
			{
				number /= divisor;
				steps++;
			}
		}

		cout << steps << endl;
	}
}