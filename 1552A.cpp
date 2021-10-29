#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, length;
	string text, sorted;

	cin >> cases;
	while (cases--)
	{
		cin >> length >> text;
		sorted = text;
		sort(sorted.begin(), sorted.end());

		auto changed = 0;
		for (auto letter = 0; letter < length; letter++)
			changed += (sorted[letter] != text[letter]);

		cout << changed << endl;
	}
}