#include <iostream>

using namespace std;

int main()
{
	int k, n, w;
	cin >> k >> n >> w;
	int tot = w * (w + 1) / 2 * k;
	cout << max(tot - n, 0) << endl;
}