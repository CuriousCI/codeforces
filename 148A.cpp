#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	vector<uint32_t> damages(4);
	for (auto &damage : damages)
		cin >> damage;

	uint32_t total, unharmed = 0;
	cin >> total;

	vector<uint32_t> dragons(total);
	for (auto damage : damages)
		for (size_t dragon = damage - 1; dragon < total; dragon += damage)
			dragons[dragon]++;

	for (auto dragon : dragons)
		if (dragon)
			unharmed++;

	cout << unharmed;
}