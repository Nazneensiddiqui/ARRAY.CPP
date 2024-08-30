#include <iostream>
using namespace std;
int main()
{int arry[]={45,22,10,36,4,86,};
int s = sizeof(arry)/sizeof(arry[0]);
for(int i=0; i<s; i++)
{
cout<<arry[i]<<"\n";
}


}
