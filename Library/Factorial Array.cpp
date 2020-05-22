/**
 * O(n) pre-process
 * O(1) fetch
 */
long long factorial[S];
void gofact(int n){
    factorial[0] = 1;
    for(int i=1; i<=n; ++i) factorial[i] = (i * factorial[i-1]) % MOD;
}