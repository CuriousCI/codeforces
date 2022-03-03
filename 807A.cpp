#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t participants_number;
	cin >> participants_number;

	bool is_rated = false, maybe = true;
	uint32_t smallest = UINT32_MAX;
	while (participants_number-- && !is_rated)
	{
		uint32_t rating_before, rating_after;
		cin >> rating_before >> rating_after;

		is_rated = rating_before != rating_after;
		if (rating_after > smallest)
			maybe = false;
		smallest = rating_after;
	}

	if (is_rated)
		cout << "rated";
	else
		cout << (maybe ? "maybe" : "unrated");
}