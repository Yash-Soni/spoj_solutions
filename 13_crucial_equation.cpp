#include<iostream>

using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    int i,t;
    cin>>t;
    i=1;
    while(t--)
    {
        int a,b,c,x,y,g;
        cin>>a>>b>>c;
        g = gcd(a,b);
        if(c%g == 0)
            cout<<"Case "<<i<<": Yes\n";
        else
        {
            //cout<<"g = "<<g;
            cout<<"Case "<<i<<": No\n";
        }
        i++;
    }
    return 0;
}