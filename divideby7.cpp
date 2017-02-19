#include <iostream>

using namespace::std;

int main()
{
  int input, result = 0;
  cout << "Enter number to be divided by 7" << endl;
  cin >> input;
  int maxresult = input >> 2;

   while(input >= 7){
     input = input - 7;
     result++;
   }

  cout << "Quotient = " << result << " Remainder = " << input;
  return 0;
}