#include <iostream>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	string text;

	cin >> cases;
	while (cases--)
	{
		cin >> text;
		ranges::sort(text);

		bool is_diverse = true;
		for (auto index = 0; index < text.length() - 1; index++)
			if (text[index] + 1 != text[index + 1])
			{
				is_diverse = false;
				break;
			}

		cout << (is_diverse ? "Yes" : "No") << endl;
	}
}