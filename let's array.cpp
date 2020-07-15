#include <iostream>
using namespace std;

int main()
{
	cout<<"*Project by Sumeet Patil*";
   int data[5];
   cout << "\nEnter elements: ";

   for(int i = 0; i < 5; ++i)
      cin >> data[i];

   cout << "You entered: ";
   for(int i = 0; i < 5; ++i)
      cout << endl << *(data + i);

   return 0;
}
