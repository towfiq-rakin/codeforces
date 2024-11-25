#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    if(n %2 == 0){
        printf("Enter an even number\n");
        return 1;
    }
    // First row
    for(int i = 1; i<=n; i++){
        printf("@");
    }
    printf("\n");
    
    /* iterate over the 2nd to 2nd last row
    as we have already printed the first and last row */
    for(int i = 2; i <= n-1; i++){
        printf("@"); // to print @ at the start of the row
        for(int j = 2; j <= n-1; j++){
            if(j == i || j == (n-i)+1)
                printf("@");
            else
                printf(" ");
        }
        printf("@"); // to print @ at the end of the row
        printf("\n");
    }
    // Last row
    for(int i = 1; i<=n; i++){
        printf("@");
    }
    printf("\n");
}
