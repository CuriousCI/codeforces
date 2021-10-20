#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int64_t delay, interval, target;
	cin >> delay >> interval >> target;
	cout << ((target - delay) % interval <= 1 || target < delay ? "NO" : "YES");
}