#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	vector<uint32_t> calories(4);
	for (auto &calorie : calories)
		cin >> calorie;

	string game;
	cin >> game;

	uint32_t total_calories = 0;
	for (auto stripe : game)
		total_calories += calories[stripe - '0' - 1];

	cout << total_calories;
}