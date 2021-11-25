#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t
		yellow_crystals,
		blue_crystals,
		yellow_balls,
		green_balls,
		blue_balls,
		blue_required,
		yellow_required;

	cin >> yellow_crystals >> blue_crystals >> yellow_balls >> green_balls >> blue_balls;

	blue_required = blue_balls * 3 + green_balls;
	yellow_required = yellow_balls * 2 + green_balls;

	cout << (blue_required > blue_crystals ? blue_required - blue_crystals : 0) + (yellow_required > yellow_crystals ? yellow_required - yellow_crystals : 0);
}