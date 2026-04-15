#include <stdio.h>

int main() {

    int n,m,i=0;
    scanf("%d",&n);
    
    do{
        scanf("%d",&m);
        if(m>n){
            printf("%d>?\n",m);
        }
        else if(m<n){
            printf("%d<?\n",m);
        }
        else{
            printf("%d==?\n",m);
        }
        i++;
    } while(n<m||n>m);
    printf("%d",i);
    return 0;
}
