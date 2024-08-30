/*#include <iostream >
using namespace std;
#include <string.h>
int main ()
{char s[40];
char n[30] = "BHOPAL";
cout<<strrev(n);//string reve
/*cout<<"enter name\n";
cin>>s;
cout<<"Lengt="<<strlen(s)<<"\n";//string length
cout<<"capital letter="<< strupr(s)<<"\n";//string upper
cout<<"small letter="<<strlwr(n)<<"\n";//string lower
cout<<"merge="<<strcat(s,n)<<"\n";//string concatenation
strcpy(s,n);//string copy- n ki value ko s me store karane ke liye
cout<<"s="<<s<<"\n";*/
//cout<<"enter pwd\n";
//cin>>s;
/*if(strcmp(s,"sunday")==0)//string compare
{
cout<<"matched";
}
else
{
cout<<"ims matched";
}*/
/*if(stricmp(s,"sunday")==0)//string compare- is me capital ho ya small dono ko match karega
{
cout<<"matched";
}
else
{
cout<<"mis matched";
}

}*/


/*#include <iostream >
using namespace std;
#include <string.h>
int main ()
{char a[20];
cout<<"enter name\n";
cin>>a;
   if(strcmp(a)!=0)
    {
  cout<<"palindome="<<strrev(a);
}
else
{
    cout<<"not palindome="<<strrev(a);
}

}*/


#include <iostream>
#include <string.h>
using namespace std;


void strrev(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; ++i) {
        swap(str[i], str[len - i - 1]);
    }
}

int main() {
    char a[20];
    cout << "Enter name: ";
    cin >> a;


    char b[20];
    strcpy(b, a);


    strrev(a);


    if (strcmp(b, a) == 0) {
        cout << "Palindrome: " << a;
    } else {
        cout << "Not palindrome: " << a;
    }

    return 0;
}

