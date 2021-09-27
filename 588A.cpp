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

	uint32_t days, money = 0, price;

	cin >> days;
	vector<uint32_t>
		kilograms(days),
		prices(days);

	for (auto day = 0; day < days; day++)
		cin >> kilograms[day] >> prices[day];

	price = prices.front();
	for (auto day = 0; day < days; day++)
	{
		price = min(price, prices[day]);
		money += price * kilograms[day];
	}

	cout << money;
}