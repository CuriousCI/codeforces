#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;

	int64_t minimum, alpha, beta;

	while (cases--)
	{
		cin >> alpha >> beta >> minimum;
		int64_t operations = 0;
		while (alpha <= minimum && beta <= minimum)
		{
			if (alpha > beta)
				beta += alpha;
			else
				alpha += beta;
			operations++;
		}
		cout << operations << endl;
	}
}