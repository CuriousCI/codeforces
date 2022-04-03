#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string input;
	cin >> input;

	if (input.length() == 4)
		cout << "none";
	else
	{
		string title = "the";

		if (input.length() == 5)
			title = "buffy";
		else if (input.length() == 6)
			title = "slayer";
		else if (input.length() == 7)
			title = "vampire";

		for (auto letter = 0; letter < input.length(); letter++)
			input[letter] = 'a' + (input[letter] - 'a' + title[letter] - 'a') % 26;

		cout << input;
	}
}