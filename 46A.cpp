#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t kids, kid = 1;
	cin >> kids;

	for (auto step = 1; step < kids; step++)
	{
		kid = (kid + step) % kids;
		if (!kid)
			kid = kids;
		cout << kid << ' ';
	}
}