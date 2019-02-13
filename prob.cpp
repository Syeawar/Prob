#include <iostream>
#include <algorithm>
using namespace std;
void reverseArray(int arr[], int ele)
{
 for (int i = 0; i < ele; i++)
  cout << arr[i] << " ";
 cout << endl;
}
int main()
{
 int reverseArray[] = { 1, 2, 3, 4 };
 cout << "\n" << endl;
 for (auto arr : reverseArray)
 {
  cout << " " << arr;
 }
 reverse(reverseArray, reverseArray + 4);
 cout << endl << "";
 for (auto &arr : reverseArray)
 {
  cout << " " << arr;
 }

 return(0);
}
