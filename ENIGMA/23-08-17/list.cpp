#include<iostream>
#include<list>
#include<algorithm> //find function in algorithm
using namespace std;
int main()
{
    list <int> s;
    list<int>::iterator it;
    s.push_front(4);
    s.push_front(5);     //Insert at begin
    s.push_back(6);     //Insert at end
    it=s.begin();
    s.insert(++it,7);     //Insert at iterator position ie 2nd place
    s.sort();        //sort function in list
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    it=s.end();
    s.erase(--it);      //erases the data at which iterator is pointing
    cout<<"\n"<<*it<<endl; // even after deletion the iterator goes out of list still pointing to same value.....  connects left pointer to right
    it=find(s.begin(),s.end(),5); // in <algorithm>;
    cout<<"\n"<<*it<<endl;
    return 0;
}
