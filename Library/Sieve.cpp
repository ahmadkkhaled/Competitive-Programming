const int S = 2e7+1;
bool prime[S];

int main(){
    fill(prime, prime+S, true);
    prime[1] = prime[0] =  false;

    for(int i=2; i*i<=S; ++i){
        if(prime[i]){
            for(int j = 2; i*j<S; ++j) {
                prime[i * j] = false;
            }
        }
    }
}
