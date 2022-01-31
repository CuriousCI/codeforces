#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t twos, threes, fives, sixs, twofivesix, threetwo;
	cin >> twos >> threes >> fives >> sixs;

	twofivesix = min({twos, fives, sixs});
	twos -= twofivesix;
	fives -= twofivesix;
	sixs -= twofivesix;

	threetwo = min({twos, threes});

	cout << twofivesix * 256 + threetwo * 32;
}