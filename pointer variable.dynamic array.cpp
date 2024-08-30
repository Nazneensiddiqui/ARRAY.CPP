 //pointer variable.

/* #include <iostream>
 using namespace std;
 int main()
 {int a=300;
 int *p;
 cout<<&p<<"\n";
 cout<<&a;
 p=&a;
 cout<<p;   //..........address print karta he
cout<<*p;    //.............value print karta he


 }*/

/* #include <iostream>
 using namespace std;
 int main()
 {int a[]={43,5,6,8,7};
 cout<<*a;   // 43..........0 indexing leta he.
 cout<<*(a+2)+10;  //16
  cout<*a+2;  //45
}*/


#include <iostream>
 using namespace std;
 int main()
 {int a=10;
 cout<<"a="<<&a<<"\n";
 int *b=&a;
 cout<<"b="<<&b<<"\n";
 int **c=&b;
 cout<<"&c="<<&c<<"\n";
 cout<<"c="<<c<<"\n";  // b ke address ko refer karta he.
 cout<<"**c="<<**c<<"\n"; //a ki value ko batata he a=10
 cout<<"*c="<<*c<<"\n"; //a ke address ko refer karta he

 }
