#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string number;
	cin >> number;

	bool is_magic = true;
	uint64_t sequence = 0;
	for (auto index = 0; index < number.length(); index++)
	{
		if (number[index] != '1' && number[index] != '4')
			is_magic = false;

		if (number[index] == '1')
			sequence = 1;
		if (number[index] == '4' && sequence)
			sequence++;
		if ((number[index] == '4' && !sequence) || sequence >= 4)
			is_magic = false;

		if (!is_magic)
			break;
	}

	cout << (is_magic ? "YES" : "NO");
}