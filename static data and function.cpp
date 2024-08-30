//static data member and static function member.
//non static example
/*#include <iostream>
using namespace std;
class cybrom
{int x;
public:void input(int k1)
{x=k1;

}
void show()
{
  cout<<x<<"\n";
}
};
int main()
{cybrom c1;
c1.input(10);
c1.show();
cybrom c2;
c2.input(20);
c2.show();
c1.show();

}*/


//static data member class

/*#include <iostream>
using namespace std;
class cybrom
{
    static int x;
public:void input(int k1)
{x=k1;

}
void show()
{
  cout<<x<<"\n";
}
};
int cybrom::x;
int main()
{cybrom c1;
c1.input(10);
c1.show();
cybrom c2;
c2.input(20);
c2.show();
c1.show();

}*/


//static  member  function class

#include <iostream>
using namespace std;
class cybrom
{
    static int x;
public: static void input(int k1)
{x=k1;

}
static void show()
{
  cout<<x<<"\n";
}
};
int cybrom::x;
int main()
{cybrom::input(10);
cybrom::show();

}

