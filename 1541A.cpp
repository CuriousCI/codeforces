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
		uint16_t cats_count;
		cin >> cats_count;

		vector<uint16_t> cats;

		if (cats_count & 1)
		{
			for (auto cat = 1; cat <= cats_count - 3; cat += 2)
				cout << cat + 1 << ' ' << cat << ' ';

			cout << cats_count << ' ' << cats_count - 2 << ' ' << cats_count - 1;
		}
		else
		{
			for (auto cat = 1; cat <= cats_count; cat += 2)
				cout << cat + 1 << ' ' << cat << ' ';
		}

		cout << endl;
	}
}