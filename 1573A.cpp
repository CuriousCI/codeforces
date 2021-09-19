#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, digits;
	string number;

	cin >> cases;
	while (cases--)
	{
		cin >> digits >> number;

		uint64_t steps = 0;
		for (size_t chr = 0; chr < number.length(); chr++)
			if (number[chr] - '0')
				steps += number[chr] - '0' + (chr < number.length() - 1);

		cout << steps << endl;
	}
}