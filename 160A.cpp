#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;
	cin >> size;

	vector<uint16_t> coins(size);
	for (auto &coin : coins)
		cin >> coin;

	sort(coins.begin(), coins.end());
	reverse(coins.begin(), coins.end());

	uint32_t me = 0, you = 0;
	uint32_t amount = 0;

	for (uint16_t left = 0, right = size - 1; left <= right;)
	{
		if (you + coins[right] < me)
		{
			you += coins[right];
			right--;
		}
		else
		{
			me += coins[left];
			left++;
			amount++;
		}
	}

	cout << amount;
}