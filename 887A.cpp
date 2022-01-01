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

	bool has_ones = false;
	auto index = 0;
	for (auto digit : binary)
		if (digit == '1')
		{
			has_ones = true;
			break;
		}
		else
			index++;

	auto zeros = 0;
	for (auto it = index; it < binary.length(); it++)
		if (binary[it] == '0')
			zeros++;

	if (!has_ones || zeros < 6)
		cout << "no";
	else
		cout << "yes";
}