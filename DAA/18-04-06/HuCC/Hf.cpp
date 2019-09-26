#include "sam.h"
using namespace std;
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
