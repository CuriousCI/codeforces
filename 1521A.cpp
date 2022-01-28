#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t test_cases, alpha, beta;
	cin >> test_cases;
	while (test_cases--)
	{
		cin >> alpha >> beta;
		cout << "YES" << endl;
		cout << alpha * beta << ' ' << alpha << ' ' << alpha * 2 << endl;
	}
}