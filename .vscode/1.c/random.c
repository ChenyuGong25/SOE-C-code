#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int n, sum = 0;

    printf("请输入要生成的个数N：");
    scanf("%d", &n);

    srand(time(0));   // 播种，每次运行序列不同

    printf("生成的 %d 个 1~100 随机数为：\n", n);
    for(int i=0; i<n; i++){
        int num = 1 + rand() % 100;  // 1~100
        printf("%d ", num);
        sum += num;                  // 累加
    }

    printf("\n总和 sum = %d\n", sum);
    return 0;
}