#include "iter.hpp"

int main(void)
{
    std::cout<<YELLOW<<"Template function iter for "<<RESET;
    std::cout<<BLUE<<"CHAR"<<RESET<<YELLOW<<" array"<<std::endl;
    std::cout<<"----------------------------------------------"<<RESET<<std::endl;
    char    arr[6] = "hello";
    ::iter(arr, 5, foo);
    std::cout<<YELLOW<<"----------------------------------------------"<<std::endl;

    std::cout<<YELLOW<<"Template function iter for "<<RESET;
    std::cout<<BLUE<<"STRING"<<RESET<<YELLOW<<" array"<<std::endl;
    std::cout<<"----------------------------------------------"<<RESET<<std::endl;
    std::string arr1[3] = {"hello", "dear", "friend"};
    ::iter(arr1, 3, foo);
    std::cout<<YELLOW<<"----------------------------------------------"<<std::endl;

    std::cout<<YELLOW<<"Template function iter for "<<RESET;
    std::cout<<BLUE<<"INT"<<RESET<<YELLOW<<" array"<<std::endl;
    std::cout<<"----------------------------------------------"<<RESET<<std::endl;
    int arr2[5] = {-32, -8, 0, 78, 235};
    ::iter(arr2, 5, foo);
    std::cout<<YELLOW<<"----------------------------------------------"<<std::endl;

    std::cout<<YELLOW<<"Template function iter for "<<RESET;
    std::cout<<BLUE<<"FLOAT"<<RESET<<YELLOW<<" array"<<std::endl;
    std::cout<<"----------------------------------------------"<<RESET<<std::endl;
    float arr3[4] = {0.3f, 78.2f, 235.11f, 0.001f};
    ::iter(arr3, 4, foo);
    std::cout<<YELLOW<<"----------------------------------------------"<<RESET<<std::endl;
    
    return 0;
}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }