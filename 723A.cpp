#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	vector<uint32_t> axis(3);
	for (auto &x : axis)
		cin >> x;
	sort(axis.begin(), axis.end());
	cout << axis.back() - axis.front();
}