/** Sequenctial containers can be represented linearly
    Associative containers represented as BST
        - elements are pre sorted
    SET - no duplicate elements
*/
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set <int> s;
    set<int>::iterator it;
    s.insert(4);
    s.insert(2);
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    s.insert(3);
    s.insert(7);
    s.insert(9);
    s.insert(11);
    s.insert(10);
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    it=s.find(15);      //if element not found .. returns the size of the set.
    cout<<"\n"<<*it<<endl;
    return 0;
}
