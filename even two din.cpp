/*#include <iostream>
using namespace std;
int main()
{int a[3][3];
for(int r=0; r<3; r++)
      {
    for(int c=0; c<3; c++)
          {
       cin>>a[r][c];
          }
      }
  cout<<"output is \n";
  for(int r=0; r<3; r++)
      {
     for(int c=0; c<3; c++)
     {
     if(a[r][c]%2==0)
     {
       cout<<a[r][c]<<"\t";
     }

     }
     }
     cout<<"\n";
}*/




#include <iostream>
using namespace std;
int main()
{int sum=0;
    int a[3][3];
for(int r=0; r<3; r++)
      {
    for(int c=0; c<3; c++)
          {
       cin>>a[r][c];
          }
      }
  cout<<"output is \n";
  for(int r=0; r<3; r++)
      {
     for(int c=0; c<3; c++)
     {
     sum=sum+a[r][c];
     }
     }
cout<<sum<<"\t";
}
