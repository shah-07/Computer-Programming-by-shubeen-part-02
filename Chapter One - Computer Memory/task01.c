#include <stdio.h>

int main()
{
    char word;
    word = getchar();

    if(word <= '9' && word >= '0') {
        printf("0");
    }
    else {
        printf("1");
    }

}
