#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t soldiers;
	cin >> soldiers;

	soldiers *= 2;

	cout << soldiers * 3 / 4;
}