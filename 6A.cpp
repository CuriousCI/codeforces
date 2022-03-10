#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

bool normal(uint16_t alpha, uint16_t beta, uint16_t gamma)
{
	return ((alpha + beta > gamma) && (alpha + gamma > beta) && (beta + gamma > alpha));
}

bool segment(uint16_t alpha, uint16_t beta, uint16_t gamma)
{
	return ((alpha == beta + gamma) || (beta == alpha + gamma) || (gamma == alpha + beta));
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	vector<uint16_t> sticks(4);
	for (auto &stick : sticks)
		cin >> stick;

	bool triangle = normal(sticks[0], sticks[1], sticks[2]) ||
					normal(sticks[0], sticks[1], sticks[3]) ||
					normal(sticks[0], sticks[2], sticks[3]) ||
					normal(sticks[1], sticks[2], sticks[3]),
		 seg = segment(sticks[0], sticks[1], sticks[2]) ||
			   segment(sticks[0], sticks[1], sticks[3]) ||
			   segment(sticks[0], sticks[2], sticks[3]) ||
			   segment(sticks[1], sticks[2], sticks[3]);

	cout << (triangle ? "TRIANGLE" : seg ? "SEGMENT"
										 : "IMPOSSIBLE");
}