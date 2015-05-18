#include <stdio.h>
int isPrime(int n) {
    if (n <= 1) 
        return 0;
    if (n == 2) 
        return 1;
    if (n % 2 == 0)
        return 0;
    if (n < 9) 
        return 1;
    if (n % 3 == 0)
        return 0;
    int counter = 5;
    while ((counter * counter) <= n) {
        if (n % counter == 0)
            return 0;
        if (n % (counter + 2) == 0)
            return 0;
        counter += 6;
    }
    return 1;
}
int main()
{
    int N,i,j,n,m;
    scanf("%d",&N);
    for(i=0;i<N;++i){
        scanf("%d%d",&n,&m);
        for(j=n;j<=m;++j){
            if(isPrime(j))printf("%d\n",j);
        }
        printf("\n");
    }
    return 0;
}