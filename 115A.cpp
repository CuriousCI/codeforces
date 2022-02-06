#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

vector<vector<uint16_t>> company;
vector<uint16_t> depths;

uint16_t max_depth(uint16_t employee)
{
	if (company[employee].size() == 0)
		depths[employee] = 1;

	if (depths[employee])
		return depths[employee];

	uint16_t depth = 0;
	for (auto subordinate : company[employee])
		depth = max(depth, max_depth(subordinate));
	depths[employee] = depth + 1;

	return depth + 1;
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t employees_count;
	cin >> employees_count;

	for (auto _ = 0; _ < employees_count; _++)
	{
		company.push_back(vector<uint16_t>());
		depths.push_back(0);
	}

	for (auto employee = 0; employee < employees_count; employee++)
	{
		int16_t superior;
		cin >> superior;

		if (superior > 0)
			company[superior - 1].push_back(employee);
	}

	uint16_t result = 0;
	for (auto employee = 0; employee < employees_count; employee++)
		result = max(result, max_depth(employee));
	cout << result;
}