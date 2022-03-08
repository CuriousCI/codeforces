#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string text, corrected;
	cin >> text;

	bool has_mistakes = true;
	while (has_mistakes)
	{
		has_mistakes = false;
		for (auto letter = 0; letter < text.length() && !has_mistakes; letter++)
			if (text[letter] == text[letter + 1])
			{
				has_mistakes = true;
				corrected += text.substr(letter + 2, text.length() - (letter + 2));
			}
			else
				corrected += text[letter];

		text = corrected;
		corrected = "";
	}

	cout << text;
}