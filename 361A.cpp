#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int64_t side, sum;
	cin >> side >> sum;
	for (auto y = 0; y < side; y++)
	{
		for (auto x = 0; x < side; x++)
			cout << (x == y ? sum : 0) << ' ';
		cout << endl;
	}
}