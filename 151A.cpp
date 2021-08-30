#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	float friends, bottles, volume, limes, slicing, salt, glass, salting;
	cin >> friends >> bottles >> volume >> limes >> slicing >> salt >> glass >> salting;

	cout << floor(min({floor((bottles * volume) / glass), limes * slicing, floor(salt / salting)}) / friends);
}