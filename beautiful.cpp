#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int s;
    cin>>s;
    for(int i=0;i<s;i++)
    {
        int count1=0,count2=0,count3=0;
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int temp;
            cin>>temp;
            if(temp==0)
            {
                count3++;
            }
            else if(temp>0)
            {
                count2++;
            }
            else
            {
                count1++;
            }
        }
        if(abs(count1-count2)-count3<=1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}