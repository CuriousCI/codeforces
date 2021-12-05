#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	int64_t alpha, beta;
	cin >> cases;

	while (cases--)
	{
		cin >> alpha >> beta;
		auto operations = 0;
		while (alpha > 0 && beta > 0)
		{
			if (beta > alpha)
			{
				auto temp = beta;
				beta = alpha;
				alpha = temp;
			}

			auto modulo = alpha % beta;
			operations += (alpha - modulo) / beta;
			alpha = modulo;
		}

		cout << operations << endl;
	}
}