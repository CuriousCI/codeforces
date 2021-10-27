#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t cats, left;

	cin >> cats >> left;
	cout << (left ? min(left, (int16_t)(cats - left)) : 1);
}