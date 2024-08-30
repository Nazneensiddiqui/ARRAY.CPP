/*#include<iostream>
using namespace std;
#include <string.h>
{struct cybrom;
{int age;
char name[20];
}
}
int main()
{struct cyborm d;
d.age=20;
cout<<d.age;
strcyp(d.name,"bhopal");
cout<<d.name;


}*/


#include <iostream>
using namespace std;

// Structure definition
struct Person {
    string name;
    int age;
    float height;
};

int main() {
    // Creating an instance of the structure
    Person person1;

    // Assigning values to the members
    person1.name = "John";
    person1.age = 30;
    person1.height = 5.9;

    // Accessing and printing the values
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << " feet" << endl;

    return 0;
}

