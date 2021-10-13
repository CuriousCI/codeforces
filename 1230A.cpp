#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	vector<uint16_t> candies(4);
	for (auto &candy : candies)
		cin >> candy;

	bool dividable = candies[0] + candies[1] == candies[2] + candies[3] ||
					 candies[0] + candies[2] == candies[1] + candies[3] ||
					 candies[0] + candies[3] == candies[1] + candies[2] ||
					 candies[0] + candies[2] == candies[1] + candies[3] ||
					 candies[0] + candies[1] + candies[2] == candies[3] ||
					 candies[0] + candies[2] + candies[3] == candies[1] ||
					 candies[1] + candies[2] + candies[3] == candies[0] ||
					 candies[0] + candies[1] + candies[3] == candies[2];

	cout << (dividable ? "YES" : "NO");
}