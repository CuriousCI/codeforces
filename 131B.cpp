#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t clients_number;
	cin >> clients_number;

	vector<int64_t> clients_ratings(clients_number);
	for (auto &rating : clients_ratings)
		cin >> rating;

	vector<int64_t> positive(11, 0), negative(11, 0);
	for (auto rating : clients_ratings)
		if (rating >= 0)
			positive[rating]++;
		else
			negative[rating * -1]++;

	uint64_t pairs = (positive[0] * (positive[0] - 1)) / 2;
	for (auto rating = 1; rating <= 10; rating++)
		pairs += positive[rating] * negative[rating];

	cout << pairs;
}