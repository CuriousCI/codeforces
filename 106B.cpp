#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Laptop
{
	uint16_t
		speed,
		ram,
		hdd,
		cost,
		id;

	bool is_outdated = false;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t laptops_count;
	cin >> laptops_count;

	vector<Laptop> laptops(laptops_count);
	uint16_t id = 1;
	for (auto &laptop : laptops)
	{
		cin >> laptop.speed >> laptop.ram >> laptop.hdd >> laptop.cost;
		laptop.id = id;
		id++;
	}

	for (auto &laptop : laptops)
		for (auto &other : laptops)
			if (other.speed > laptop.speed && other.ram > laptop.ram && other.hdd > laptop.hdd)
			{
				laptop.is_outdated = true;
				break;
			}

	uint16_t
		best_price = UINT16_MAX,
		best_laptop;

	for (auto laptop : laptops)
		if (!laptop.is_outdated && laptop.cost < best_price)
		{
			best_laptop = laptop.id;
			best_price = laptop.cost;
		}

	cout << best_laptop;
}