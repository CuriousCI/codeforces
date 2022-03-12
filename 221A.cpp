#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t permutation_length;
	cin >> permutation_length;

	cout << permutation_length << ' ';
	for (auto number = 1; number < permutation_length; number++)
		cout << number << ' ';
}