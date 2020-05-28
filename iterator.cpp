#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5}; //initiliaze a vector
    vector<int>::iterator ptr; //initiliaze an iterator
    vector<int>::iterator ftr;
    cout << "The vector elements are: ";
    for(ptr = arr.begin(); ptr != arr.end(); ptr++) // iterate through vector
    {
        cout << *ptr << " "; //print elements
    }
    ptr = arr.begin(); //point iterator to start of vector
    ftr = arr.end();
    auto it = next(ptr, 3);
    auto it1 = prev(ftr, 3);
    advance(ptr, 3); //advances iterator position to 4
    cout << "\niterator position: " << *ptr << endl;
    next(ptr,3); //points iterator to 4
    cout << "iterator position: " << *it << endl;
    prev(ftr, 3); //points iterator to 3
    cout << "iterator position: " << *it1 << endl;
    cout << *arr.end();
    return 0;
}