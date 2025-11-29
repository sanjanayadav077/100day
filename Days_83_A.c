//Create an enum for months and print how many days each month has.
#include <stdio.h>
typedef enum {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
} Month;
int main() {
    int days[] = {
        0,   // dummy (to match month numbers starting from 1)
        31,  // JANUARY
        28,  // FEBRUARY (non-leap year)
        31,  // MARCH
        30,  // APRIL
        31,  // MAY
        30,  // JUNE
        31,  // JULY
        31,  // AUGUST
        30,  // SEPTEMBER
        31,  // OCTOBER
        30,  // NOVEMBER
        31
    };
    const char *names[] = {
        "NONE",
        "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE",
        "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"
    };
    for (Month m = JANUARY; m <= DECEMBER; m++) {
        printf("%s has %d days\n", names[m], days[m]);
    }
    return 0;
}