#include <iostream>
using namespace std;

int Foo(int *pa)
{
    return (*pa)++;
}

int main()
{
    int a = 0;

    cout << a <<  endl;

    Foo(&a);

    cout << a <<  endl;
}

