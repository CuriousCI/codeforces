#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t first, second, wins = 0, draws = 0, loses = 0;
	cin >> first >> second;
	for (auto dice = 1; dice <= 6; dice++)
	{
		auto alpha = abs(first - dice), beta = abs(second - dice);
		if (alpha < beta)
			wins++;
		else if (alpha == beta)
			draws++;
		else
			loses++;
	}

	cout << wins << ' ' << draws << ' ' << loses;
}