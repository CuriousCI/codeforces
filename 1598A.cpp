#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases, columns;
	cin >> test_cases;
	while (test_cases--)
	{
		string first_row, second_row;
		cin >> columns >> first_row >> second_row;

		bool completable = true;
		for (auto position = 0; position < columns && completable; position++)
			completable = !(first_row[position] == second_row[position] && first_row[position] == '1');

		cout << (completable ? "YES" : "NO") << endl;
	}
}