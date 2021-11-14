#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int64_t size, queries, left, right, negatives = 0, positives = 0, number;
	cin >> size >> queries;

	while (size--)
	{
		cin >> number;
		if (number > 0)
			positives++;
		else
			negatives++;
	}

	while (queries--)
	{
		cin >> left >> right;
		auto distance = right - left;
		if ((distance + 1) / 2 <= min(negatives, positives) && distance & 1)
			cout << 1;
		else
			cout << 0;

		cout << endl;
	}
}
