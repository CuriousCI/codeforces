#include <iostream>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		string number;
		cin >> number;

		bool found = false;
		for (auto index = 0; index < number.length() - 1; index++)
			if ((number[index] - '0') + (number[index + 1] - '0') >= 10)
			{
				number[index + 1] = to_string((number[index] - '0') + (number[index + 1] - '0'))[1];
				number[index] = '1';
				found = true;
				break;
			}

		if (found)
			for (auto digit : number)
				cout << digit;
		else
		{
			cout << (number[0] - '0') + (number[1] - '0');
			for (auto index = 2; index < number.length(); index++)
				cout << number[index];
		}

		cout << endl;
	}
}