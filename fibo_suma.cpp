#include<iostream>
using namespace std;
unsigned long long v[1000], s[1000];
int nr=0;
unsigned long long n;
void sir(unsigned long long n)
{
    unsigned long long sum=0;
    v[0]=1;
    v[1]=1;
    int i=1;
    while(v[i]+v[i-1]<=n)
    {
        v[i+1]=v[i]+v[i-1];
        i++;
    }
    int j=i;
    while(sum<n)
    {
        if(sum+v[j]<=n)
        {
            sum+=v[j];
            s[nr++]=v[j];
        }
        j--;
    }
}

int main ()
{
    cin>>n;
    sir(n);
    for(int i=0; i<nr; i++)
        cout<<s[i]<<" ";
}
