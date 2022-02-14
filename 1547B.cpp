#include <iostream>
#include <deque>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	string chars;

	cin >> test_cases;
	while (test_cases--)
	{
		cin >> chars;

		uint16_t position = chars.find('a');
		bool is_alphabetical = position != string::npos;

		if (is_alphabetical)
		{
			uint16_t left = position,
					 right = position;
			char letter = 'a';

			while ((left != 0 || right != chars.size() - 1) && is_alphabetical)
				if (chars[left - 1] == letter + 1 && left > 0)
				{
					left--;
					letter++;
				}
				else if (chars[right + 1] == letter + 1 && right < chars.size() - 1)
				{
					right++;
					letter++;
				}
				else
					is_alphabetical = false;
		}

		cout << (is_alphabetical ? "YES" : "NO") << endl;
	}
}