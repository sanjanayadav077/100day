#include<stdio.h>
int main(){
    char ch;
    printf("enter your input");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z') {
        printf("%c it's a louwecase\n",ch);
    }
    else if (ch>='A' && ch<='Z') {
        printf("%c it's a uppercase\n",ch);
    }
    else if (ch>='0' && ch<='9') {
        printf("%c it's digit",ch);
    }
    else {
        printf("%c it's specal symbol\n",ch);
    }
    return 0;
}

