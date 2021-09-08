#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Laptop
{
	uint32_t price, quality;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t size;
	cin >> size;

	vector<Laptop> laptops(size);
	for (auto &laptop : laptops)
		cin >> laptop.price >> laptop.quality;

	sort(laptops.begin(),
		 laptops.end(),
		 [](Laptop &alpha, Laptop &beta)
		 { return alpha.price < beta.price; });

	bool quality = false;
	for (auto laptop = laptops.begin(); laptop < laptops.end() - 1; laptop++)
		if (laptop[1].price > laptop->price && laptop[1].quality < laptop->quality)
		{
			quality = true;
			break;
		}
	cout << (quality ? "Happy Alex" : "Poor Alex");
}