#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int array[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = n - 1, t = 0; t < j; j--, t++)
        {
            int temp = array[i][j];
            array[i][j] = array[i][t];
            array[i][t] = temp;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}