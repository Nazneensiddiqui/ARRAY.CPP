/*#include <iostream>
using namespace std;

class tenthfrnd2;  // Forward declaration

class tenthfrnd1 {
    int per = 90;
    friend void result(tenthfrnd1, tenthfrnd2);  // Friend function declaration
};

class tenthfrnd2 {
    int per = 89;
    friend void result(tenthfrnd1, tenthfrnd2);  // Friend function declaration
};

void result(tenthfrnd1 ob1, tenthfrnd2 ob2)    //friend function diffine
 {
    if(ob1.per > ob2.per)
        {
        cout << ob1.per << " is highest";
    }
    else {
        cout << ob2.per << " is highest";
    }
}

int main() {
    tenthfrnd1 t1;
    tenthfrnd2 t2;
    result(t1, t2);

    return 0;
}*/


//...................friend class.........................................
//with the help of friend class we can access the privet data member and privet data no. function in a any class out site of it protected that the friend.class in it.
/*#include <iostream>
using namespace std;

class sbi
{int amount = 10000;
void info()
{
cout<<"customer of SBI\n";
}
friend class axis;
};
class axis
{
 public: void show(sbi s)//class name user difine datatype he isme claas ke name ke sath object he
 {
   cout<<"blance="<<s.amount<<"\n";
   s.info();
 }
};

int main()
{
    sbi s1;
    axis a;
    a.show(s1);
}*/

//...............................composite class..........................................
//

#include <iostream>
using namespace std;
class   client
{
 public : void virus()
 {
cout<<"hurray !!! ur system got hacked \n";
}
};
class Reward
{client c;
public:void dollar()
{
    cout<<"U got $1000000000000\n";
    c.virus();
}
};
int main()
{Reward r;
r.dollar();
}



