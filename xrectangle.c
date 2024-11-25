#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    if(n %2 == 0){
        printf("Enter an even number\n");
        return 1;
    }

    for(int i = 1; i<=n; i++){
        printf("@");
    }
    printf("\n");
    for(int i = 2; i <= n-1; i++){
        printf("@");
        for(int j = 2; j <= n-1; j++){
            if(j == i || j == n-i+1){
                printf("@");
            }
            else{
                printf(" ");
            }
        }
        printf("@");
        printf("\n");
    }

    for(int i = 1; i<=n; i++){
        printf("@");
    }
    printf("\n");
}