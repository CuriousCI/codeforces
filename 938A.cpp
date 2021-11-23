#include <iostream>
#include <string.h>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t length;
	string word;

	cin >> length >> word;
	bool is_vowel = strchr("aeiouy", word.front());

	cout << word.front();
	for (auto chr = 1; chr < length; chr++)
		if (is_vowel)
		{
			if (!(is_vowel = strchr("aeiouy", word[chr])))
				cout << word[chr];
		}
		else
		{
			is_vowel = strchr("aeiouy", word[chr]);
			cout << word[chr];
		}
}