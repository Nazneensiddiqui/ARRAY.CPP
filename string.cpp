//W.A.P TO PRINT THE LOWER CASE CONVERTED BY UPER CASE

/*#include <iostream>
using namespace std;
#include <string.h>
int main()
{ string str="nazneen";
for(int i=0; i<=str.length(); i++)
if( str[i]>='a' && str[i]<='z')
{
str[i]=str[i]-'a'+'A';

}
cout<<str;

}*/


#include <iostream>
using namespace std;
#include <string.h>
int main()
{ string str="NAZNEEN";
for(int i=0; i<=str.length(); i++)
if( str[i]>='A' && str[i]<='Z')
{
str[i]=str[i]-'A'+'a';

}
cout<<str;

}
