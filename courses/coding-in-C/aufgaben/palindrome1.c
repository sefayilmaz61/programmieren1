#include <stdio.h>

void input_string(char *str)
{
    str[1] = 'c';
}

int main(void){

    char phrase[] = "Curly Bird catches the worm";
    char *ptr = phrase;

    printf("String: %s\n", phrase);
    printf("String via Pointer: %s\n", ptr);

    ptr[0] = 'E';
    ptr[1] = 'a';

    printf("String: %s\n", phrase);
    printf("String via Pointer: %s\n", ptr);

    char sentence[] = "AAtions speak louder than words";
    input_string(sentence);

    input_string("AActions speak louder than words");

    printf("After function call: %s\n", sentence);


    return 0;
}