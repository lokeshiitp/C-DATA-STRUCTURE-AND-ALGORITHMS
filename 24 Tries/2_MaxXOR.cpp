// Max XOR of subarray
#include<bits/stdc++.h>
using namespace std;

class Trienode{
public:
    Trienode *next[2];
    Trienode(){
        next[0]=NULL;
        next[1]=NULL;
    }
};
Trienode* builttrie(vector<int> &a){
    Trienode* root=new Trienode();
    int n=a.size();
    for(int i=0; i<n; i++){
        int num=a[i];
        Trienode* cur=root;
        for(int i=31; i>=0; i--){
            int bit=(num>>i) & 1;
            if(cur->next[bit]==NULL){
                cur->next[bit]=new Trienode();
            }
            cur=cur->next[bit];
        }
    }
    return root;
}
int helper(Trienode* root, vector<int> &a){
    int res=0;

    for(int i=0; i<a.size(); i++){
        int num=a[i];
        Trienode* it=root;
        int cur_max=0;
        for(int i=31; i>=0; i--){
            int bit=((num>>i) & 1)?0:1;
            if(it->next[bit]){
                cur_max <<=1;
                cur_max |=1;
                it=it->next[bit];
            }else{
                cur_max <<=1;
                cur_max |=0;
                it=it->next[bit xor 1];
            }
        }
        res=max(res, cur_max);
    }
    return res;
}

int main(){
    vector<int> a={3,10,5,15,2};
    Trienode* root=builttrie(a);
    int ans=helper(root, a);

    cout<<ans;

    return 0;
}