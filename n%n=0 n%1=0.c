#include <stdio.h>
int main(){
    int a;
    do{
        long long number, n = 2, b = 0;
        printf("判断一个数是不是质数,请输入数字\n");
        scanf("%lld", &number);
        if(number < 0){
            number = -number;
        }
        
        for(n; n <= number; n = n + 1){
            if(number % n == 0){
                b = b + 1;
            }
            if(b > 1){
                printf("这个数不是质数\n");
                break;
            }
        }
        if(b == 1){
            printf("这个数是质数\n");
        }
        printf("调试: b = %lld\n", b);
         
        printf("输入1再玩一遍,输入任意整数退出\n");
        scanf("%d", &a);
    }while(a == 1);  

    return 0;
}