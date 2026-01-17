#include<bits/stdc++.h>
using namespace std;

int n,k;

int threeWayQuickSort(int* a, int left, int right,int l)
{
    if (left >= right) return a[left];
    int p = a[left];
    int i = left;
    int j = right;   
    int k = left + 1; 
    while (k <= j)
    {
        if (a[k] < p)
        {
            swap(a[k], a[i]);
            i++;
            k++;
        }
        else if (a[k] > p)
        {
            swap(a[k], a[j]);
            j--;
        }
        else
        {
            k++;
        }
    }
    if(i>l)//这里和快速排序不同的是，有选择的递归某一个分区，进而递归出第k小的数。
    {
        return threeWayQuickSort(a, left, i - 1, l);
    }
    else if(l>j)
    {
        return threeWayQuickSort(a, j + 1, right, l);
    }
    else
        return p;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    srand(time(0));
    cin >> n >> k;
    int a[5000005] = {0};
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    cout<<threeWayQuickSort(a, 0, n-1, k);
    return 0;
}