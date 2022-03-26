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
		uint64_t deadline, execution_time;
		cin >> deadline >> execution_time;

		if (execution_time <= deadline)
			cout << "YES";
		else
		{
				}
	}
}