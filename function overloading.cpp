// function overloading => if a class having more than one function with same name
//by using different program is called function over loading class
// class hi memory leta he ....function memory nahi leta he
// function run time me memory leta he

/*#include <iostream>
using namespace std;
class cybrom
{
int a,b,c;
public:void sum(int x,int y)
{
a=x;
b=y;
cout<<"sum of two n0 = "<<a+b<<"\n";
}
void sum(int x,int y, int z)
{
cout<<"sum of three no ="<<x+y+z<<"\n";
}
void sum()
{
cout<<"program of function overloading \n";

}
};
int main()
{
cybrom c;
c.sum();
c.sum(10,50);
c.sum(10,80,120);
cout<<"size="<<sizeof(c);

}*/


/*#include <iostream>
using namespace std;
class cybrom
{
public:void sum(int x,int y)
{

cout<<"sum of two no = "<<x+y<<"\n";
}
void sum(int x,int y, int z)
{
cout<<"sum of three no ="<<x+y+z<<"\n";
}
void sum()
{
cout<<"program of function overloading \n";

}
};
int main()
{
cybrom c;
c.sum();
c.sum(10,50);
c.sum(10,80,120);
cout<<"size="<<sizeof(c);  //class ka object bnane par 1 bite leta he "class hipe memory leta he" or function

}*/



/*#include <iostream>
using namespace std;
class cybrom
{int a,b;
public:void sum(int a,int b)
{
a=a;
b=b;
cout<<"sum of two no = "<<a+b<<"\n";
}
void sum(int x,int y, int z)
{
cout<<"sum of three no ="<<x+y+z<<"\n";
}
void sum()
{
cout<<"program of function overloading \n";
cout<<"a="<<a<<"\t"<<"b="<<b<<"\n";

}
};
int main()
{
cybrom c;

c.sum(10,50);
c.sum(10,80,120);
c.sum();
cout<<"size="<<sizeof(c);

}*/


//this pointer ka use karte he agar data memory or function member same ho to

#include <iostream>
using namespace std;
class cybrom
{int a,b;
public:void sum(int a,int b)
{
this->a=a;
this->b=b;
cout<<"sum of two no = "<<a+b<<"\n";
}
void sum(int x,int y, int z)
{
cout<<"sum of three no ="<<x+y+z<<"\n";
}
void sum()
{
cout<<"program of function overloading \n";
cout<<"a="<<a<<"\t"<<"b="<<b<<"\n";

}
};
int main()
{
cybrom c;

c.sum(10,50);
c.sum(10,80,120);
c.sum();
cout<<"size="<<sizeof(c);

}
