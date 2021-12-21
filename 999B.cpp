#include <iostream>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t length;
	string text;

	cin >> length >> text;
	for (auto _ = 1; _ <= length; _++)
		if (length % _ == 0)
			reverse(text.begin(), text.begin() + _);

	cout << text;
}