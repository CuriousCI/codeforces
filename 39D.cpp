#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Vertex
{
	uint16_t x, y, z;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	Vertex alpha, beta;
	cin >> alpha.x >> alpha.y >> alpha.z >> beta.x >> beta.y >> beta.z;

	cout << (alpha.x != beta.x && alpha.y != beta.y && alpha.z != beta.z ? "NO" : "YES");
}