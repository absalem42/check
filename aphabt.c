#include<unistd.h>

int main(void)
{
    write(1,"hello",5);
    write(1,"\n",1);
}