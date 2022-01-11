#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t
		total_steps,
		integer,
		multiplier = 1;

	cin >> total_steps >> integer;

	bool found = false;
	while (multiplier * integer <= total_steps && !found)
	{
		auto modulo = total_steps % (multiplier * integer);
		if (ceil((double)(total_steps - modulo) /))
			multiplier++;
	}

	// cin >> total_steps >> integer;
	// cout << (total_steps < integer ? -1 : );
}