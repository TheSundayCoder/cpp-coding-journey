// Destructors...to destroy object and free memory allocated to it.

//  Destructor is a special member function which is invoked automatically when the object goes out of scope or is explicitly deleted.
//  It has the same name as the class but is preceded by a tilde (~) symbol.
//  It does not take any parameters and does not return any value.
//  A class can have only one destructor.
//  If we do not define a destructor, the compiler provides a default destructor that performs a shallow cleanup of the object.

#include <iostream>
using namespace std;
int count = 0; // ye wala glo variable static ka kaam kr dega
class num
{
  // static int count ;
public:
  num() // object bant hi direct call hoga automatic
  {
    count++;
    cout << ":Constructor called for object number " << count << endl;
  }
  ~num() // destruct hone pe directly call hoga automatic
  {
    cout << ":Destructor called for object number " << count << endl;
    count--;
  }
};
// int num::count;
int main()
{
  cout << "we are in main function...creating 2 objects a and b" << endl;
  num a;
  {
    cout << "creating two more objects in block" << endl;
    num n2, n3;
    cout << "Exiting block" << endl;
  } // block ka scope bas block ke andar tk rehta hai..block khtm scope khtm
  // block me jo bhi banai hai block end hone pe wo chiz khtm hojati hai....
  cout << "Back to main" << endl;

  num b;
  return 0;
}