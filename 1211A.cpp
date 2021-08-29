#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t size;
	cin >> size;

	vector<uint64_t> problems(size);
	for (auto &problem : problems)
		cin >> problem;

	sort(problems.begin())
}