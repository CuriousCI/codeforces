#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t pizza;
	cin >> pizza;
	if (!pizza)
		cout << 0;
	else if ((pizza + 1) % 2 == 0)
		cout << (pizza + 1) / 2;
	else
		cout << pizza + 1;
}