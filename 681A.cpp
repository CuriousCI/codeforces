#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t participants_count;
	cin >> participants_count;

	bool is_performance_good = false;
	while (participants_count-- && !is_performance_good)
	{
		string participant;
		int64_t rating_before, rating_after;
		cin >> participant >> rating_before >> rating_after;

		is_performance_good = rating_before >= 2400 && rating_after > rating_before;
	}

	cout << (is_performance_good ? "YES" : "NO");
}