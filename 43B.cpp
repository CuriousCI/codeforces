#include <iostream>
#include <string>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string
		heading,
		text;

	getline(cin, heading);
	getline(cin, text);

	map<char, uint16_t> letters;
	for (auto letter : heading)
		letters[letter]++;

	for (auto letter : text)
		if (letters[letter])
			letters[letter]--;
		else if (letter != ' ')
		{
			cout << "NO";
			return 0;
		}

	cout << "YES";
}