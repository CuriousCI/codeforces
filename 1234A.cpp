#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, goods;
	double price, average;
	cin >> cases;

	while (cases--)
	{
		cin >> goods;
		average = 0;
		for (size_t _ = 0; _ < goods; _++)
		{
			cin >> price;
			average += price;
		}

		cout << fixed << (uint64_t)ceil(average / goods) << endl;
	}
}