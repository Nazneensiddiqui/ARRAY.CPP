//W.A.P. to display number of array in revers.

/*#include <iostream>
using namespace std;
int main()
{int arr[]={4,2,3,1,6};
int s= sizeof(arr)/sizeof(arr[0]);
for (int i=s-1; i>=0;i--)
     {
    cout<<arr[i]<<"\t";
    }

}*/

//W.A.P.to display of array in duplicat value.
/*#include <iostream>
using namespace std;
int main()
{int arr[]={4,3,2,4,5,6,3,2,6};
int c=0;
int s= sizeof(arr)/sizeof(arr[0]);
for (int i=0; i<s; i++)
{

    for(int j=i+1; j<s; j++)
    {
        if (arr[i]==arr[j])
        {
            c++;
            cout<<arr[i]<<"\t";
        }
    }
}
cout<<" \n total duplicate value count="<<c;
}*/

//W.A.P to display the number of arry in uniqe value.
/*#include <iostream>
using namespace std;
int main()
{int arr[]={4,3,2,4,5,6,3,2,6};
int i,j;
int s= sizeof(arr)/sizeof(arr[0]);
for (i=0; i<s; i++)
{
    for( j=0; j<s; j++)
    {
        if(arr[i]==arr[j])
        {
            break;
        }
    }
    if(i==j)
    {
        cout<<arr[i]<<"\t";
    }
}
}*/


/*#include <iostream>
using namespace std;
int main()
{int n=0;
for(int r=1; r<=3; r++)
{
    for(int sp=3; sp>=r; sp--)
    {
        cout<<" ";
    }
for(int c=1; c<=r; c++)
    {
        n++;
        cout<<n;
    }
    cout<<"\n";
}

}*/

/*#include <iostream>
using namespace std;
int main()
{
for(int r=1; r<=3; r++)
{
    for(int sp=3; sp>=r; sp--)
    {
        cout<<" ";
    }
for(int c=1; c<=r; c++)
    {

        cout<< char(c+96) ;
    }
    cout<<"\n";
}

}*/

/*#include <iostream>
using namespace std;
int main()
{
for(int r=3; r>=1; r--)
{
    for(int sp=3; sp>=r; sp--)
    {
        cout<<" ";
    }
for(int c=1; c<=r; c++)
    {

        cout<<"*" ;
    }
    cout<<"\n";
}

}*/

#include <iostream>
using namespace std;
int main()
{
for(int r=65; r<=70; r++)
{

for(int c=65; c<=r; c++)
    {

        cout<<char(r) ;
    }
    cout<<"\n";
}

}

