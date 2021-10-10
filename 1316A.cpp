#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t cases, size, highest;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> highest;

		vector<uint64_t> scores(size);
		for (auto &score : scores)
			cin >> score;

		double average = 0;
		for (auto score : scores)
			average += score;

		average /= size;

		cout << highest << endl;
	}
}