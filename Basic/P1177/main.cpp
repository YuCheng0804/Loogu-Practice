#include <bits/stdc++.h>
using namespace std;

int n;
int a[100050];

void quickSort(int left, int right)
{
    if (left > right)
        return;
    int i = left;
    int j = right;
    int mid = (left + right) / 2;
    int p = a[mid];
    while (i <= j)
    {
        while (a[i] < p)
            i++;
        while (a[j] > p)
            j--;
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (j > left)
        quickSort(left, j);
    if (i < right)
        quickSort(i, right);
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}
