#include <iostream>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string subsequence;
	cin >> subsequence;
	cout << subsequence;
	ranges::reverse(subsequence);
	cout << subsequence;
}