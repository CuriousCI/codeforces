#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t length;
	cin >> length;

	vector<uint32_t> acceptable(3);
	for (auto &item : acceptable)
		cin >> item;
}