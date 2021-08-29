#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string guest, host, letters;
	cin >> guest >> host >> letters;

	map<char, uint32_t> input, output;

	for (auto letter : guest)
		input[letter]++;
	for (auto letter : host)
		input[letter]++;
	for (auto letter : letters)
		output[letter]++;

	for (auto item : input)
		if (output[item.first] != item.second || host.length() + guest.length() != letters.length())
		{
			cout << "NO";
			return 0;
		}

	cout << "YES";
}
