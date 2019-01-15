#include <iostream>

using namespace std;

// int main()
// {
//   int alondra[7] = {66,75,4,43,99,32,45};
//
//   cout << alondra[3] << endl;
//
//   return 0;
// }

// int main()
// {
//   int bucky[9];
//
//   cout << "Element - Value" << endl;
//
//   for(int x = 0; x<=8; x++) {
//     bucky[x] = 99;
//     cout << x << " ______  " << bucky[x] << endl;
//   }
//
//   return 0;
// }

// Array for calculator
//
// int main()
// {
//   int tuna[5] = {20,54,76,345,69};
//   int sum = 0;
//
//   for (int x = 0; x < 5; x++) {
//     sum += tuna[x];
//     cout << sum << endl;
//
//   }
//
//   return 0;
// }

// Passing Arrays to Functions
void printArray(int theArray[], int sizeOfArray);

int main()
{
  int bucky[3] = {34,23,643};
  int jessica[6] = {2,34,54,37,20,69};

  printArray(jessica, 6);

  return 0;
}

void printArray(int theArray[], int sizeOfArray){
     for(int x = 0; x<sizeOfArray; x++) {
       cout << theArray[x] << endl;
     }


}
