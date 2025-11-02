//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    char date[20];
    int day, month, year;

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);

    // Extract day, month, and year manually
    day = (date[0] - '0') * 10 + (date[1] - '0');
    month = (date[3] - '0') * 10 + (date[4] - '0');
    year = (date[6] - '0') * 1000 + (date[7] - '0') * 100 + (date[8] - '0') * 10 + (date[9] - '0');

    // Array of month abbreviations
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
     if (month >= 1 && month <= 12) {
        printf("Formatted date: %02d-%s-%d\n", day, months[month - 1], year);
    } else {
        printf("Invalid month!\n");
    }

    return 0;
}