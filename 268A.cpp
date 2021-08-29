#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

using namespace std;

struct Team
{
	uint16_t home;
	uint16_t guest;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t total, result = 0;
	cin >> total;

	vector<Team> teams(total);

	for (auto &team : teams)
		cin >> team.home >> team.guest;

	for (auto home : teams)
		for (auto guest : teams)
			if (guest.guest == home.home)
				result++;

	cout << result;
}