#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	double
		height,
		distance;

	cin >> height >> distance;
	cout << fixed << std::setprecision(6) << (pow(distance, 2) - pow(height, 2)) / (2 * height) << endl;
}