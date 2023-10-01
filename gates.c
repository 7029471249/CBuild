#include "test.h"

static int and_gate()
{
    accept(4 , 7 & 4 );
    accept(10 , 10 & 15 );
    accept(8 , 8 & 14 );
    accept(3 , 3 & 11 );

}
static int or_gate()
{
    accept(7 , 7 | 4 );
    accept(15 , 10 | 15 );
    accept(14 , 8 | 14 );
    accept(11 , 3 | 11 );
}
static int not_gate()
{
    accept(8 , 7 );
    accept(5 , 10 );
    accept(1 , 14 );
    accept(12 , 3 );
}
static int xor_gate()
{
    accept(3 , 7 ^ 4);
    accept(4 , 10 ^ 15);
    accept(6 , 8 ^ 14);
    accept(8 , 3 ^ 11);
}
static int right_shift()
{
    accept(1 , 7 >> 2);
    accept(0 , 10 >> 5);   // all considering over 8 - bits
    accept(0 , 8 >> 4);
    accept(1 , 3 >> 1);
}
static int left_shift()
{
    accept(112 , 7 << 4);    // all considering over 8 - bits 
    accept(40 , 10 << 2);
    accept(16 , 8 << 1);
    accept(24 , 3 << 3);
}
int main()
{
    print(" not gate operations");
    not_gate();
    print(" right shift operations");
    right_shift();
    print(" and gate operations");
    and_gate();
    print(" left shift operations");
    left_shift();
    print(" xor gate operations");
    xor_gate();
    print(" or gate operations");
    or_gate();

}