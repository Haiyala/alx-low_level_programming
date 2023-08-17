#include "main.h"

/**
 * convert_day - converts day of month to day of year, without accounting
 * for leap year
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */

int convert_day(int month, int day)
{
    int cumulativeDays[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

    return cumulativeDays[month - 1] + day;
}
