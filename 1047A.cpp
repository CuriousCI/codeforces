#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t integer;
	cin >> integer;

	cout << 1 << ' ';
	if ((integer - 2) % 3)
		cout << 1 << ' ' << integer - 2;
	else
		cout << 2 << ' ' << integer - 3;
}