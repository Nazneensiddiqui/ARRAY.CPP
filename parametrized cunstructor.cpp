 //........................PARAMETRIZED CONSTRUCTOR.....................................
//we can create a parametrized constructor by using one either parameter and more then one
/*#include <iostream>
using namespace std;
class atm
{int code, pwd;
public:atm(int c,int p) // parametrized constructor he parameter pass kiya he
{
 code = c;
 pwd = p;
}
void show()
{
cout<<"code="<<code<<"\t";
cout<<"pwd="<<pwd<<"\t";
}
};
int main()
{int c,p;
cout<<"enter code\n";
cin>>c;
cout<<"enter pwd\n";
cin>>p;
atm obj(c,p);
obj.show();
}*/

// constructor overloading -> if a program contain more than one and same name constructor is called constructor overloading
/*#include <iostream>
using namespace std;
class atm
{int code, pwd;
public:atm()
{
 cout<<"welcome to my Atm \n";
}
atm(int c,int p)
{
 code = c;
 pwd = p;
}
void show()
{
cout<<"code="<<code<<"\t";
cout<<"pwd="<<pwd<<"\t";
}
~atm()
{
 cout<<"memory deleted \n";
}
};
int main()
{atm k;
int c,p;
cout<<"enter code\n";
cin>>c;
cout<<"enter pwd\n";
cin>>p;
atm obj(c,p);
obj.show();
}*/

//...........................SHALLOW CONSTRUCTOR.....................
// BANE BANAYE FUNCTION HOTE HE

/*#include <iostream>
using namespace std;
class atm
{int Amount;
public:atm(int r)
{
 Amount =r;
}
void show()
{
cout<<"Balance="<<Amount<<"\n";

}
};
int main()
{
atm k(10000);
k.show();
atm p = k; // implicit assignment copy constructor (object ko assign karte he)
p.show();
atm t(k); // shallow copy constructor (parathions me object pass karte he)
t.show();
}*/
//..................................drawback shallow.copy.......................................
/*#include <iostream>
using namespace std;
class atm
{int Amount;
int *location;
public:atm(int a , int l)
{
 Amount =a;
 location = &l;
}
void trans(int r)
{
  Amount = Amount + r;
  *location=*location+1;
}
void show()
{
cout<<"Balance="<<Amount<<"\t";
cout<<"location="<<*location<<"\n";
}
};
int main()
{
atm mpnagar(10000,101);
atm bhel (mpnagar);
mpnagar.show();
bhel.show();
mpnagar.trans(1000);
mpnagar.show();
bhel.show(); //drawback this shallow copy constructor isliye deep copy create kiya gaya.
}*/

//.......................DEEP COPY CONSTRUCTOR..................................
// BANE BANAYE FUNCTION NAHI HOTE HE
#include <iostream>
using namespace std;
class atm
{int Amount; *loc;
public:atm(atm &t)//.......this is &t is object class ka
{
 Amount =t.Amount;
 loc=new int;
 *loc=*(t.loc);
}
atm(int amt, int adrs)
{
  Amount = amt;
  loc = new int;
 loc = &adrs;
}
void tran(int a)
{
  Amount = Amount + a;
  *loc = *loc+1;
}
void show()
{
cout<<"Balance="<<Amount<<"\t";
cout<<"location="<<*loc<<"\n";
}
};
int main()
{
atm mpnagar(10000,101);
atm bhel (mpnagar);
mpnagar.show();
bhel.show();
mpnagar.tran(5000);
mpnagar.show();
bhel.show();
}
