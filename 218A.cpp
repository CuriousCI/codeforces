#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t peaks_count, chosen_peaks;
	cin >> peaks_count >> chosen_peaks;

	vector<uint16_t> heights(peaks_count * 2 + 1);
	for (auto &height : heights)
		cin >> height;

	for (auto mountain = 0; mountain < peaks_count * 2 + 1 && chosen_peaks; mountain++)

		if (mountain == 0 && heights[1] + 1 < heights[0])
		{
			heights[1]--;
			chosen_peaks--;
		}
		else if (mountain == peaks_count * 2 && heights[peaks_count * 2 - 1] + 1 < heights[peaks_count * 2])
		{
			heights[peaks_count * 2]--;
			chosen_peaks--;
		}
		else if (heights[mountain] > heights[mountain - 1] + 1 && heights[mountain] > heights[mountain + 1] + 1)
		{
			heights[mountain]--;
			chosen_peaks--;
		}

	for (auto height : heights)
		cout << height << ' ';
}