#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t lights_count, buttons_count;
	cin >> lights_count >> buttons_count;
	vector<uint16_t> buttons(buttons_count);
	for (auto &button : buttons)
		cin >> button;

	vector<uint16_t> lights(lights_count, UINT16_MAX);
	for (auto index = 0; index < buttons_count; index++)
		for (auto light = buttons[index] - 1; light < lights_count; light++)
			if (lights[light] == UINT16_MAX)
				lights[light] = buttons[index];

	for (auto light : lights)
		cout << light << ' ';
}