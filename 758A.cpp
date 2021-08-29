#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;
	cin >> size;

	vector<uint32_t> citizens(size);
	for (auto &citizen : citizens)
		cin >> citizen;

	uint32_t richest = *max_element(citizens.begin(), citizens.end()),
			 money = 0;

	for (auto citizen : citizens)
		money += richest - citizen;

	cout << money;
}