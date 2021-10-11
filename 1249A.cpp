#include <iostream>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	double size;

	cin >> cases;
	while (cases--)
	{
		cin >> size;
		vector<uint16_t> strength((size_t)size);
		for (auto &value : strength)
			cin >> value;
		cout << max((uint16_t)(floor(size / 2.0)), (uint16_t)1) << endl;
	}
}