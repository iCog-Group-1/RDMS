#include <iostream>
#include <set>
using namespace std;
template<typename T>
class n_tuple
{ 
public:
    T height;
    T width;
    T length;
    n_tuple()
    {
        height = 0;
        width = 0;
        length = 0;
    }
    T getfirst()
    {
        return height * width * length;
    }
    T getfirst(T H, T W, T L)
    {
        height = H;
        width = W;
        length = L;
        return height * width * length;
    }
};
int main()
{
    n_tuple<int> first;
    cout << "First volume: " << first.getfirst() << endl;
    first.height = 2;
    first.width = 3;
    first.length = 4;
    cout << "First volume: " << first.getfirst() << endl;
    n_tuple<double> second;
    cout << "Second volume: " << second.getfirst(2.1, 3.2, 4.3) << endl;
    cout << "Height: " << second.height << endl;
    cout << "Width: " << second.width << endl;
    cout << "Length: " << second.length << endl;
    return 0;
}