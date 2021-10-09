#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t alpha, beta, pairs = 0;
	cin >> alpha >> beta;

	for (auto omega = 0; omega < 1000; omega++)
		for (auto delta = 0; delta < 1000; delta++)
			if (omega * omega + delta == alpha && delta * delta + omega == beta)
				pairs++;

	cout << pairs;
}