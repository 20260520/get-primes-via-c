#include <stdio.h>
long long targetindex = 100001, maxnumber, prime[100001], currentindex = 1; 
long long currentnumber = 2, countingindex;
void nextenumber(){
    currentnumber = currentnumber + 2;
}
char ifprime(){
    char primestate = 1;
    countingindex = 1;
    for( ; prime[countingindex] * 3 <= currentnumber; ){
        if(currentnumber % prime[countingindex]){
        }else{
            primestate = 0;
        }
        countingindex = countingindex + 1;
    }
    return primestate;
}
void writeinto(){
    prime[currentindex] = currentnumber;
}
int main(){
    int mode = 0, a;
    do{
        printf("寻找xxx以内的质数,如果要寻找前xxx个质数请输入0\n");
        scanf("%lld", &maxnumber);
        if(maxnumber == 0){
            printf("寻找前xxx个质数\n");
            scanf("%lld", &targetindex);
            printf("前%lld个质数是:\n", targetindex);
            maxnumber = 1299710;
            mode = 1;
        }else{
            printf("%lld以内的质数有:\n", maxnumber);
        }
        if(targetindex < 1 || maxnumber < 2){
            goto end;
        }
        writeinto();
        currentnumber = currentnumber - 1;
        if(mode == 1){
            //寻找前xxx个质数
            for(; currentindex <= targetindex - 1;){
                nextenumber();
                if(ifprime()){
                    currentindex = currentindex + 1;
                    writeinto();
                }
            }
        }else if(mode == 0){
            //寻找XXX以内的质数
            for(; currentnumber <= maxnumber;){
                nextenumber();
                if(ifprime()){
                    currentindex = currentindex + 1;
                    writeinto();
                }
            }
            currentindex = currentindex - 1;
        }
        targetindex = currentindex;
        currentindex = 0;
        while(currentindex <= targetindex){
            printf("第%lld个质数是%lld\n", currentindex, prime[currentindex]);
            currentindex = currentindex + 1;
        }
        printf("共%lld个质数\n", targetindex);
        end:
        printf("输入1再玩一遍,输入0退出\n");
        scanf("%d", &a);
    }while(a == 1);  

    return 0;
}