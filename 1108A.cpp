#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;

	struct Segment
	{
		uint32_t left, right;
	};

	Segment alpha, beta;

	while (cases--)
	{
		cin >> alpha.left >> alpha.right >> beta.left >> beta.right;
		cout << alpha.left + (alpha.left == beta.right) << ' ' << beta.right << endl;
	}
}