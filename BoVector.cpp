/* https://www.youtube.com/watch?v=Vc1RyqWFbiA&list=PL5jc9xFGsL8G3y3ywuFSvOuNm3GjBwdkb&index=1 */

#include<string>
#include<iostream>
using namespace std;

template<class T>
class BoVector
{
private:
    T arr[1000];
    int size;

public:
BoVector():size(0) {}
void push(T a) { arr[size] = a; size++; }
void print();
T get(int i);
int getSize() { return size; }
};

template<class T>
void BoVector<T>::print()
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " : ";
    }
    cout << "\n";
}

template<class T>
T BoVector<T>::get(int i)
{
    return arr[i];
}


int main()
{

BoVector<int> bv;
bv.push(3);
bv.push(7);
bv.push(2);
bv.push(9);
bv.push(6);

bv.print();

BoVector <float> bvs;
bvs.push(1.2);
bvs.push(6.7);
bvs.push(7.8);
bvs.push(8.7);
bvs.print();

cout << "bvs.get(3) \n" << bvs.get(3);
cout << "bvs.getSize() \n" << bvs.getSize();


return 0;
}
