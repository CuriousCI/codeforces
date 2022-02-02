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
		uint16_t length;
		string binary;
		cin >> length >> binary;

		bool contains_palindrome = false;
		for (auto index = 0; index < length - 1 && !contains_palindrome; index++)
			contains_palindrome = binary[index] == binary[index + 1] || binary[index] == binary[index + 2];

		cout << (contains_palindrome ? "NO" : "YES") << endl;
	}
}