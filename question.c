#include <stdio.h>
int main(void){
    // Your code here!
    int N,i,j;
    int count = 0;
    int c = 0;
    scanf("%d",&N);
    for (i = 1 ; i <= N ; i += 2){
        for (j = 1 ; j <= i ; j += 2){
            printf("%d %d\n",i,j);
            if (i % j == 0){
                count++;
                printf("%dの約数の数は%d\n",i,count);
            }
        }
        if (count == 8){
            c++;
            printf("Nの約数%d\n",c);
        }
        count = 0;
    }
    printf("%d",c);
}
