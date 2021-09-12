#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, angle;
	cin >> cases;

	while (cases--)
	{
		cin >> angle;
		cout << (360 % (180 - angle) == 0 ? "YES" : "NO") << endl;
	}
}