#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;
	while (cases--)
	{
		string word;
		cin >> word;

		bool is_square = !(word.length() & 1);
		for (auto index = 0; index < word.length() / 2 && is_square; index++)
			is_square = word[index] == word[word.length() / 2 + index];

		cout << (is_square ? "YES" : "NO") << endl;
	}
}