#include <iostream>
#include <iterator>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t size;
	cin >> size;

	vector<uint32_t>
		first(size),
		second(size - 1),
		third(size - 2),
		diff1, diff2;

	for (auto &error : first)
		cin >> error;
	for (auto &error : second)
		cin >> error;
	for (auto &error : third)
		cin >> error;

	sort(first.begin(), first.end());
	sort(second.begin(), second.end());
	sort(third.begin(), third.end());

	set_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(diff1, diff1.begin()));
	set_difference(second.begin(), second.end(), third.begin(), third.end(), inserter(diff2, diff2.begin()));

	cout << diff1.front() << '\n'
		 << diff2.front();
}
