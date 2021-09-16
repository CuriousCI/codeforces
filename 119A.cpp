#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t simon, antisimon, stones, simon_score = 0, antisimon_score = 0;
	cin >> simon >> antisimon >> stones;

	string player = "simon";
	bool simon_can = true, antisimon_can = true;

	while (simon_can && antisimon_can)
	{
		if (player == "simon")
		{
			simon_can = false;
			for (uint16_t divisor = min(stones, simon); divisor > 2; divisor--)
				if (stones % divisor == 0 && simon % divisor == 0)
				{
					stones -= divisor;
					simon_can = true;
					simon_score++;
				}
			player = "antisimon";
		}
		else
		{
			antisimon_can = false;
			for (uint16_t divisor = min(stones, antisimon); divisor > 2; divisor--)
				if (stones % divisor == 0 && antisimon % divisor == 0)
				{
					stones -= divisor;
					antisimon_can = true;
					antisimon_score++;
				}
			player = "simon";
		}
	}

	cout << (simon_score > antisimon_score || (simon == 1 && antisimon == 1 && stones == 1) ? 0 : 1);
}