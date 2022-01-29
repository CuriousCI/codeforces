#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string binary;
	cin >> binary;

	bool found = false;
	uint64_t digit = 0;
	for (; digit < binary.length() && !found; digit++)
		found = binary[digit] == '0';
	digit--;

	if (found)
	{
		for (auto _ = 0; _ < binary.length(); _++)
			if (_ != digit)
				cout << binary[_];
	}
	else
		for (auto _ = 1; _ < binary.length(); _++)
			cout << binary[_];
}