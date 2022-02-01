#include <iostream>
#include <vector>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t alpha_size, beta_size;
	cin >> alpha_size;
	vector<uint16_t> alpha(alpha_size);
	for (auto &number : alpha)
		cin >> number;

	cin >> beta_size;
	vector<uint16_t> beta(beta_size);
	for (auto &number : beta)
		cin >> number;

	cout << *ranges::max_element(alpha) << ' ' << *ranges::max_element(beta);
}