#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size, zeros = 0;
	bool one = false;
	string binary;
	cin >> size >> binary;

	for (auto digit : binary)
		if (digit == '0')
			zeros++;
		else
			one = true;

	if (one)
	{
		cout << '1';
		for (auto _ = 0; _ < zeros; _++)
			cout << '0';
	}
	else
		cout << '0';
}