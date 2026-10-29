#include <stdio.h>
int main() {
    char ch, next;
    int A;
    // Get a character from the keyboard
    scanf(" %c", &ch);
    // Write your code here
    if(ch == 'z'){
        next = 'a';
    }else if(ch == 'Z'){
        next = 'A';
    }else{
        next = ch + 1;
    }
    printf("The ASCII code of the character is: %d\n", ch);
    printf("The next character is: %c\n", next);
    return 0;
}