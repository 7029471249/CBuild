#include "test.h"
int main()
{
    fun();
    fun1();
    fun2();
    fun3();
    fun4();
    fun5();
    fun6();
}
int fun()
{
    int arr[2] = {1 , 2};
    expect(1 , arr[0]);
    expect(2 , arr[1]);
}
int fun1()
{
    int arr[2*2];
    int *ptr = arr;
    arr[2] = 4;
    expect(4 , arr[2]);
}
int fun2()
{
    int arr[2][2] = {1 ,2 , 3 ,4 , 5 , 6 ,7, 8 ,9};
    int *ptr = arr;
    expect(5 , arr[1][2]);
    expect(8 , arr[2][1]);

}
int fun3()
{
    int arr[2][2][2] = {{1 ,2 , 3},
                        {4 , 5 , 6},
                        {7, 8 ,9}};
    int *ptr = a;
    expect(5 , arr[1][2]);
    expect(8 , arr[2][1]);
}
int fun4()
{
    int arr[2][2];
    int *ptr = arr;
    *ptr = 1000;
    expect (1000 , *ptr);

}
int fun5()
{
    int arr[2][2];
    int *ptr = arr + 1;
    *ptr = 1000;
    int *qtr = arr;
    *ptr = 32;
    expect(3200, *(qtr + 3));
}
int fun6()
{
    int arr[6][6];
    int *ptr = arr;
    *(*arr + 10) + 5) = 360;
    *(*arr + 27) + 3) = 38;
    expect(360 , *(ptr + 15));
    expect(38 , *(ptr + 30)); 
}