#include <stdio.h>
int main(){
    int a;
    do{
        long long n = 2, b = 0, c = 0, d = 2, e = 0, mode = 0, g = 0;
        unsigned long long number;
        printf("寻找xxx以内的质数,如果要寻找前xxx个质数请输入0\n");
        scanf("%llu", &number);
        if(number == 0){
            printf("寻找前xxx个质数\n");
            scanf("%lld", &e);
            printf("前%lld个质数是:\n", e);
            number = 18446744073709551615ULL;
            mode = 1;
        }else{
            printf("%llu以内的质数有:\n", number);
        }    
        for(d; d <= number; d = d + 1){
            b = 0, n = 2;
            for(n; n <= d / 2; n = n + 1){     
                if(d % n == 0){
                    b = b + 1;
                }
                if(b > 0){
                    break;
                }
            }
            if(b == 0){
                printf("%lld ", d);
                c = c + 1;
            }
            if(mode == 1){
                if(c >= e){
                    break;
                }  
            }
        }
        printf("\n共%lld个质数\n", c);
        printf("输入1再玩一遍,输入任意整数退出\n");
        scanf("%d", &a);
    }while(a == 1);  

    return 0;
}