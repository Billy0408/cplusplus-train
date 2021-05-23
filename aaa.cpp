#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
    long long s;
    cin >> s;
    for (int i = 0; i < s; i++)
    {
        long long n;
        cin >> n;
        int a0, a1;
        cin >> a0 >> a1;
        int c = 1;
        for (; pow(2, c) <= max(a0, a1); c++)
        {
        }
        vector<int> x(c + 1);
        vector<int> a(c + 1);
        vector<int> b(c + 1);
        vector<int> temp(c + 1);
        int v = c;
        while (a0 != 0)
        {
            a[v] = a0 % 2;
            a0 /= 2;
            v--;
        }
        v = c;
        while (a1 != 0)
        {
            b[v] = a1 % 2;
            a1 /= 2;
            v--;
        }
        v = c;
        for (int i = c; i > 0; i--)
        {
            x[i] = max(a[i], b[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            temp[c] = 0;
            for (int i = c; i > 0; i--)
            {
                temp[i] += a[i] + b[i];
                temp[i - 1] = (a[i] + b[i]) / 2;
                temp[i] = temp[i] % 2;
            }
            for (int i = c; i > 0; i--)
            {
                x[i] = max(temp[i], x[i]);
            }
            a = b;
            b = temp;
        }
        int cou = 0;
        for (int i = 1; i <= c; i++)
        {
            cou += (x[i] + 1) % 2;
        }
        cout << cou << endl;
    }
}