#include <iostream>

using namespace std;

int main()
{
    int matrix[2][3] =
        {
            {1, 2, 3},
            {4, 5, 6}};

    cout << "Matrix Elements:" << endl;

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << matrix[row][col] << " ";
        }

        cout << endl;
    }

    return 0;
}