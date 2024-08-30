#include <iostream>
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

void result(tenthfrnd1 ob1, tenthfrnd2 ob2)
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
}
