#include <iostream>
#include <fstream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	ifstream input("input.txt");
	ofstream output("output.txt");

	uint16_t
		jars_count,
		kilos,
		jar,
		piglet_honey = 0;

	input >> jars_count >> kilos;

	while (jars_count--)
	{
		input >> jar;
		if (jar > kilos * 3)
			piglet_honey += jar - kilos * 3;
		else
			piglet_honey += jar % kilos;
	}

	output << piglet_honey;

	input.close();
	output.close();
}