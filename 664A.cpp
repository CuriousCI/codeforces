#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string alpha, beta;
	cin >> alpha >> beta;
	cout << (alpha == beta ? alpha : "1");
}