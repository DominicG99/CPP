#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> queue1;
    for(int i = 0; i < 10; i++)
    {
        queue1.push(i); //fill queue from 0-9
    }
    while(!queue1.empty())
    {
        cout << queue1.front() << ' '; //print top of queue and pop....
        queue1.pop();
    }



    return 0;
}