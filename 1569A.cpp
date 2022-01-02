#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, length;
	cin >> cases;
	while (cases--)
	{
		string word;
		cin >> length >> word;

		bool found = false;
		for (auto index = 0; index < length - 1 && !found; index++)
			if (word[index] != word[index + 1])
			{
				found = true;
				cout << index + 1 << ' ' << index + 2;
			}

		if (!found)
			cout << "-1 -1";

		cout << endl;
	}
}