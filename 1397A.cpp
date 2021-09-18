#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size;
	string text;

	cin >> cases;
	while (cases--)
	{
		cin >> size;
		map<char, uint32_t> frequencies;
		for (size_t _ = 0; _ < size; _++)
		{
			cin >> text;
			for (auto letter : text)
				frequencies[letter]++;
		}

		bool possible = true;
		for (auto frequency : frequencies)
			if (frequency.second % size)
			{
				possible = false;
				break;
			}

		cout << (possible ? "YES" : "NO") << endl;
	}
}