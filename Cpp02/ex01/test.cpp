#include <iostream>

class  Sum 
{
    private:
    int x = 0 ;
    public:
    Sum()
    {
        std::cin >> x ;
    }
    void plus( Sum ob1, Sum ob2)
    {
        std::cout << ob1.x + ob2.x;
    }
    void show(Sum ob2)
    {
        std::cout << x + ob2.x;
    }
    void operator + (Sum ob)
    {
        x+ob.x;
    }
};
int main()
{
    Sum ob1;
    Sum ob2;

}