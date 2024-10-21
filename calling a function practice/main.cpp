#include <iostream>

using namespace std;
// The first error made was not including your definition into the your decleartion
//

 void myFunction(string firstname){
 cout << firstname << "Pitch black \n";
 }
int main()
{
  myFunction("Mary");
  myFunction("Daniel");
  myFunction("favor");
    return 0;
}
