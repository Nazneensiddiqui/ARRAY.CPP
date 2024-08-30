//w.a.p to display the value of array reverse

/*#include <iostream>
 using namespace std;
 int main()
 {int arry[]={5,8,6,9,2,1};
 int s = sizeof(arry)/sizeof(arry[0]);
 for(int i=0; i<s; i++)
 {
  cout<<arry[i]<<"\t";
 }
 cout<<"\n";
 cout<<"output array this is=\n";
 for(int i=s-1; i>=0; i--)
       {
    cout<<arry[i]<<"\t";
       }
}*/


#include <iostream>
 using namespace std;
 int main()
 {int sum=0;
    int arry[]={5,8,6,9,2,1};
 int s = sizeof(arry)/sizeof(arry[0]);
 for(int i=0; i<s; i++)
 {
  cout<<arry[i]<<"\t";
 }
 cout<<"\n";
 cout<<"sum of array this is=\n";
 for(int i=0; i<=s; i++)
       {
    sum=sum+arry[i];
    {
          cout<<sum<<"\t";
           }

       }
}
