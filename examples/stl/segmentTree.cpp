#include<iostream>
using namespace std;

const int MAXN = 1e5 + 10;
int vet[MAXN];
int tree[MAXN * 4];
/*
tendi foi é nada.
*/
void build(int node, int l, int r){
    if(l == r) {
        tree[node] = vet[l];
        return;
    } 
    int mid = (l + r)/2;
    build(2*node+1, l, mid);
    build(2*node+2, mid+1, r);
    tree[node] = tree[2*node+1] + tree[2*node+2];
}

void update(int node, int tl, int tr, int idx, int v){
    if(tl==tr){
        tree[node]=v;
        return;
    }
    int mid = (tl+tr)/2;
    if(tl<=idx and idx<=mid) update(2*node+1,tl,mid,idx,v);
    else update(2*node+2,mid+1,tr,idx,v);
    tree[node] = tree[2*node+1] + tree[2*node+2];
}

int query(int node, int tl, int tr, int l, int r){
    if(r<tl or l>tr) return 0;
    if(l<=tl and r>=tr) return tree[node];
    int mid = (tl+tr)>>1;
    return query(2*node+1, tl, mid, l, r)+query(2*node+2, mid+1, tr, l, r);
}

int main(){
    build(0, 10, 10);
    for(int i = 0;i < 50;i++) cout<<tree[i];
    return 0;
}