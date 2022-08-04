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

    int sum = 0;
    int mid = n / 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j < mid)
            {
                sum += array[i][j];
            }
            if (i < n && j == mid && i != mid)
            {
                sum += array[i][j];
            }
            if (i < mid && j == n - 1)
            {
                sum += array[i][j];
            }
            if (i == mid && j < n)
            {
                sum += array[i][j];
            }
            if (i > mid && j == 0)
            {
                sum += array[i][j];
            }
            if (i == n - 1 && j > mid)
            {
                sum += array[i][j];
            }
        }
    }
    cout << sum << endl;
    return 0;
}