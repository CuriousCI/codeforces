#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t
		cases,
		length,
		queries_count,
		start,
		end,
		left,
		right;
	string input;

	cin >> cases;
	while (cases--)
	{
		cin >> length >> queries_count >> input;
		while (queries_count--)
		{
			cin >> start >> end;

			for (left = 0; left < length; left++)
				if (input[left] == input[start - 1])
					break;

			for (right = length - 1; right >= 0; right--)
				if (input[right] == input[end - 1])
					break;

			cout << (left < start - 1 || right > end - 1 ? "YES" : "NO") << endl;
		}
	}
}