#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t problems_count, skill, solved = 0;
	cin >> problems_count >> skill;
	vector<uint16_t> problems(problems_count);
	for (auto &problem : problems)
		cin >> problem;
	auto left = 0;
	for (; left < problems_count && problems[left] <= skill; left++)
		solved++;
	for (auto right = problems_count - 1; right >= left && problems[right] <= skill; right--)
		solved++;
	cout << solved;
}