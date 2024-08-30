//w.a.p. to display value only array even.

#include <iostream>
using namespace std;
int main ()
{
int a[5] = {10,21,30,41,5};
for(int i=0; i<5; i++)
{
    if(a[i]%2==0)
     {
  cout<<a[i]<<"\t";
      }
}
}
//w.a.p. to display value only array odd.
/*#include <iostream>
using namespace std;
int main ()
{
int a[5] = {10,21,30,41,5};
for(int i=0; i<5; i++)
{
    if(a[i]%2!=0)
     {
  cout<<a[i]<<"\t";
      }
}
}*/

//w.a.p to print a sum of array
/*#include <iostream>
using namespace std;
int main ()
{int s=0;
int a[5] = {10,21,30,41,5};
for(int i=0; i<5; i++)
{
 s=s+a[i];
}
cout<<"sum="<<s;
}

//w.a.p to find a minimum value of array.
#include <iostream>
using namespace std;
int main ()
{int chotu;
int a[5] = {10,21,30,41,5};
chotu=a[0];
for(int i=0; i<5; i++)
{
 if(chotu>a[i])
 {
 chotu=a[i];
 }
}
cout<<"min="<<chotu;
}*/
