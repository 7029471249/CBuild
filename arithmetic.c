 #include "test.h"
 int a = 10;
 int b = 4;
 static void cal()
{
    expect(0 , 0);
    expect(1 , 0 + 1);
    expect(2 , 1 + 1);
    expect(5 , 1 + 2 * 2);
    expect(5 , 2 + 3);
    expect(10 , 1 + 2 + 3 + 4);
    expect(15 , 1 + 2 + 3 + 4 + 5 || 1 + 2 * 5);
    expect(24 , 2 * 3 * 2 * 2);
    expect(28 , (1 * 2 + 2) * 7);
    expect(125 , 3125 / 5 / 5);
    expect(12 , 168 / 4 / 3 - 2);
    expect(7 , 689 % 11);

}
static void relation()
{
    expect(1 , 33 > 12);
    expect(1 , 12 < 33);
    expect(1 , 33 >= 12);
    expect(1 , 12 <= 33);
    expect(1 , 10 == 10);
    expect(1 , 1 != 10);
    expect(1, 20.0 < 35.0);
    expect(0 , 33 < 12);
    expect(0 , 12 > 33);
    expect(0 , 33 <= 12);
    expect(0 , 12 >= 33);
    expect(0 , 10 == 40);
    expect(1 , 11 != 10);
    expect(0 , 20.0 > 35.0);
    expect(0 , 0.0 > 0.0);

}
static void incr_decr()
{
    int i = 0;
    expect(0 , i++);
    expect(1 , i);
    expect(2 , ++i);
    expect(2 , i--);
    expect(0 , --i);
    expect(0 , i);
}
static void umary()
{
    int a = 187;
    expect(187 , +a);
    expect(-187 , -a);
}
static void comma_operator()
{
    expect(a , (a , b));
}
static void ternary_op()
{
    expect(a - b , (a > b) ? a - b : b - a );
    expect(b - a , (a < b) ? a - b : b - a );
    
}
int main()
{
    print(" some arithmrntic calculations : ");
    unary();
    relation();
    incr_decr();
    comma_operator();
    cal();
    ternary_op();
}