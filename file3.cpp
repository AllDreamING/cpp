#include<iostream>
int main()
{
    //指针与const
    /*
    const char * a              指向 const char 的 指针
    char const * a              同上
    char * const a              指向 char 的 const 指针
    const char * const a        指向 const char 的 const 指针
    */
   int a = 10;
   const int b = 20;
   const int * p1;
   //*p1 = 10;  可以不用初始化，但无法通过指针修改值
    p1 = &a;
    //赋值对象也 可以是非ocnst
   std::cout<<*p1<<std::endl;
   //如果是非const值，可以通过其他方法修改
   a = 100;
   std::cout<<*p1<<std::endl;

   int * const p2 = &a;//const指针必须初始化
   std::cout<<*p2<<std::endl;
   a = 1000;
   std::cout<<*p2<<std::endl;
   //int * const p3 = &b;   p3指向的是  int ,无法用const常量赋值

}