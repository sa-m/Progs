// MRU Paging

#include<bits/stdc++.h> 
using namespace std; 
int pf(int p[], int n, int f) 
{ 
    set<int> s; 
    map<int, int> cn; 
    int pfc = 0; 
    for (int i=0; i<n; i++) 
    { 
        if (s.size() < f) 
        { 
            if (s.find(p[i])==s.end()) 
            { 
                s.insert(p[i]); 
                pfc++; 
            } 
            cn[p[i]] = i; 
        } 
        else
        { 
            if (s.find(p[i]) == s.end()) 
            { 
                int lru = INT_MAX, val; 
                for (std::set<int>::iterator it=s.begin(); it!=s.end(); it++) 
                { 
                    if (cn[*it] > lru) 
                    { 
                        lru = cn[*it]; 
                        val = *it; 
                    } 
                } 
                s.erase(val); 
                s.insert(p[i]); 
                pfc++; 
            } 
            cn[p[i]] = i; 
        } 
    } 
  
    return pfc; 
}

int main() 
{ 
    int p[] = {7,0,1,2,0,3,0,4,2,3,0,3,2,1,2,0,1,7,0,1}; 
    int n=20,f;
    cout <<"Frame 3 : "<<pf(p, n, 3)<<endl; 
    cout <<"Frame 4 : "<<pf(p, n, 4)<<endl;
    
//    cout<<"Enter No. of Pages : ";	cin>>n;	int p[n];
//	cout<<"Enter the Pages : ";
//		for(int i=0;i<n;i++)	cin>>p[i];
//    cout<<"Enter No. of Frames : ";	cin>>f;    

//	cout <<"Frame "<<f<<" : "<<pf(p, n, 3);  
    return 0; 
} 
