#include <iostream>
using namespace std;
int main()
{int a[2][2][3]={1,2,3,4,5,6,7,8,9,1,5,4};
for(int t=0; t<2; t++)
{

for(int r=0; r<2; r++)
{
for(int c=0; c<3; c++)
{

cout<<a[t][r][c]<<"\t";
}
cout<<"\n";
}
//cout<<"\n";
}




}
