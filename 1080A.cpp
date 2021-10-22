#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t friends, sheets;

	cin >> friends >> sheets;
	cout << (uint64_t)(ceil(8.0 * friends / sheets) +
					   ceil(5.0 * friends / sheets) +
					   ceil(2.0 * friends / sheets));
}