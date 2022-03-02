#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string first_layout, second_layout, text, converted;
	cin >> first_layout >> second_layout >> text;

	map<char, char> converter;
	for (auto letter = 0; letter < first_layout.length(); letter++)
		converter[first_layout[letter]] = second_layout[letter];

	for (auto letter : text)
		if (isdigit(letter))
			converted += letter;
		else if (isupper(letter))
			converted += toupper(converter[tolower(letter)]);
		else
			converted += (char)converter[letter];

	cout << converted;
}