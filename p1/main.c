#include <stdio.h>

int main() {

    int n,m,i=0;
    scanf("%d",&n); //  먼저 기준이 되는 정답 숫자(n)를 입력받음
    
    do{// 2. do-while 루프: 조건과 상관없이 일단 한 번은 실행
        scanf("%d",&m);// 비교할 숫자(m)를 입력
        if(m>n){// 입력한 숫자가 기준 숫자보다 클 경우
            printf("%d>?\n",m);
        }
        else if(m<n){// 입력한 숫자가 기준 숫자보다 작을 경우
            printf("%d<?\n",m);
        }
        else{// 입력한 숫자와 기준 숫자가 같을 경우 (정답)
            printf("%d==?\n",m);
        }
        i++;// 반복할 때마다 시도 횟수를 1씩 증가
    } while(n<m||n>m);// 3. n과 m이 다를 때(n < m 또는 n > m) 계속 반복 즉, n == m이 되어 정답을 맞히면 루프를 종료함
    printf("%d",i);// 4. 총 시도한 횟수(i)를 출력험
    return 0;
}
