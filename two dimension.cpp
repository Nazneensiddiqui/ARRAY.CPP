//W.A.P.TO DISPLAY THE ROW AND COLUMN.
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
        cout<<a[r][c]<<"\t";
         }
         cout<<"\n";
         }



}*/


//W.A.P. TO DISPLAY THE ZERO OF ARRAY  VALUE REPLACE -1
#include <iostream>
using namespace std;
int main()
{int a[3][3]={1,2,0,3,0,5,0,8,0};
int s= sizeof (a)/sizeof(a[0]);
for(int r=0; r<3; r++)
       {
    for(int c=0; c<3; c++)
    {
      if(a[r][c]==0)
      {
          a[r][c]=-1;
      }
      cout<<a[r][c]<<"\t";
    }
    cout<<"\n";
       }
}

//W.A.P. TO DISPLAY THE SUM OF ARRAY TWO DIMENSION ARRAY.
/*#include <iostream>
using namespace std;
int main()
{int r,c,sum=0;
int a[3][3] ={1,2,3,4,5,6,7,8,9};
int s= sizeof(a)/sizeof(a[0]);
for(r=0; r<3; r++)
        {
    for( c=0; c<3; c++)
       {
cout<<a[r][c]<<"\t";
       }
    cout<<"\n";
    }
    cout<<"sum of array \n";
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            sum=sum+a[r][c];
        }
    }
        cout<<sum<<"\t";
}*/

//user define input...............

/*#include <iostream>
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
  cout<<"output is sum of array \n";
  for(int r=0; r<3; r++)
      {
     for(int c=0; c<3; c++)
     {
     sum=sum+a[r][c];
     }
     }
cout<<sum<<"\t";
}*/

//W.A.P.TO DISPLAY EVEN NUMBER OF ARRAY.
/*#include <iostream>
using namespace std;
int main()
{int a[3][3]={22,11,31,5,6,4,7,9,5};
int s = sizeof (a)/sizeof(a[0]);
for(int r=0; r<3; r++)
       {
    for(int c=0; c<3; c++)
         {
        cout<<a[r][c]<<"\t";
         }
    cout<<"\n";
         }
cout<<"odd number of array=\n";
for(int r=0; r<3; r++)
       {
    for(int c=0; c<3; c++)
    {
        if(a[r][c]%2!=0)
        {
            cout<<a[r][c]<<"\t";
        }

    }
       }
}*/


