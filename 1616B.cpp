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

		string alpha;
		alpha += word.front();
		alpha += word.front();

		string beta;
		beta += alpha.front();
		for (auto index = 1; index < word.length(); index++)
			if (word[index] <= word[index - 1])
				beta += word[index];
			else
				break;

		string reversed = beta;
		ranges::reverse(reversed);
		cout << (alpha < beta + reversed ? alpha : beta + reversed) << endl;
	}
}
