#include<iostream>
using namespace std;

union myun
{
    struct{int x;int y;int z;}u;
    int m;
}a;

int main()
{
    a.u.x = 10;
    a.u.y = 20;
    a.u.z = 30;
    a.m = 40;//会覆盖掉第一个值

    printf("%d  %d  %d  %d",a.u.x,a.u.y,a.u.z,a.m);

    system("pause");
    return 0;
}