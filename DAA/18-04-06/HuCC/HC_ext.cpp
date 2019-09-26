#include<bits/stdc++.h>
using namespace std;
char arr[128]; int freq[128];
int inp()
{
	string s;	char a[128]={0};	int i,j,k;
	cout<<"Enter String : ";
	getline(cin,s);
	for(i=0;s[i]!='\0';i++)
		a[s[i]]++;
	for(i=j=0;i<128;i++)
		if(a[i]>0)	{arr[j]=char(i);	freq[j]=a[i];	j++;}
	return j;
}
struct ch_int {
	char data;
    int freq;
    ch_int *l, *r; 
    ch_int(char data, int freq){ 
        l = r = NULL;
        this->data = data;
        this->freq = freq;
    }
};
struct check{bool operator()(ch_int* l, ch_int* r){return (l->freq > r->freq);}};
void out(struct ch_int* root, string str){ 
    if (!root)
        return; 
    if (root->data != '$')
        cout << root->data << ": " << str << "\n"; 
    out(root->l, str + "0");
    out(root->r, str + "1");
}
void HC(char data[], int freq[], int size){
    struct ch_int *l, *r, *top;
    priority_queue<ch_int*, vector<ch_int*>, check> minHeap; 
    for (int i = 0; i < size; ++i)
        minHeap.push(new ch_int(data[i], freq[i]));
    while (minHeap.size() != 1) {
        l = minHeap.top();        minHeap.pop(); 
        r = minHeap.top();        minHeap.pop();
        top = new ch_int('$', l->freq + r->freq); 
        top->l = l;
        top->r = r; 
        minHeap.push(top);
    }
    out(minHeap.top(), "");
}
int main(){	int size=inp(); 
    HC(arr, freq, size); 
    return 0;
}
