#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t left, right, ambidexters;
	cin >> left >> right >> ambidexters;

	int16_t difference = abs(right - left),
			surplus = (ambidexters - min(difference, ambidexters));
	cout << (min(right, left) + min(difference, ambidexters)) * 2 + surplus - (surplus & 1);
}