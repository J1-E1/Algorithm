#include <iostream>
#include <vector>

using namespace std;

int cantorPair(int x, int y)
{
    return (0.5 * (x + y) * (x + y + 1)) + y;
};
int main()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            cout << i << "," << j <<" - "<< cantorPair(i, j) << endl;
        }
    }
    return 0;
}