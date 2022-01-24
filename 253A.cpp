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

	uint16_t boys, girls;
	input >> boys >> girls;

	while (boys || girls)
	{
		if (boys >= girls)
		{

			if (boys)
			{
				output << 'B';
				boys--;
			}

			if (girls)
			{
				output << 'G';
				girls--;
			}
		}
		else
		{
			if (girls)
			{
				output << 'G';
				girls--;
			}
			if (boys)
			{
				output << 'B';
				boys--;
			}
		}
	}

	input.close();
	output.close();
}