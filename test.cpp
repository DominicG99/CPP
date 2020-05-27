#include <iostream> 
#include <unordered_map> 
#include <map>
using namespace std; 
  
int main() 
{ 
    map<int, int> mapTest;
    mapTest.insert(pair<int, int>(1,10));
    mapTest.insert(pair<int, int>(2,20));
    mapTest.insert(pair<int, int>(3,30));
    mapTest.insert(pair<int, int>(4,40));
    mapTest.insert(pair<int, int>(5,50));
    mapTest.insert(pair<int, int>(6,60));
    
    map<int, int>::iterator itr;
    for(itr = mapTest.begin(); itr != mapTest.end(); itr++)
    {
      cout << '\t' << itr->first << '\t' << itr->second << endl;
    }
    map<int, int> mapTest2(mapTest.begin(), mapTest.end());
    for(itr = mapTest2.begin(); itr != mapTest2.end(); itr++)
    {
      cout << '\t' << itr->first << '\t' << itr->second << endl;
    }
    map<int, int> mapTest3(mapTest.begin(), mapTest.end());
    mapTest3.erase(mapTest3.find(4), mapTest3.find(7));
    for(itr = mapTest3.begin(); itr !=mapTest3.end(); itr++)
    {
      cout << '\t' << itr->first << '\t' << itr->second << endl;
    }
    map<int, int> mapTest4(mapTest.begin(), mapTest.end());
    int num = mapTest4.erase(4);
    for(itr = mapTest4.begin(); itr !=mapTest4.end(); itr++)
    {
      cout << '\t' << itr->first << '\t' << itr->second << endl;
      mapTest4.erase(itr);
    }
    cout << mapTest4.lower_bound(5)->first << '\t' << mapTest4.lower_bound(5)->second << endl;
    cout << mapTest4.upper_bound(5)->first << '\t' << mapTest4.upper_bound(5)->second << endl;
    itr = mapTest4.begin();
    cout << "Utilizing .begin() in a map returns an iterator to the first element in the map " << endl;
    cout << "Utilizing .end() in a map returns an iterator to the element after the last element in the map " << endl;
    int mapSize = mapTest4.size();
    int maxMapSize = mapTest4.max_size();
    cout << "The size of Map 4 is " << mapSize << endl;
    cout << "The maximum size of Map 4 is " << maxMapSize << endl;
    cout << "Is Map 4 empty: " << boolalpha << mapTest4.empty() << endl;
    
    return 0;
} 