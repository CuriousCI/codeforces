#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size;
	cin >> cases;

	while (cases--)
	{
		cin >> size;
		int64_t number, negative = 0, zero = 0, positive = 0;

		while (size--)
		{
			cin >> number;
			if (!number)
				zero++;
			else if (number < 0)
				negative += -1 * number;
			else
				positive += number;
		}

		cout << zero + (positive + zero - negative == 0) << endl;
	}
}