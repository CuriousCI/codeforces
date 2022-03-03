#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;

	while (cases--)
	{
		uint64_t programmers, mathematicians;
		cin >> programmers >> mathematicians;

		if (programmers > mathematicians)
		{
			auto swap = programmers;
			programmers = mathematicians;
			mathematicians = swap;
		}
	}
}