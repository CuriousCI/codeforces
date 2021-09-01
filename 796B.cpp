#include <iostream>
#include <vector>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cups_number, holes_number, operations, hole;
	cin >> cups_number >> holes_number >> operations;

	set<uint32_t> holes;
	while (holes_number--)
	{
		cin >> hole;
		holes.insert(hole);
	}

	while (operations--)
	{
		/* code */
	}
}