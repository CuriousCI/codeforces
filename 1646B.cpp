#include <iostream>
#include <ranges>
#include <vector>
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
		uint64_t length;
		cin >> length;

		vector<uint64_t> sequence(length);
		for (auto &number : sequence)
			cin >> number;

		ranges::sort(sequence);
		uint64_t red = length - 1, red_sum = 0, blue = 1, blue_sum = sequence.front();
		while (blue < red && red_sum <= blue_sum)
		{
			blue_sum += sequence[blue];
			red_sum += sequence[red];
			red--;
			blue++;
		}

		cout << (red_sum > blue_sum ? "YES" : "NO") << endl;
	}
}