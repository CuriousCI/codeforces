#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t
		test_cases,
		size;

	cin >> test_cases;
	while (test_cases--)
	{
		cin >> size;
		for (auto number = 2; number <= size + 1; number++)
			cout << number << ' ';
		cout << endl;
	}
}