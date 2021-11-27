#include <iostream>
#include <regex>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	string number;
	cin >> cases;
	while (cases--)
	{
		cin >> number;
		bool has_even = regex_search(number, regex("[2468]"));
		if (!has_even)
			cout << -1;
		else
			cout << (regex_search(number, regex("[2468]$")) ? 0 : 1)
	}
}