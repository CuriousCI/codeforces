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
		uint16_t length, max_palindrome;
		cin >> length >> max_palindrome;

		for (auto _ = 0; _ < length; _++)
			cout << char('a' + (_ % 3));
		cout << endl;
	}
}