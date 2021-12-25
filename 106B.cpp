#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t
		laptops_count,
		speed,
		ram,
		hdd,
		cost,
		number = 1,
		best_speed,
		best_ram,
		best_hdd,
		best_cost;

	cin >> laptops_count >> best_speed >> best_ram >> best_hdd >> best_cost;

	for (auto laptop = 2; laptop <= laptops_count; laptop++)
	{
		cin >> speed >> ram >> hdd >> cost;
		if ((speed > best_speed && ram > best_ram && hdd > best_hdd) ||
			(speed == best_speed && ram == best_cost && hdd == best_hdd && cost < best_cost))
		{
			best_speed = speed;
			best_ram = ram;
			best_hdd = hdd;
			best_cost = cost;
			number = laptop;
		}
	}

	cout << number;
}