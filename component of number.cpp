#include <iostream>
using namespace std;
#include <iomanip>
#include <cstdlib>
int main()
{
  
float i;
float n;
cout << "inter Number :)";
cin >> i;

if ( i > 0 )

{
  
for ( n=0  , i ; i>0 ; ++n, --i )
   {
   cout << n << " + " << i  << " = "<< i+n << "\n";
   }
   cout << n << " + " << i  << " = "<< i+n << "\n";
  
}

else

{
  
for ( n=0  , i ; i<0 ; --n, ++i )
   {
   cout << n << " + " << i  << " = "<< i+n << "\n";
   }
   cout << n << " + " << i  << " = "<< i+n << "\n";
  
} 

}