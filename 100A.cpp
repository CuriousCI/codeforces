#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t room_side, carpets_count, carpet_side;
	cin >> room_side >> carpets_count >> carpet_side;

	cout << (carpet_side * carpets_count >= room_side ? "YES" : "NO");
}