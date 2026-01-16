#include<bits/stdc++.h>
using namespace std;

// 这道题目数据范围小 数据规模大 正常的n^2的排序（冒泡 选择 插入）都会超时，这个时候可以选择快速排序和计数排序（计数排序刚好就是应对这一点的）
// 所以这道题目使用计数排序（桶排序 ）。 计数排序-->利用数组索引是有序的，进行计数 然后依次输出。
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1, 0);//动态数组
    for (int i = 1; i <= m;i++)
    {
        int cnt;
        cin >> cnt;
        a[cnt]++;
    }
    for (int j = 1; j <= n;j++)
    {
        while(a[j]--)
        {
            cout << j << ' ';
        }
    }

        return 0;
}