#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;
	cin >> size;
	vector<uint16_t> columns(size);
	for (auto &column : columns)
		cin >> column;

	sort(columns.begin(), columns.end());
	for (auto column : columns)
		cout << column << ' ';
}