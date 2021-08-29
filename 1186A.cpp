#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t participants, pens, notebooks;
	cin >> participants >> pens >> notebooks;
	cout << (min(pens, notebooks) >= participants ? "Yes" : "No");
}