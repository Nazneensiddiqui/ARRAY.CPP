  //wap to find out the second larget number in the given array
#include <iostream>
using namespace std;
int main()
{
    int arr[]={10,9,8,56,0,890,67,45,1200,900,5000};
    int s=sizeof(arr)/sizeof(arr[0]);
    int fmax=arr[0];
    int smax=arr[0];
    for(int i=0;i<s;i++)
    {
    	if(arr[i]>fmax)
     	{
		    smax=fmax;
    		fmax=arr[i];

		}
		else if(arr[i]<fmax && arr[i]>smax)
		{
			smax=arr[i];
		}


	}
	cout<<"maximum number "<<fmax<<"\n";
	cout<<"second largest number is"<<smax;
 	return 0;
}
