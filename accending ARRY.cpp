//w.a.p.to display the accending order
#include <iostream>
using namespace std;
int main()
{int arr[]={4,2,3,1,6};
int s= sizeof(arr)/sizeof(arr[0]);
for (int i=0; i<s;i++)
     {
    cout<<arr[i]<<"\t";
    }
    for(int i=0; i<s; i++)
        {
            for (int j=i+1; j<s; j++)
            {
             if(arr[i]>arr[j])
             {
                 int tmp=arr[j];
                 arr[j]=arr[i];
                 arr[i]=tmp;
             }

            }
        }
        cout<<"\n asscending order \n";
        for(int i=0; i<s; i++)
        {
            cout<<arr[i]<<"\t";
        }
}



//w.a.p.the display number decanding order.
/*#include <iostream>
using namespace std;
int main()
{int arr[]={4,2,3,1,6};
int s= sizeof(arr)/sizeof(arr[0]);
for (int i=0; i<s;i++)
     {
    cout<<arr[i]<<"\t";
    }
    for(int i=0; i<s; i++)
        {
            for (int j=i+1; j<s; j++)
            {
             if(arr[i]<arr[j])
             {
                 int tmp=arr[j];
                 arr[j]=arr[i];
                 arr[i]=tmp;
             }

            }
        }
        cout<<"\n asscending order \n";
        for(int i=0; i<s; i++)
        {
            cout<<arr[i]<<"\t";
        }
}*/
