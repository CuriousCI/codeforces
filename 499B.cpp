#include <iostream>
#include <cstdint>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t lecture, words;
	cin >> lecture >> words;

	string first, second, professor;
	map<string, string> dictionary;
	while (words--)
	{
		cin >> first >> second;
		dictionary[first] = second;
	}

	while (lecture--)
	{
		cin >> professor;
		cout << (dictionary[professor].length() < professor.length() ? dictionary[professor] : professor) << ' ';
	}
}