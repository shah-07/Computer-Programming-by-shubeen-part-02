#include <stdio.h>

int main()
{
    char word;
    word = getchar();
    if(word <= 9 && word >= 0) {
        word = word + 48;
    }

    if(word <= 57 && word >= 48) {
        printf("1");
    }
    else {
        printf("0");
    }

}
