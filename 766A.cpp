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

	cout << (int64_t)(alpha == beta ? -1 : max(alpha.size(), beta.size()));
}
