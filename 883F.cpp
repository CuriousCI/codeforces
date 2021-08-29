#include <iostream>
#include <vector>
#include <map>
#include <cstdint>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(NULL);

	uint32_t words;
	cin >> words;

	map<string, uint32_t> groups;
	string word;
	size_t position = string ::npos;
	while (words--)
	{
		cin >> word;

		while ((position = word.find("u")) != string::npos)
			word.replace(position, 1, "oo");

		while ((position = word.find("oo")) != string::npos)
			word.replace(position, 2, "u");

		while ((position = word.find("kh")) != string::npos)
			word.replace(position, 2, "h");

		groups[word]++;
	}

	cout << groups.size();
}