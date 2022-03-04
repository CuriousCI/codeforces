#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t queries;
	cin >> queries;
	while (queries--)
	{
		int64_t left, right;
		cin >> left >> right;

		cout << right * pow(-1, right) - left * pow(-1, left) << endl;
	}
}