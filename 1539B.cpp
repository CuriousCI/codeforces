#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t length, questions, left, right;
	string song;

	cin >> length >> questions >> song;
	while (questions--)
	{
		cin >> left >> right;
		auto result = 0;
		for (auto letter = left - 1; letter < right; letter++)
			result += song[letter] * (song[letter] - 'a' - 1);
		cout << result;
	}
}