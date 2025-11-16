//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
int main() {
    char date[20];
    int dd, mm, yyyy;
    scanf("%s", date);
    sscanf(date, "%d/%d/%d", &dd, &mm, &yyyy);
    const char *month = "Apr";
    printf("%02d-%s-%d", dd, month, yyyy);
    return 0;
}
