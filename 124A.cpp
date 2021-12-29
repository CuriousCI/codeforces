#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t
		people_count,
		before,
		after;

	cin >> people_count >> before >> after;

	cout << min(people_count - before, after + 1);
}