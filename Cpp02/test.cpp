
#include <iostream>

class Test
{
private:
    int x ;
public:
    Test();
   int operator ++(int);
   int  getx()const
   {
    return x;
   }
//    std::ostream &operator<<(std::ostream &out, const Test &x);

};
 std::ostream &operator <<(std::ostream &out,const Test &x)
 {
    out << x.getx();
    return out;
 }
Test::Test()
{
    x = 0;
}
int Test::operator++(int)
{
 
    return   x++;
}

int main()
{
    Test s;
    std::cout<< s++ << std ::endl;
    std::cout<< s << std ::endl;
}