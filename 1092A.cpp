#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, length, distinct;

	cin >> cases;
	while (cases--)
	{
		cin >> length >> distinct;

		string result;
		for (auto offset = 0; offset < length; offset++)
			result += 'a' + (offset % distinct);
		cout << result << endl;
	}
}