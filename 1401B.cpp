#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Sequence
{
	int64_t zeros, ones, twos;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;

	while (test_cases--)
	{
		Sequence alpha, beta;
		cin >> alpha.zeros >> alpha.ones >> alpha.twos >> beta.zeros >> beta.ones >> beta.twos;

		auto multiplier = min(alpha.twos, beta.ones);
		alpha.twos -= multiplier;
		beta.ones -= multiplier;

		int64_t total = multiplier * 2;

		if (beta.twos > alpha.zeros + alpha.twos)
		{
			multiplier = beta.twos - (alpha.zeros + alpha.twos);
			total -= multiplier * 2;
		}

		cout << total << endl;
	}
}