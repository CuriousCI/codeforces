#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int64_t first, favourite, difference;
	cin >> first >> favourite >> difference;

	if (favourite == first)
		cout << "YES";
	else if ((difference > 0 && favourite < first) || (difference < 0 && favourite > first) || !difference)
		cout << "NO";
	else
		cout << ((favourite - first) % difference == 0 ? "YES" : "NO");
}