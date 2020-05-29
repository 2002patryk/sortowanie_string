#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string litery;
    cout << "Podaj ciag liter: ";
    cin >> litery;
   
   
    for( int i = 0; i < litery.length() - 1; i++ )
    for( int j = 0; j < litery.length() - 1; j++ )
    if( litery[ j ] > litery[ j + 1 ] )
         swap( litery[ j ], litery[ j + 1 ] );
   
    cout << litery << endl << endl;
   
    return 0;
}
