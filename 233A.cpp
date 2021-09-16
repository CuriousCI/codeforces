#include <iostream>
#include <cstdint>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;
	cin >> size;

	if (size & 1)
		cout << -1;
	else
		for (uint16_t item = 1; item <= size; item += 2)
			cout << item + 1 << ' ' << item << ' ';
}
