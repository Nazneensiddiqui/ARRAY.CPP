/*#include <iostream>
using namespace std;
int main()
{int a=1;
if(a^2 && a>>2)
{
cout<<"pass ho gaya";
}
else
{
cout<<"fail ho gaye";
}

}*/


/*#include <iostream>
using namespace std;
int main()
{int a=90;
int b=-4;
int c=-34;
a=--c;
c=b++;
b=++a;
cout<<a--;
cout<<--b;
cout<<c;

}*/

/*#include <iostream>
using namespace std;
int main()
{int a=9;
int b=-1;
if(a>b--)
{
 if(b<0)
{
cout<<"b";
 }
 else
 {
cout<<"done";
 }
}
}*/

/*#include <iostream>
using namespace std;
int main()
{int j=0;
while(j++)
{
if(j>0)
{
    cout<<"ok";
}
}
}*/


#include<iostream>
using namespace std;
int main()
{int ov[]={20,10,3,4,6};
for(int i=0; i<2;i++)
{
ov[i]=ov[i]+ov[i+1];
}
  for(int i=0;i<4; i++)
  {
      cout<<ov[i]<<"\t";
  }
}
