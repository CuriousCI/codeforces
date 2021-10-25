#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	int64_t first, second, third;

	cin >> cases;
	while (cases--)
	{
		cin >> first >> second >> third;
		auto biggest = max({first, second, third});
		cout << biggest - first + (biggest != first || (first == second && second == third) || (first == second && biggest == first) || (first == third && biggest == first)) << ' '
			 << biggest - second + (biggest != second || (first == second && second == third) || (first == second && biggest == first) || (second == third && biggest == second)) << ' '
			 << biggest - third + (biggest != third || (first == second && second == third) || (third == second && biggest == third) || (first == third && biggest == first)) << endl;
	}
}