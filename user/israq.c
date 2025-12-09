#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(){
    printf("Hello Talha!!\n");
    char buf[10];
    gets(buf, 9);

    // string to integer conversion -> atoi
    int num = atoi(buf);
    printf("You entered: %d\nCongrats\n", num);
    return 0;
}