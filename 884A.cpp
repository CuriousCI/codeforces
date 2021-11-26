#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int32_t days_count, required_time, day, days = 0;

	cin >> days_count >> required_time;

	while (days_count--)
	{
		cin >> day;
		required_time -= 86400 - day;
		days++;
		if (required_time <= 0)
			break;
	}

	cout << days;
}