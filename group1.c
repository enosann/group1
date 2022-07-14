#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxN 50 //保存できる最大工程数
#define inf 1000000

void deploy(int *vert, int num); //手順1,整数から配置の配列を求める
int horner(int A, int m);        //手順3,配列を数字に変換

struct List
{
    int key;
    int dist;
    int parent;
    int next;
};

int main(void)
{
    struct List L[maxN];
    int A[4];    //ハッシュ知を格納する配列
    int vert[9]; //配置を記憶する配列
    int v_s;     // 初期配置を格納する変数

    //初期配置を入力させる
    scanf("%d", v_s);
}

void deploy(int *vert, int num)
{
    int i, a;
    for (i = 0; i < 9 - 1; i++)
    {
        a = num / 10;
        vert[8 - i] = a;
    }
}
