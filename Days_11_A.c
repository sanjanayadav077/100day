#include<stdio.h>
int main(){
    int month;
    printf("enter your month name");
    scanf("%d",&month);

    switch(month){
        case 1:
        printf(" jan-total 31 days\n");
        break;
        case 2:
        printf(" feb-total 28 days\n");
        break;
        case 3:
        printf("march-total 31 days\n");
        break;
        case 4:
        printf(" aprail-total 30 days\n");
        break;
        case 5:
        printf("may-total 31 days\n");
        break;
        case 6:
        printf("june-total 30 days\n");
        break;
        case 7:
        printf("july-total 31days\n");
        break;
        case 8:
        printf("august-total 31 days\n");
        break;
        case 9:
        printf("sep-total 30 days\n");
        break;
        case 10:
        printf("oct-total 31 dyas\n");
        break;
        case 11:
        printf("nov-total 30 days\n");
        break;
        case 12:
        printf("dec-total 31 days\n");
        break;
        default:
        printf("you have entered wrong month");
        return 0;
    }
}