#include <stdio.h>
int multiply (int z, int y){   // z、y：形式参数（形参），函数内部私有局部变量
    int x;
    z = z + 1;
    x = z * y;
    return x;
}

int main(void){
    int z = 5, y;
    y = multiply(z,25);   // z、25：实际参数（实参）
    printf("%d",y);
    return 0;
}
