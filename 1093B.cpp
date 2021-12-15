#include <iostream>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	string word;

	cin >> cases;
	while (cases--)
	{
		cin >> word;
		ranges::sort(word);

		bool is_palindrome = true;
		for (auto index = 0; index < word.length() / 2; index++)
			if (word[index] != word[word.length() - index - 1])
			{
				is_palindrome = false;
				break;
			}

		cout << (is_palindrome ? "-1" : word) << endl;
	}
}