#include <iostream>
#include <set>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int32_t size, number;
	set<int32_t> distinct;

	cin >> size;
	while (size--)
	{
		cin >> number;
		if (number)
			distinct.insert(number);
	}

	cout << distinct.size();
}