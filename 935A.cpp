#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t employes, result = 0;
	cin >> employes;

	for (uint32_t leaders = 1; leaders < employes; leaders++)
		if ((employes - leaders) % leaders == 0)
			result++;

	cout << result;
}