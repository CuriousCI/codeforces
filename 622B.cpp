#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t hours, minutes, time;
	char _;
	cin >> hours >> _ >> minutes >> time;

	auto modulo = time % 60;
	auto passed_hours = (time - modulo) / 60;
	minutes += modulo;
	if (minutes >= 60)
	{
		passed_hours++;
		minutes %= 60;
	}

	hours = (hours + passed_hours) % 24;
	if (hours <= 9)
		cout << '0' << hours;
	else
		cout << hours;

	cout << ':';

	if (minutes <= 9)
		cout << '0' << minutes;
	else
		cout << minutes;
}