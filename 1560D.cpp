#include <iostream>
#include <map>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string powers[] = {"1", "2", "4", "8", "16", "32", "64", "128", "256", "512", "1024", "2048", "4096", "8192", "16384", "32768", "65536", "131072", "262144", "524288", "1048576", "2097152", "4194304", "8388608", "16777216", "33554432", "67108864", "134217728", "268435456", "536870912"};

	uint32_t cases;
	cin >> cases;

	string number;

	while (cases--)
	{
		cin >> number;
		uint32_t distance = UINT32_MAX;

		map<char, uint32_t> input;
		for (auto letter : number)
			input[letter]++;

		for (size_t index = 0; index < 30; index++)
		{
			string copy = powers[index];
			for (auto letter : copy)
			{
				if (number.find(letter) != string::npos)
				{
					number.erase(number.find(letter), 1);
					copy.erase(copy.find(letter), 1);
				}
			}

			distance = min(distance, (uint32_t)copy.size() + (uint32_t)number.size());
		}

		cout << distance << endl;
	}
}