#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int64_t delay, interval, moment;
	cin >> delay >> interval >> moment;
	moment -= delay;
	cout << (moment >= 0 && (moment % interval == 0 || ((moment - 1) % interval == 0 && moment != 1)) ? "YES" : "NO");
}