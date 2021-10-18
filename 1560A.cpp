#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, biggest_query = 0;

	cin >> cases;
	vector<uint16_t> queries(cases);
	for (auto &query : queries)
	{
		cin >> query;
		biggest_query = max(biggest_query, query);
	}

	vector<uint16_t> precalculated;
	uint16_t number = 1;
	while (precalculated.size() <= biggest_query)
	{
		if (number % 3 != 0 && number % 10 != 3)
			precalculated.push_back(number);
		number++;
	}

	for (auto query : queries)
		cout << precalculated[query - 1] << endl;
}