#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	cout.precision(20);

	double luke_width, second_press, first_speed, second_speed;
	cin >> luke_width >> second_press >> first_speed >> second_speed;

	cout << (second_press - luke_width) / (first_speed + second_speed);
}