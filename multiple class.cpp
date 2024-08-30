#include <iostream>
using namespace std;
class j1
{
public:void show()
{
cout<<"welcome\n";
}
int sqr(int a)
{
return a*a;
}
};
int main()
{
j1 a1;
cout<<a1.sqr(8)<<"\n";
a1.show();

}
