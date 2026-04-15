#include <stdio.h>

int main() {

    int a,count1=0,count2=0,max1=0,max2=0;// a: 입력받을 문자의 개수
    // count1: 현재 연속된 소문자 수, count2: 현재 연속된 숫자 수
    // max1: 소문자 최대 연속 횟수, max2: 숫자 최대 연속 횟수
    scanf("%d",&a);// 1. 몇 개의 문자를 검사할지 입력
    char b;
    
    
    for(int i=0;i<a;i++){// 2. 입력받은 개수(a)만큼 반복합
        scanf(" %c",&b);// 공백을 포함하지 않고 문자 하나를 입력
        if('a'<=b && b<='z'){// 소문자라면: 소문자 카운트 증가, 숫자 카운트 초기화
            count1++;
            count2=0;
            
        }
        else if('0'<=b&&b<='9'){// 숫자라면: 숫자 카운트 증가, 소문자 카운트 초기화
            count2++;
            count1=0;
        }
        else {// 그 외(특수문자, 대문자 등)라면: 둘 다 초기화
            count2=0;
            count1=0;
        }
        if (count1>max1) max1=count1;//현재 카운트가 지금까지의 최대값(max)보다 크면 갱신
        if (count2>max2) max2=count2;
    }
    printf("%d\n",max1);// 최종적으로 구한 소문자와 숫자의 최대 연속 길이를 출력함
    printf("%d\n",max2);    
    
    return 0;
}
