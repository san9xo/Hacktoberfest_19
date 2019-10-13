#include<iostream>
using namespace std;
int main()
{
int n,a=0;
cin>>n;
for(int i=2;i<n;i++)
{if (n%i==0)
a++;

}
if(a==0)
{cout<<"prime";}}
