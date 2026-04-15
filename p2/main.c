#include <stdio.h>

int main() {

    int a,count1=0,count2=0,max1=0,max2=0;
    scanf("%d",&a);
    char b;
    
    
    for(int i=0;i<a;i++){
        scanf("%c",&b);
        if('a'<=b && b<='z'){
            count1++;
            count2=0;
            
        }
        else if('0'<=b||b<='9'){
            count2++;
            count1=0;
        }
        else {
            count2=0;
            count1=0;
        }
        if (count1 > max1) max1 = count1;
        if (count2 > max2) max2 = count2;
    }
    printf("%d\n",max1);
    printf("%d\n",max2);    
    
    return 0;
}
