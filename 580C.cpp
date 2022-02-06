#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

vector<vector<uint64_t>> tree;
vector<uint16_t> cats;
vector<bool> visited;
int64_t max_cats;

uint64_t restaurants(int64_t remaining_cats, uint64_t vertex)
{
	visited[vertex] = true;

	if (cats[vertex])
	{
		remaining_cats--;
		if (remaining_cats < 0)
			return 0;
	}
	else
		remaining_cats = max_cats;

	if (tree[vertex].size() == 1 && vertex != 0)
		return 1;

	uint64_t result = 0;
	for (auto child : tree[vertex])
		if (!visited[child])
			result += restaurants(remaining_cats, child);

	return result;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t vertices;
	cin >> vertices >> max_cats;

	for (auto _ = 0; _ < vertices; _++)
	{
		uint16_t cat;
		cin >> cat;
		cats.push_back(cat);
		visited.push_back(false);
	}

	for (auto _ = 0; _ < vertices; _++)
		tree.push_back(vector<uint64_t>());

	for (auto _ = 1; _ < vertices; _++)
	{
		uint64_t left, right;
		cin >> left >> right;

		tree[left - 1].push_back(right - 1);
		tree[right - 1].push_back(left - 1);
	}

	cout << restaurants(max_cats, 0);
}
