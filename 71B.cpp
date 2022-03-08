#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t squares_number, max_saturation, completion_percentage;
	cin >> squares_number >> max_saturation >> completion_percentage;

	auto total_saturation = squares_number * max_saturation;
	auto completion_saturation = (completion_percentage * total_saturation) / 100;
	auto partial_square = completion_saturation % max_saturation;
	auto filled_squares = (completion_saturation - partial_square) / max_saturation;

	for (auto _ = 0; _ < filled_squares; _++)
		cout << max_saturation << ' ';
	if (partial_square)
		cout << partial_square << ' ';
	for (auto _ = 0; _ < squares_number - (filled_squares + bool(partial_square)); _++)
		cout << 0 << ' ';
}