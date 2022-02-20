#include <iostream>
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
		uint16_t length, operations;
		cin >> length >> operations;

		string input;
		cin >> input;

		bool is_palindrome = true;
		for (auto index = 0; index < length / 2 && is_palindrome; index++)
			is_palindrome = input[index] == input[length - index - 1];

		cout << (is_palindrome ? 1 : min((int)operations + 1, 2)) << endl;
	}
}