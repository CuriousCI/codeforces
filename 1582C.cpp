#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint64_t size;
	string pattern;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> pattern;
		int64_t minimal = INT64_MAX;
		bool doable = false;

		for (auto letter = 'a'; letter <= 'z'; letter++)
		{
			bool palindrome = true;
			int64_t erased = 0;
			for (int64_t left = 0, right = size - 1; left < right; left++, right--)
				while (pattern[left] != pattern[right] && left < right)
					if (pattern[left] == letter && left < right)
					{
						left++;
						erased++;
					}
					else if (pattern[right] == letter && right > left)
					{
						right--;
						erased++;
					}
					else
					{
						palindrome = false;
						break;
					}

			doable |= palindrome;
			if (palindrome)
				minimal = min(minimal, erased);
		}

		cout << (doable ? minimal : -1) << endl;
	}
}