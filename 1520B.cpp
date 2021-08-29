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
	cin >> cases;

	uint32_t number;

	while (cases--)
	{
		cin >> number;
		uint32_t result = 0;
		for (uint32_t power = 1; power <= number; power = power * 10 + 1)
			for (uint32_t digit = 1; digit <= 9; digit++)
				if (power * digit <= number)
					result++;
		cout << result << endl;
	}
}