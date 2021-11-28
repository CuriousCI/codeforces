#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size, left, right;
	cin >> cases;
	while (cases--)
	{
		cin >> size >> left >> right;
		vector<uint16_t> permutation(size);
		for (auto index = 0; index < size; index++)
			permutation[index] = index + 1;

		cout << endl;
	}
}