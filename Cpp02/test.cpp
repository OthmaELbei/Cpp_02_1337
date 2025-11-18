
#include <iostream>

class Test
{
private:
    int x ;
public:
    Test(int nb);
    Test(){
        x=0;
    };
   int operator ++(int);
   int  getx()const
   {
    return x;
   }
//    std::ostream &operator<<(std::ostream &out, const Test &x);
// Test& operator = (const Test &other);
};

// Test& Test::operator = (const Test &other)
//  {
//   std::cout<< "Copy assignment operator called" << std::endl;
//     if(this != &other)
//     {
//       this->x= other.x;
//     }
//     return *this;
//  }
 std::ostream &operator <<(std::ostream &out,const Test &x)
 {
    out << x.getx();
    return out;
 }
Test::Test(int nb)
{
    x = nb;
}
int Test::operator++(int)
{
 
    return   x++;
}

int main()
{
    Test s(4);
    Test c(5);
    Test d;

    c = s = d;
    std::cout<< s++ << std ::endl;
    std::cout<< s << std ::endl;
    std :: cout << c << std::endl;
    std :: cout << d << std::endl;
}