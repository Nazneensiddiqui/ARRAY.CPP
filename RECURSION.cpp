//.............RECURSION..............
//HEAD RECURSION...........

/*#include <iostream>
using namespace std;
int dsc (int n)
{
if(n==0)
{
return 0;
}
dsc(n-1);
cout<<n<<"\t";
}
int main()
{
dsc(5);

}*/

//.............RECURSION..............
//TAIL RECURSION...........

/*#include <iostream>
using namespace std;
int dsc (int n)
{
if(n==0)
{
return 0;
}
cout<<n<<"\t";
dsc(n-1);
}
int main()
{
dsc(5);

}*/



//WAP for factorial to use recursion.

/*#include <iostream>
using namespace std;
int fact(int n)
{
if(n==1)
{
return 1;
}
int k=n*fact(n-1);
return k;
}
int main()
{
cout<<fact(5);

}*/

//WAP TO USE RECURSION FOR base and POWER

/*#include <iostream>
using namespace std;
int prog(int base, int power)
{
if(power==0)
{
return 1;
}
if(base==0)
{
return 0;
}
return base*prog(base,power-1);
}
int main()
{
cout<<prog(5,2);

}*/
//............................base power...............

/*#include <iostream>
using namespace std;
int prog(int base, int power)
{
if(power==0)
{
return 1;
}
if(base==0)
{
return 0;
}
return base*prog(base,power-1);
}
int main()
{int b,p;
cout<<"enter the base number\n";
cin>>b;
cout<<"enter the power\n";
cin>>p;
cout<<prog(b,p);


}*/


//TO THE GENRET THE nTH TEAM TO USE FIBONACCI SERIES.
#include <iostream>
using namespace std;
int fib(int n)
{if(n<=1)
{
    return n;
}
return fib(n-2)+fib(n-1);
}
int main()
{int n;
cout<<"enter team\n";
cin>>n;
cout<<fib(n);

}


