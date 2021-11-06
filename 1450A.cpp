#include <iostream>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size;
	string input;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> input;
		ranges::sort(input);
		cout << input << endl;
	}
}