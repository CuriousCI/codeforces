#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t cases, buns, patties, cutlets, hamburger, chicken;

	cin >> cases;
	while (cases--)
	{
		cin >> buns >> patties >> cutlets >> hamburger >> chicken;
		int16_t servings = floor(buns / 2.0);

		if (hamburger > chicken)
		{
			auto hamburgers = min(patties, servings);
			servings -= hamburgers;
			cout << hamburgers * hamburger + max(min(servings, cutlets), (int16_t)0) * chicken;
		}
		else
		{
			auto chickens = min(cutlets, servings);
			servings -= chickens;
			cout << chickens * chicken + max(min(servings, patties), (int16_t)0) * hamburger;
		}

		cout << endl;
	}
}