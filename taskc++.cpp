#include <iostream>
using namespace std;

int SmallLargeSum(int arp[],int s)
 {
    if (s<= 3)
        {
        return 0;
         }
    return 1;
int mx1,mx2,x;
mx1=mx2=INT_MIN;
for (int i = 0; i <s; i=i+2)
    {
    x=arp[i];
    if(mx1<x)
    {
     mx2=mx1;
     mx1=arp[i];
    }
    }
 }

int main()
 {
   int s;
   cin>>s;
   int arr[s];
   for(int i=0;i<s;i++)
   {
       cin>>arr[];
    }
    cout<<"second larges="<<SmallLargeSum(arr)
}
