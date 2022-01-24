#include <iostream>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string alpha, beta, different_alpha, different_beta;
	cin >> alpha >> beta;
	for (auto genome = 0; genome < alpha.length(); genome++)
		if (alpha[genome] != beta[genome])
		{
			different_alpha += alpha[genome];
			different_beta += beta[genome];
		}

	ranges::sort(different_alpha);
	ranges::sort(different_beta);

	if (different_alpha.length() == 2 && different_beta.length() == 2 && alpha.length() == beta.length())
		cout << (different_alpha == different_beta ? "YES" : "NO");
	else
		cout << "NO";
}