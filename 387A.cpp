#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t
		time_hours,
		time_minutes,
		sleep_hours,
		sleep_minutes;

	char placeholder;

	cin >> time_hours >> placeholder >> time_minutes >> sleep_hours >> placeholder >> sleep_minutes;

	auto minutes = time_minutes - sleep_minutes;
	if (minutes < 0)
	{
		time_hours--;
		minutes = 60 + minutes;
	}

	auto hours = time_hours - sleep_hours;
	if (hours < 0)
		hours = 24 + hours;

	if (hours <= 9)
		cout << '0';
	cout << hours << ':';
	if (minutes <= 9)
		cout << '0';
	cout << minutes;
}