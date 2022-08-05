#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }

    cout << "Major diagonal: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i][i] << " ";
    }
    cout << endl;
    cout << "Minor diagonal: ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << array[n - i - 1][i] << " ";
    }
    cout << endl;
    return 0;
}