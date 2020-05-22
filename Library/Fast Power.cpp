long long fastpow(long long base, long long power){
    assert(power >= 0);
    if(power == 0) return 1;
    if(power%2==0){
        long long ret = fastpow(base, power/2);
        return (ret*ret);
    }
    return (base * fastpow(base, power-1));
}