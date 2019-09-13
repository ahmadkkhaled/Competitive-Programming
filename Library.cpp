/// Disjoint Set by Ahmad El-Sisy https://github.com/AhmedElsisy

const int N = 100 + 3;
int sz[N] , p[N];

void init(){
    iota(p , p + N , 0); // 0 1 2 3 .. N
    fill(sz , sz + N , 1);
}

int f(int u){
    return p[u] = (p[u] == u ? u : f(p[u])); ///path compression
}

bool merge(int u , int v){
    u = f(u);
    v = f(v);

    if(u == v)return false;

    if(sz[v] < sz[u])swap(u , v);

    p[u] = v;
    sz[v] += sz[u];
    return true;
}

///**************************************************************************************

 long long choose(long long n, long long k){
     if(!k) return 1;
     return n*choose(n-1,k-1)/k;
}

///**************************************************************************************

const int N = 1e3+1; ///1e4*1e4 integer matrix is 400 MB
long long choose[N][N];
void initpascal(){ /// Pascal's triangle for nChoosek problems
    for(int i=0; i<N; ++i) choose[i][0] = choose[i][i] = 1;
    for(int i=2; i<N; ++i) for(int j=1; j<i; ++j) choose[i][j] = choose[i-1][j] + choose[i-1][j-1];
}
