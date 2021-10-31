#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t cases, size, numbers, number;

	cin >> cases;
	while (cases--)
	{
		uint16_t odds = 0, evens = 0;

		cin >> size >> numbers;
		while (size--)
		{
			cin >> number;
			if (number & 1)
				odds++;
			else
				evens++;
		}

		if (!(numbers & 1) && evens == 0)
			cout << "No";
		else if (odds)
		{
			numbers -= evens;
			numbers = max(numbers, (int16_t)0);
			if (numbers & 1)
				cout
					<< "Yes";
			else
				cout << (odds >= numbers + 1 ? "Yes" : "No");
		}
		else
			cout << "No";
		cout << endl;
	}
}