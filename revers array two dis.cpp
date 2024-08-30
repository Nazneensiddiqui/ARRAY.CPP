//W.A.P. TO DISPLAY NUMBER OF ARRAY IN ROW CHANGE IN COLUMN

/*#include <iostream>
using namespace std;
int main()
{int a[2][2]={1,2,3,4};
int s= sizeof (a)/sizeof(a[0]);
for(int r=0; r<2; r++)
       {
       for(int c=0; c<2; c++)
       {
       cout<<a[r][c]<<"\t";
       }
    cout<<"\n";
       }
cout<<"output is="<<"\n";

for( int r=0; r<2; r++)
          {
for(int c=0; c<2; c++)
{
cout<<a[c][r]<<"\t";
}
cout<<"\n";
      }

}*/

//W.A.P TO ADD THE VALUE OF TWO ARRAYS ACCODING TO RESPECTIVE COLUMN

/*#include <iostream>
using namespace std;
int main()
{int a[2][2]={2,3,4,5};
int b[2][2]={6,1,2,9};
for(int r=0; r<2; r++)
       {
       for(int c=0; c<2; c++)
       {
       cout<<a[r][c]+b[r][c]<<"\t";
       }
    cout<<"\n";
       }
}*/



//W.A.P TO DISPLAY THE NUMBER OF ARRAY IS EVEN THEN ADD OR NUMBER IS ODD THEN SBCTRUCTION
/*#include <iostream>
using namespace std;
int main()
{
int a[2][2]={2,3,4,5};
int b[2][2]={6,1,2,9};
for(int r=0; r<2; r++)
   {
       for(int c=0; c<2; c++)
       {
           if(a[r][c]%2==0)
           {
               cout<<a[r][c]+b[r][c]<<"\t";
           }
           else
              {
               cout<<a[r][c]-b[r][c]<<"\t";
           }
       }
       cout<<"\n";


   }

}*/



#include <iostream>
using namespace std;
int main()
{int a[2][2]={2,3,4,5};
int b[2][2]={6,1,2,9};
cout<<"array of a=\n";
for(int r=0; r<2; r++)
       {
    for(int c=0; c<2; c++)
       {
       cout<<a[r][c]<<"\t";
       }
       cout<<"\n";
       }
cout<<"array of b is=\n";
for(int r=0; r<2; r++)
       {
    for(int c=0; c<2; c++)
        {
    cout<<b[r][c]<<"\t";
       }
    cout<<"\n";
       }
       cout<<"output is="<<"\n";
for(int r=0; r<2; r++)
       {
       for(int c=0; c<2; c++)
       {
       cout<<a[r][c]+b[r][c]<<"\t";
       }
    cout<<"\n";
       }
}





