#include <iostream>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t cases;
	cin >> cases;
	while (cases--)
	{
		uint64_t length;
		string word;
		cin >> length >> word;

		uint64_t smallest = 0;
		for (int64_t right = length - 1; right >= 0; right--)
			if (word[right] < word[smallest])
				smallest = right;
			else
				break;

		for (size_t index = 0; index <= smallest; index++)
			cout << word[index];
		for (int64_t index = smallest; index >= 0; index--)
			cout << word[index];
		cout << endl;
	}
}
