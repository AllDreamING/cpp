#include"iostream"
#include"file1.cpp"
using namespace std;

int main()
{
    //文件之间的访问需要加上extern
    extern const int a ;
    extern int b ;
    cout<<a<<endl;
    cout<<b<<endl;

    // return 0;
}