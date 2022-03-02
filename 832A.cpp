#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t sticks, crossed_out;
	cin >> sticks >> crossed_out;

	cout << (((sticks - (sticks % crossed_out)) / crossed_out) & 1 ? "YES" : "NO");
}