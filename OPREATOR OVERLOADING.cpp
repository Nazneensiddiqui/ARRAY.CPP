//,......................OPERATOR OVERLOADING................................
//operator overloading-> operator overloading is used to perform the
#include <iostream>
using namespace std;
class cybrom
{int a;
public:cybrom(int k)
    {
    a=k;
    }
    void operator++()
    {
        a++;
        cout<<a;
    }
};
int main()
{
cybrom obj(20);
++obj;

}
