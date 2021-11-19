#include <iostream>
#include <cmath>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t cases, cells_size;
	string cells;
	int64_t iterations;

	cin >> cases;
	while (cases--)
	{
		cin >> cells_size >> iterations >> cells;

		vector<int16_t> alive;
		for (auto index = 0; index < cells_size; index++)
			if (cells[index] == '1')
				alive.push_back(index);

		if (alive.size())
		{
			auto current_alive = 0;
			for (auto index = 0; index < cells_size; index++)
			{
				if (abs(index - alive[current_alive]) <= iterations)
					cells[index] = '1';
				if (index + iterations >= alive[current_alive] && current_alive < alive.size() - 1)
					current_alive++;
			}
		}

		cout << cells << endl;
	}
}