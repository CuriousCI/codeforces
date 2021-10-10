#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t baloons, friends;
	string colors;

	cin >> baloons >> friends >> colors;

	map<char, uint16_t> distinct;
	for (auto color : colors)
		distinct[color]++;
}