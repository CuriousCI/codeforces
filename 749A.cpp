#include <iostream>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t number;
	cin >> number;

	bool odd = number & 1;
	uint64_t twos = (odd ? number - 1 : number) / 2;

	cout << twos << endl;
	for (size_t _ = 0; _ < twos - 1; _++)
		cout << 2 << ' ';
	cout << (odd ? 3 : 2);
}