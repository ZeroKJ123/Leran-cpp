#include <iostream>
#include <cstdint>
#include <string>
#include <cstring>
using namespace std;

std::string add_binary(uint64_t a, uint64_t b)
{
    string x;
    long int z = a + b;
    long int i, j, temp;

    if(z == 0)
    {
        return x = "0";
    }
    else
    {
            while(z > 0)
        {
            x += to_string(z % 2);
            z = z / 2;
        }

        int length = strlen(x.c_str());
        
        for(i = 0, j = length - 1; i < j; i++, j--)
        {
            temp = x[i];
            x[i] = x[j];
            x[j] = temp;
        }

        return x;
    }
}

int main()
{
    cout << add_binary(0, 0) << endl;
}