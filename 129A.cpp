#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t bags, cookies, even = 0, odd = 0;

	cin >> bags;
	while (bags--)
	{
		cin >> cookies;
		if (cookies & 1)
			odd++;
		else
			even++;
	}

	cout << (odd & 1 ? odd : even);
}