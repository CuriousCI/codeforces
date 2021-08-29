#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t contests, contest, best, worst, amazing = 0;
	cin >> contests >> contest;
	best = worst = contest;

	while (--contests)
	{
		cin >> contest;
		if (contest > best)
		{
			best = contest;
			amazing++;
		}
		else if (contest < worst)
		{
			worst = contest;
			amazing++;
		}
	}

	cout << amazing;
}