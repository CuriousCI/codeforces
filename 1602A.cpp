#include <iostream>
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
		auto minimum = min_element(text.begin(), text.end());
		string result;
		for (uint64_t index = 0; index < text.size(); index++)
			if (index != (uint64_t)distance(text.begin(), minimum))
				result += text[index];
		cout << *minimum << ' ' << result << endl;
	}
}