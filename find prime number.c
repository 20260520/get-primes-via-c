#include <stdio.h>
int main(){
    int a;
    do{
        long long number, n = 2, b = 0, c = 0;
        printf("寻找xxx以内的质数,请输入数字\n");
        scanf("%lld", &number);
        printf("%lld以内的质数有:\n", number);

        for(number; number > 1; number = number - 1){
            b = 0, n = 2;
            for(n; n < number; n = n + 1){     
                if(number % n == 0){
                    b = b + 1;
                }
                if(b > 0){
                    break;
                }
            }
            if(b == 0){
                printf("%lld ", number);
                c = c + 1;
            }
        }
        printf("\n共%lld个质数\n", c);
        printf("输入1再玩一遍,输入任意整数退出\n");
        scanf("%d", &a);
    }while(a == 1);  

    return 0;
}