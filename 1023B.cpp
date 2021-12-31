#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int64_t toys_count, price;
	cin >> toys_count >> price;

	if (price <= toys_count)
		cout << (int64_t)floor((double)(price - 1) / 2.0);
	else
		cout << max((int64_t)0, (int64_t)(floor((double)(toys_count - (price - toys_count) + 1) / 2.0)));
}