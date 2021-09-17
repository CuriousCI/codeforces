#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t cases, alpha, beta;

	cin >> cases;
	while (cases--)
	{
		cin >> alpha >> beta;
		cout << (alpha ^ beta) << endl;
	}
}