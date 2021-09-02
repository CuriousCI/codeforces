#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

uint64_t formula(uint64_t team_size)
{
	return (team_size * (team_size - 1)) / 2;
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t participants, teams;
	cin >> participants >> teams;
	uint64_t biggest = participants - (teams - 1),
			 smallest = floor((double)participants / (double)teams),
			 sized = smallest + 1,
			 medium = participants % teams,
			 small = teams - medium;

	cout << formula(smallest) * small + formula(sized) * medium
		 << ' '
		 << formula(biggest);
}