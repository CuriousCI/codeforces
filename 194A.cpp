#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t exams, requirement;
	cin >> exams >> requirement;

	cout << max(exams - (requirement - (exams * 2)), 0);
}