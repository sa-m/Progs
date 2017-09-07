#include<iostream>
#include<vector>
#include<algorithm>//sort function uses quicksort ie nlogn
#include<functional>
using namespace std;
int main()
{
    int x;
    vector<int> v;
     vector<int>::iterator t;
    for(int i=0;i<5;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    t=v.begin();        //returns address of starting position
    //v.end() for end's +1 reference i.e."NULL"
    sort(v.begin(), v.end()); // ascending order
    sort(v.begin(), v.end(),greater<int>()); // descending order
    for(;t!=v.end();t++)
        cout<<*t<<", ";
    return 0;
    x = max_element(v.begin(),v.end());
}
/**
vector<int> a(x,y)

    x=no of spaces
    y is the elements stored in those 5 spaces

    {y,y,y,y,y,...}

reverse(v.begin(),v.end()) // reverses the vector
v.empty() - returns 1 if vector is empty

    while(v.empty())
    {
        cout<<v.back()<<", ";
        v.pop_back();
    }
v.pop_back() - deletes like stack .. LIFO

i = distance(v.begin,t) - {O(n)}


vector<int> d(a.begin()+1,a.end()-2)
    if a={1,2,3,4,5,6,7...}
       d={2,3,4,5}
    x=a[2];
    y=a.at(2)

    a.size() - gives no of elements

    #include<algorithm>
            sort(a,a+10) - arranges in ascending order (1st 10 elements) - uses Quick Sort(n log n )
*/
