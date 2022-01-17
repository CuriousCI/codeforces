#include <iostream>
#include <map>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	vector<uint16_t> scores(6);
	for (auto &score : scores)
		cin >> score;

	auto total = 0;
	for (auto score : scores)
		total += score;

	for (auto first = 0; first < 6; first++)
		for (auto second = first + 1; second < 6; second++)
			for (auto third = second + 1; third < 6; third++)
			{
				auto sum = scores[first] + scores[second] + scores[third];
				if (sum == total - sum)
				{
					cout << "YES";
					return 0;
				}
			}

	cout << "NO";
}