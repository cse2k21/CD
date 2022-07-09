#include<stdio.h>
#include<ctype.h>
void main()
{
    int state = 1,ip = 0;
    char input[10];
    printf("\nEnter the input ending with $: \n");
    scanf("%s",input);
    while(state == 1 || state == 2){
        switch (state)
        {
        case 1 :
            if(isalpha(input[ip])||input[ip] == '_'){
                ip++;
                state = 2;
            }
            else
            state = 4;
            break;
        case 2 :
            if(isalpha(input[ip]) || isdigit(input[ip]) || input[ip] == '_'){
                ip++;
            }
            else if(input[ip] == '$')
                state = 3;
            else
                state = 4;
            break;
        default:
            break;
        }
    }
    if(state == 3)
    printf("\nThe given identifier is valid");
    else
    printf("\nThe given identifier is invalid");
}
