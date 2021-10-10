#include <iostream>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	set<string> leaves;

	uint16_t amount;
	string leaf, color;

	cin >> amount;
	while (amount--)
	{
		cin >> leaf >> color;
		leaves.insert(leaf + ' ' + color);
	}

	cout << leaves.size();
}