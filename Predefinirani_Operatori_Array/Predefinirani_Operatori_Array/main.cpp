
#include <iostream>

#include <iostream>
using std::cerr;
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;
#include <cstdlib>
using std::exit;

#include "Array.hpp"
using namespace std;




int main()
{
    Array size1( 9 );
    Array size2;
    
    
    cout << "Size of Array size1 is "
    << size1.getSize()
    << "\nArray after initialization:\n" << size1;
    
   
    cout << "\nSize of Array size2 is "
    << size2.getSize()
    << "\nArray after initialization:\n" << size2;
    
   
    cout << "\nEnter 17 number:" << endl;
    cin >> size1 >> size2;
    
    cout << "\nAfter input, the Arrays contain:\n"
    << "size1:\n" << size1
    << "size2:\n" << size2;
    
   
    cout << "\nEvaluating: size1 != size2" << endl;
    
    if ( size1 != size2 )
        cout << "size1 and size2 are not equal" << endl;
    
    Array size3( size1 );
    
    cout << "\nSize of Array size3 is "
    << size3.getSize()
    << "\nArray after initialization:\n" << size3;
    
   
    cout << "\nAssigning size2 to size1:" << endl;
    size1 = size2;
    cout << "size1:\n" << size1
    << "size2:\n" << size2;
    
        cout << "\nEvaluating: size1 == size2" << endl;
    
    if ( size1 == size2 )
        cout << "size1 and size2 are equal" << endl;
    
       cout << "\nsize1[5] is " << size1[ 5 ];
    
   
    cout << "\n\nAssigning 1000 to size1[5]" << endl;
    size1[ 5 ] = 1000;
    cout << "size1:\n" << size1;
    
    
   
}

