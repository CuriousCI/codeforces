#include <iostream>
#include <vector>
#include <string>
#include <regex>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string jabberId;
	getline(cin, jabberId);

	vector<uint16_t> separators;
	auto index = 0;
	for (auto character : jabberId)
	{
		if (character == '.' || character == '@' || character == '/')
			separators.push_back(index);
		index++;
	}

	if (separators.size())
	{

		bool at = jabberId[separators.front()] == '@', dot = false, slash = false;
		for (auto separator : separators)
			if (!at)
				break;
			else
			{
				if (jabberId[separator] == '.')
					dot = true;

				if (dot && jabberId[separator] == '/')
					slash = true;

				if (slash && jabberId[separator] != '/' ||
					dot && jabberId[separator] == '@')
					at = false;
			}

		separators.push_back(jabberId.length());

		auto substring = jabberId.substr(0, separators.front());
		bool correct = regex_search(substring, regex("^[a-zA-Z0-9_]*$")) && substring.size() && substring.size() <= 16;

		for (auto index = 0; index < separators.size() - 1; index++)
		{
			substring = jabberId.substr(separators[index] + 1, separators[index + 1] - separators[index] - 1);
			correct = correct && regex_search(substring, regex("^[a-zA-Z0-9_]*$")) && substring.size() && substring.size() <= 16;
		}

		cout << (correct && ((at && !dot && !slash) || (at && dot && !slash) || (at && dot && slash)) ? "YES" : "NO");
	}
	else
		cout << "NO";
}