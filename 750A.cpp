#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t problems, minutes;
	cin >> problems >> minutes;

	while (problems * (problems + 1) / 2 * 5 > 240 - minutes)
		problems--;

	cout << problems;
}