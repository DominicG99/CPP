#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stack1;
    stack1.push(0);
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    while(!stack1.empty())
    {
        cout << ' ' << stack1.top();
        stack1.pop();
    }



    return 0;
}