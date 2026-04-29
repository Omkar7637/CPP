#include<stdio.h>

void fun(int var,int var1)
{
    int size=&var1-&var;
    printf("var is %p\n",&var);
    printf("var1 is %p\n",&var1);   
    printf("size is %d\n",size);
}

int main() {

    int var=10;
    fun(var,var);

    return 0;
}
