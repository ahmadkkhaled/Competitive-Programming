/**
 * nCk
 * Complexity = O(n)
 */
long long choose(long long n, long long k){
    if(!k) return 1LL;
    return n*choose(n-1,k-1)/k;
}
/**
 * nCk
 * Complexity O(n^2)
 */
const int N = 1e3+1; ///1e8 (1e4*1e4) integer matrix is 400 MB
long long choose[N][N];
void initpascal(){
    for(int i=0; i<N; ++i)
        choose[i][0] = choose[i][i] = 1;
    for(int i=2; i<N; ++i)
        for(int j=1; j<i; ++j)
            choose[i][j] = choose[i-1][j]+choose[i-1][j-1];
}