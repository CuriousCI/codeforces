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
		uint16_t size;
		cin >> size;
		for (auto number = 1; number <= size; number++)
			cout << number << ' ';
		cout << endl;
	}
}