#include <iostream>
#include <regex>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string sentence;
	cin >> sentence;

	regex expression(" [a-z]?[A-Z]+ ");
	smatch match;

	if (regex_search(sentence, match, regex("^[a-z]$")))
	{
		cout << (char)toupper(sentence[0]);
	}
	else
	{
		sentence += ' ';
		sentence = ' ' + sentence;

		while (regex_search(sentence, match, expression))
		{
			auto begin = sentence.begin() + match.position();
			for (auto letter = begin; letter <= begin + match.length(); letter++)
				if (isupper(*letter))
					*letter = tolower(*letter);
				else
					*letter = toupper(*letter);
		}

		cout << sentence;
	}
}