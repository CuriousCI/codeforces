#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t total;
	cin >> total;

	uint64_t
		max_alpha = UINT64_MAX,
		max_beta = UINT64_MAX;

	for (uint64_t alpha = 0; alpha < total / 4 + 1; alpha++)
	{
		if ((total - alpha * 4) % 7 == 0)
		{
			uint64_t beta = (total - alpha * 4) / 7;
			if ((alpha > max_alpha || beta < max_beta) && alpha + beta <= max_alpha + max_beta)
			{
				max_alpha = alpha;
				max_beta = beta;
			}
		}
	}

	if (max_alpha == UINT64_MAX)
		cout << -1;
	else
	{
		for (auto _ = 0; _ < max_alpha; _++)
			cout << 4;
		for (auto _ = 0; _ < max_beta; _++)
			cout << 7;
	}
}