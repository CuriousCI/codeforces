#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		int64_t hit_points;
		int16_t void_absorptions, lighting_strikes;
		cin >> hit_points >> void_absorptions >> lighting_strikes;

		while (hit_points > 10 && void_absorptions)
		{
			hit_points /= 2;
			hit_points += 10;
			void_absorptions--;
		}

		while (hit_points >= 0 && lighting_strikes)
		{
			hit_points -= 10;
			lighting_strikes--;
		}

		cout << (hit_points <= 0 ? "YES" : "NO") << endl;
	}
}