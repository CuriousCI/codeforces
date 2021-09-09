#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int64_t bacteria(int64_t objective)
{
	int64_t position = 0;
	while (1 << position < objective)
		position++;

	if (objective - (1 << position))
		return 1 + bacteria(objective - (1 << position - 1));
	else
		return 1;
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int64_t objective;
	cin >> objective;

	cout << bacteria(objective);
}