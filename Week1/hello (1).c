#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What is your name?\n");//takes an input
    printf("hello, %s\n", name);//prompt input

}