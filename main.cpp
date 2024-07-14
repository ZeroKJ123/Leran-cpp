#include <iostream>
using namespace std;

class Integer
{
public:
    Integer(int number)
    {
        value=number;
    }
    friend int compare(const Integer& obj1, const Integer& obj2);

    void print() const
    {
        std::cout << "Value: " << value << std::endl;
    }
private:
    int value;
};

int compare(const Integer& obj1, const Integer& obj2)
{
    return obj1.value - obj2.value;
}

void print(const Integer& num1, const Integer& num2)
{
    auto result = compare(num1, num2);
    if(result > 0)
    {
        cout << "num1 greater than num2" << endl;
    }
    else if(result < 0)
    {
        cout << "num1 less than num2" << endl;
    }
    else
    {
        cout << "num1 equal than num2" << endl;
    }

}

int main()
{
    print(Integer{10}, Integer{15});
    print(Integer{15}, Integer{10});
    print(Integer{15}, Integer{15});
}

