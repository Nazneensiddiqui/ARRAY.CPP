//...............................constructed............................................
// constructor is used to create and memory of its class at run time.constructor is called special type of function.
// constructor memory allocated by object.class name and function name is same in the class. by default public memory.
//main function constructor ka koi data type nahi hota he .constructor ka koi return type nahi hota he

//constructor note:
 //constructor desn't have any return type
 //constructor always modify is public.there are three types of constructor. 1. default 2. parametrized 3. copy constructor<deep copy. shallow copy
 // c++ program contain or default constructor by default and  default constructor non parametrized
 // public: classroom() special called function
 //{
  //   statement code;
// }
//1. default constructor
#include <iostream>
using namespace std;
class joy
{
public:joy()   //this is constructor because same name is class and constructor
{
    cout<<"memory allocated\n";
}
~joy() // isko called nahi karne padta he// this is destructor / destructor or constructor dono hi dikhai nahi deta he ye in build function hota he
{
    cout<<"delete memory";
}
public:void show()
{
 cout<<"joy class welcome\n";
}
};
int main()
{
joy k;
k.show();


}
