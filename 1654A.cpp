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
		uint16_t pieces_number;
		cin >> pieces_number;

		vector<uint64_t> pieces(pieces_number);
		for (auto &piece : pieces)
			cin >> piece;

		ranges::sort(pieces);
		cout << pieces[pieces_number - 1] + pieces[pieces_number - 2] << endl;
	}
}