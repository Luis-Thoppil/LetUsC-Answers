#include <stdio.h>

int main() {
    int i = 3;
    printf("Address of i: %p\nValue of i: %d\nPointer to address of i: %d\n\nNote the address is 64 bit because this is running on a 64 bit system. This is true for MY system, will be diff if ran on a 32 or 16 bit sys!", &i, i, *(&i));
}