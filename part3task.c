#include <stdio.h>
int square(int x) 
{
    return x * x;
}

int calculate_score(int x1, int x2, int x3) 
{
    int p = (x1 + x2 + x3) / 3;
    int f = (square(p - x1) + square(p - x2) + square(p - x3)) / 3;
    int zh = 3 * p - f / 3;
    return zh;
}

void sort_and_print(int zh1, int zh2, int zh3) 
{
    if (zh1 >= zh2 && zh1 >= zh3) {
        if (zh2 >= zh3) {
            printf("综合排名：小明 > 小强 > 小林\n");
        } else {
            printf("综合排名：小明 > 小林 > 小强\n");
        }
    } else if (zh2 >= zh1 && zh2 >= zh3) {
        if (zh1 >= zh3) {
            printf("综合排名：小强 > 小明 > 小林\n");
        } else {
            printf("综合排名：小强 > 小林 > 小明\n");
        }
    } else {
        if (zh1 >= zh2) {
            printf("综合排名：小林 > 小明 > 小强\n");
        } else {
            printf("综合排名：小林 > 小强 > 小明\n");
        }
    }
}

int main() 
{
    int x1, x2, x3;
    int y1, y2, y3;
    int z1, z2, z3;

    printf("请输入小明的三项成绩（A B C，空格分隔）：");
    scanf("%d %d %d", &x1, &x2, &x3);

    printf("请输入小强的三项成绩（A B C，空格分隔）：");
    scanf("%d %d %d", &y1, &y2, &y3);

    printf("请输入小林的三项成绩（A B C，空格分隔）：");
    scanf("%d %d %d", &z1, &z2, &z3);

    int zh1 = calculate_score(x1, x2, x3);
    int zh2 = calculate_score(y1, y2, y3);
    int zh3 = calculate_score(z1, z2, z3);

    sort_and_print(zh1, zh2, zh3);

    return 0;
}