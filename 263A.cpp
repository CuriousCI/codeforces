#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    output.clear();

    pair<int, int> one;

    int matrix[5][5];
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            input >> matrix[x][y];

            if (matrix[x][y] == 1)
            {
                one = {x, y};
            }
        }
    }

    cout << abs(one.first - 2) + abs(one.second - 2) << endl;

    input.close();
    output.close();
    return 0;
}