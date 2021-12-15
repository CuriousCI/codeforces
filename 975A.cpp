#include <iostream>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t words_count;
	cin >> words_count;

	string word;
	set<string> distinct_objects;

	while (words_count--)
	{
		cin >> word;

		set<char> distinct_letters;
		for (auto letter : word)
			distinct_letters.insert(letter);

		string object;
		for (auto letter : distinct_letters)
			object += letter;

		distinct_objects.insert(object);
	}

	cout << distinct_objects.size();
}