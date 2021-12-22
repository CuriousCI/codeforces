#include <iostream>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t routers_count;
	cin >> routers_count;

	vector<uint64_t>
		routers(routers_count - 1),
		route;

	for (auto &router : routers)
		cin >> router;

	uint64_t current_router = routers_count;
	while (current_router != 1)
	{
		route.push_back(current_router);
		current_router = routers[current_router - 2];
	}

	route.push_back(1);
	ranges::reverse(route);

	for (auto router : route)
		cout << router << ' ';
}