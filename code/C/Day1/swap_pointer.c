#include <stdio.h>

int main() {
    int a = 10;    // 定义一个整型变量 a
    int *p = &a;   // 定义一个指向整型的指针 p，并让它指向 a

    printf("a 的地址是：%p\n", &a);    // 输出 a 的地址（例如：0x7ffee23f2b3c）
    printf("p 存的地址是：%p\n", p);    // 输出 10，*p 表示“访问指针 p 指向的内容”
    printf("通过指针访问 a 的值：%d\n", *p);   

    *p = 50;
    printf("修改后 a 的值是：%d\n", a);

    return 0;
}
