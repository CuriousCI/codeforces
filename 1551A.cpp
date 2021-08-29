#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cases, cost;
	cin >> cases;

	while (cases--)
	{
		cin >> cost;
		uint32_t mod = cost % 3;
		uint32_t tot = (cost - mod) / 3;
		cout << tot + (mod == 1 ? 1 : 0) << ' ' << tot + (mod == 2 ? 1 : 0) << endl;
	}
}