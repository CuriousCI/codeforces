#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t number;
	cin >> number;

	cout << (number & 1 ? "Ehab" : "Mahmoud");
}