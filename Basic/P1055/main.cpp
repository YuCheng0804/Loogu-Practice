#include<bits/stdc++.h>
using namespace std;
/* 分析题目
就是一个特殊格式的序列，然后识别“-”取出数字，对数字进行运算然后得出结果
这里面的麻烦点就是识别'-',我这里想到的是用遍历的方式，然后进行一个if判断
如果不是"-" 就存储到数字数组中，如果是，就跳过此次循环。
*/

/* 这道题目我是按照我的思路去写的，然后去测试发现错误，然后我去寻找AI来看看问题在哪。
    同时告诉自己哪些可以用的新思路和查错的思路，第一点就是变量的初始化，一定要知道自己的用的这个变量的目的是什么
    第二点就是，字符和数字的转化，字符转化为数字就-"0",数字转化为字符就+'0'
    第三点就是，注意索引，要数清楚索引，然后去确认循环的次数。
*/

/* 这道题目肯定有其他的思路，我现在去看看(用string 和他里面的.back来写)

*/
char isbn[20];
int a[12];
int ans=0;
char isbnans[20];
int c=0;

int main()
{
    cin >> isbn;
    for (int i = 0; i < 11;i++)
    {
        if(isbn[i]=='-') continue;
        else 
        {
            c++;
            a[c] = isbn[i]-'0';
        }
    }
    for (int i = 1; i <= 9;i++)
    {
        ans += a[i] * i;
    }

    ans = ans % 11;
    strcpy(isbnans, isbn);

    (ans==10)?isbnans[12] = 'X':isbnans[12] = ans +'0';

    if(strcmp(isbnans,isbn)==0)
    {
        cout << "Right";
    }
    else
    {
        cout << isbnans;
    }

    return 0;
}