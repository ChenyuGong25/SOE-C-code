#include <stdio.h>
#include <stdbool.h>
bool prime(int a){
    if(a == 2){
        return true;
    }
    else{
        for(int i = 2; i < a; i++){
            if(a%i == 0){
                return false;
            }
        }
        return true;
    }
}
int max(int n){
    if(n < 2){
        printf("Input should be larger than 1.");
        return -1;
    }
    else{
        for(int i = n; i > 1; i--){
            if(prime(i)){
                return i;
            }
        }
        return -1;
    }
}
int main(){
    int n, p;
    scanf("%d", &n);
    p = max(n);
    if (n > 1){
        printf("max prime is: %d", p);
    }
    return 0;
}