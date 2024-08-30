 //w.a.p to displa the arry value of zero repalce the number of -1

/*#include <iostream>
using namespace std;
int main()
{int arry[10]= {12,0,8,5,0,3,6,0,4,0};
int s = sizeof(arry)/sizeof(arry[0]);
for(int i=0; i<s; i++)
    {
   cout<<arry[i] <<"\t";
    }
cout<<"\n";
cout<<"output is =\n";
for(int i=0; i<s; i++)
      {
      if(arry[i]==0)
      {
      arry[i]=-1;
      }
      }
for(int i=0; i<s; i++)
   {
  cout<<arry[i]<<"\t";

   }
}*/


#include <iostream>
using namespace std;
int main()
{int arry[10]= {12,0,8,5,0,3,6,0,4,0};
int s = sizeof(arry)/sizeof(arry[0]);
for(int i=0; i<s; i++)
     {
      if(arry[i]==0)
      {
      arry[i]=-1;
      }
      }
for(int i=0; i<s; i++)
   {
  cout<<arry[i]<<"\t";

   }
}
