#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t alpha, beta;
	cin >> alpha >> beta;

	if (alpha == 9 && beta == 1)
		cout << "9 10";
	else if (beta - alpha > 1 || alpha > beta)
		cout << -1;
	else if (beta - alpha == 1)
		cout << alpha << "9 " << beta << "0";
	else
		cout << alpha << "0 " << beta << "1";
}