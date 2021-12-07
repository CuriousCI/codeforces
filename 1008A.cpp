#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

bool is_vowel(char character)
{
	string special = "aeiou";
	return special.find(character) != string::npos;
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string word;
	cin >> word;

	bool is_berlanese = true;
	for (auto index = 0; index < word.length() - 1; index++)
	{
		if (!is_vowel(word[index]) && word[index] != 'n')
			is_berlanese = is_vowel(word[index + 1]);
		if (!is_berlanese)
			break;
	}

	cout << (is_berlanese && (is_vowel(word.back()) || word.back() == 'n') ? "YES" : "NO");
}