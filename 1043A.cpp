#include <iostream>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t students_count;
	cin >> students_count;

	vector<uint16_t> votes(students_count);
	for (auto &vote : votes)
		cin >> vote;

	auto votes_count = *ranges::max_element(votes);
	auto elodreip = 0, awruk = 0;
	for (auto vote : votes)
	{
		elodreip += vote;
		awruk += votes_count - vote;
	}

	if (awruk > elodreip)
		cout << votes_count;
	else
	{
		votes_count += (uint16_t)ceil((double)(elodreip - awruk) / (double)students_count);
		cout << votes_count + (votes_count * students_count - elodreip == elodreip);
	}
}