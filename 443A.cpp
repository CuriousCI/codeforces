#include <iostream>
#include <string>
#include <set>
#include <cstdint>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string input;
	getline(cin, input);

	if (input.length() > 3)
	{

		set<char> letters;
		for (auto letter : input)
			letters.insert(letter);

		cout << letters.size() - 4;
	}
	else
		cout << (input.length() == 2 ? 0 : 1);
}