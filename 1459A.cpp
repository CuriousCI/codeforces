#include <iostream>
#include <ranges>
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
		string red, blue;
		cin >> length >> red >> blue;

		ranges::sort(red);
		ranges::sort(blue);

		uint16_t red_points = 0, blue_points = 0;
		for (auto index = 0; index < length; index++)
			if (red[index] > blue[index])
				red_points++;
			else if (blue[index] > red[index])
				blue_points++;

		if (red_points > blue_points)
			cout << "RED";
		else if (blue_points > red_points)
			cout << "BLUE";
		else
			cout << "EQUAL";
		cout << endl;
	}
}