#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int,int,int);
void swap(int&,int&);

int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  
  cout<<"From greatest to least, they are: ";
  sortDescending(numA, numB, numC);
  return 0;
}
/*Our main function prompts the user for three values to sort outputing them correctly in descending order.*/

void sortDescending(int first, int second, int third)
{
  if( first < third )
  {
    swap(third,first);
  }
  if( first < second )
  {
    swap(second,first);
  }
  if( second < third )
  {
    swap(third,second);
  }
  cout<<first<<","<<second<<","<<third<<endl;
}/*Our sort orders our values by swaping variable names and values correctly using the given condintons within our if statements.Outputing the updated variables.*/

void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
/*Our swap takes in the address to our value and swaps it the other address that is given within the parameters.*/
