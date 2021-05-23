#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
//setprecision
int n;
double d;
vector<double> ants;
int check(double a)
{
    if (int(a * 100000000) % 10 != 0)
    {
        return true;
    }
    return false;
}
bool warm(double t)
{
    int x = ants[0] + t;
    bool w=false;
    for (int i = 1; i < n; i++)
    {
        if(ants[i]-t>x+d)
        {
            if(!w)
            {
                return false;
            }
            x=ants[i]+t;
            continue;
        }
        if(ants[i])
    }
}
int main()
{
    int s;
    cin >> s;
    for (int i = 0; i < s; i++)
    {
        cin >> n >> d;
        ants.clear();
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            ants.push_back(temp);
        }
        sort(ants.begin(), ants.end());
        double L = 0, R = ants[n - 1] - ants[0];
        double mid = (L + R) / 2;
        while(R-L>0.000000001)
        {
            if (warm(mid))
            {
                R = mid;
            }
            else
            {
                L = mid;
            }
             mid = (L + R) / 2;
        }
        cout<<fixed<<setprecision(8)<<mid<<endl;
    }
}