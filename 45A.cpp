#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	vector<string> months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	string month;
	uint16_t after;

	cin >> month >> after;
	for (auto position = 0; position < 12; position++)
		if (month == months[position])
		{
			cout << months[(position + after) % 12];
			break;
		}
}