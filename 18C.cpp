#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t squares_number;
	cin >> squares_number;

	vector<int64_t> squares(squares_number);
	for (auto &square : squares)
		cin >> square;
}