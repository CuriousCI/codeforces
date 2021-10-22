#include <iostream>
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
		bool only = true;
		for (auto letter : word)
			if (letter != 'a')
			{
				only = false;
				break;
			}

		if (only)
			cout << "NO";
		else
		{
			auto palindrome = "a" + word;
			bool is_palindrome = true;
			for (auto index = 0; index <= palindrome.length() / 2; index++)
				if (palindrome[index] != palindrome[palindrome.length() - index - 1])
				{
					is_palindrome = false;
					break;
				}

			cout << "YES" << endl
				 << (is_palindrome ? word + "a" : "a" + word);
		}
		cout << endl;
	}
}