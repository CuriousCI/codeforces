#include <iostream>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Time
{
	uint16_t
		hours,
		minutes;

	void operator++(int)
	{
		this->minutes++;

		if (this->minutes == 60)
		{
			minutes = 0;
			hours++;
		}

		if (this->hours == 24)
			hours = 0;
	}

	string as_string()
	{
		string time;

		if (this->hours <= 9)
			time += '0';
		time += to_string(this->hours);

		time += ':';

		if (this->minutes <= 9)
			time += '0';
		time += to_string(this->minutes);

		return time;
	}
};

bool is_palindrome(string text)
{
	for (auto index = 0; index < text.length() / 2; index++)
		if (text[index] != text[text.length() - index - 1])
			return false;
	return true;
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	Time time;
	char placeholder;
	cin >> time.hours >> placeholder >> time.minutes;
	time++;

	while (!is_palindrome(time.as_string()))
		time++;

	cout << time.as_string();
}