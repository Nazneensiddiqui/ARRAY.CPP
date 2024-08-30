/*#include <iostream>
using namespace std;
int main()
{
    int cybrom[]={45,21,22,55,69,4,5,6,7,8};
int s = sizeof(cybrom)/sizeof(cybrom[0]);
for(int i=0; i<s; i++)
      {
      cout<<cybrom[i]<<"\n";
      }
}*/

#include <iostream>
using namespace std;
int main()
{int arr[7]={12,0,15,0,11,0,8};
int s = sizeof(arr)/sizeof(arr[0]);
for (int i=0; i<s; i++)
{
    if(arr[i]==0)
        {
        arr[i]=-1;
        }
        }
    for (int i=0; i<s; i++)
{
    cout<<arr[i]<<"\n";
}

}
