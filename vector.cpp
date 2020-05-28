#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vect1;
    vector<int> vect2 = {1, 2, 3, 4, 5};
    vector<int>::iterator itr;
    vect1.assign(10, 15); // fills vector with value 15 10 times to vect1.

    cout << "Vector elements are: ";
    for(int i = 0; i < vect1.size(); i++)
    {
        cout << vect1[i] << " ";
    }
    cout << endl;
    vect1.push_back(20); //inserts 20 at last position
    int n = vect1.size();
    cout << "The last element is: " << vect1[n - 1] << endl;
    vect1.pop_back(); //pop the last element
    vect1.insert(vect1.begin(), 5); //insert 5 at the beginning
    itr = vect1.end();
    --itr;
    vect1.insert(itr, 5);
    for(int i = 0; i < vect1.size(); i++)
    {
        cout << vect1[i] << " ";
    }
    vect1.erase(vect1.begin()); //erase the first elment in the vector
    vect1.erase(vect1.begin(), itr); //erase range from beginning of vector to iterator.
    for(int i = 0; i < vect1.size(); i++)
    {
        cout << vect1[i] << " ";
    }
    vect1.swap(vect2);
    cout << "\nSwapping vector 1 with vector 2 " << endl;
    for(int i = 0; i < vect1.size(); i++)
    {
        cout << vect1[i] << " ";
    }
    int ptr = vect1.at(3);
    cout << "Printing value at vector position 3: " << ptr << endl;
    cout << "Printing value at beginning vector position: " << vect1.front() << endl;
    cout << "Printing value at last vector position: " << vect1.back() << endl;
    int* pos = vect1.data();
    cout << *pos << endl;
    return 0;
}