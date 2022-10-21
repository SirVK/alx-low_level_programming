#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - takes in a date
 * prints the rwaming days of the year
 * putting leap year into conaideration
 * @month: month in number form
 * @day: daus of a month
 * @year:year
 * Return:void
 */
void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0 || ((year % 100 == 0) && (year % 400 = 0)))
	{
		if (month >= 2 && day >= 60)
		{
			day++
		}

		printf(" Day of the year: %d\n", day);
		printf(" Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %2d/%2d/%04d\n", momth, day - 31, year);
		}
		else
		{
			printf(" Day of the year: d\n", day);
			printf(" Remaing days: %d\n", 365 - day);
		}
	}
}
