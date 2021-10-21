#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int32_t number;
	cin >> number;
	cout << (number > 2 ? number - 2 : 13);
}