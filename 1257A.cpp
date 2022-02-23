#include <iostream>
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
		int16_t students_count, max_swaps, first_rival, second_rival;
		cin >> students_count >> max_swaps >> first_rival >> second_rival;

		if (first_rival > second_rival)
		{
			auto _ = first_rival;
			first_rival = second_rival;
			second_rival = _;
		}

		while (max_swaps && second_rival < students_count)
		{
			second_rival++;
			max_swaps--;
		}

		while (max_swaps && first_rival > 1)
		{
			first_rival--;
			max_swaps--;
		}

		cout << second_rival - first_rival << endl;
	}
}