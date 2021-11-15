#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t distances_size, alpha, beta, clockwise = 0, counterclockwise = 0;
	cin >> distances_size;

	vector<uint16_t> distances(distances_size);
	for (auto &distance : distances)
		cin >> distance;

	cin >> alpha >> beta;
	if (alpha > beta)
	{
		auto temp = alpha;
		alpha = beta;
		beta = temp;
	}

	for (auto index = alpha - 1; index < beta - 1; index++)
		clockwise += distances[index];

	for (auto index = alpha - 2; index >= 0; index--)
		counterclockwise += distances[index];

	for (auto index = beta - 1; index < distances.size(); index++)
		counterclockwise += distances[index];

	cout << min(clockwise, counterclockwise);
}