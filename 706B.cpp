#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t size, cases;
	cin >> size;

	vector<uint32_t> shops(size);
	for (auto &shop : shops)
		cin >> shop;
	sort(shops.begin(), shops.end());

	uint32_t coins;
	cin >> cases;
	while (cases--)
	{
		cin >> coins;
		uint32_t count, step = size - 1;
		for (count = 0; shops[count] <= coins && step > 0; step /= 2)
		{
			if (count == size - 1)
				break;
			while (count + step < size && shops[count + step] <= coins)
				count += step;
		}
		cout << count + (shops[count] <= coins) << endl;
	}
}