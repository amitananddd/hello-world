#include <iostream>
using namespace std;

template<class U>
U add(U a, U b)
{
    return a + b;
}

int main()
{

int i;
float j;

i = add<int>(5,10);

j = add<float>(1.2,6.7);

cout << "i = " << i << " j = " << j << endl;

return 0;
}
