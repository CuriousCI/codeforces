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

	int64_t
		alpha_size,
		beta_size,
		alpha_choice,
		beta_choice;

	cin >> alpha_size >> beta_size >> alpha_choice >> beta_choice;

	vector<int64_t>
		alpha(alpha_size),
		beta(beta_size);

	for (auto &number : alpha)
		cin >> number;
	for (auto &number : beta)
		cin >> number;

	ranges::sort(alpha);
	ranges::sort(beta);

	cout << (beta[beta_size - beta_choice] > alpha[alpha_choice - 1] ? "YES" : "NO");
}