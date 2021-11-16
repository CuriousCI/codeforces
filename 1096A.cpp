#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint64_t left, right;

	cin >> cases;
	while (cases--)
	{
		cin >> left >> right;
		cout << left << ' ' << left * 2 << endl;
	}
}