#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t buttons;
	cin >> buttons;

	uint64_t total_presses = 0;
	for (auto button = 1; button <= buttons; button++)
		total_presses += (buttons - button) * button;

	cout << total_presses + buttons;
}