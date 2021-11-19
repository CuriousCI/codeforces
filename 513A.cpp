#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t first, second, first_move, second_move;
	cin >> first >> second >> first_move >> second_move;
	cout << (first > second ? "First" : "Second");
}