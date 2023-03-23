#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - take a date and  print how many days
 * left in the year, take a leap years in mind
 * @month: month in numbers
 * @day: days of the month
 * @year: how many years
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
			{
				day++
			}
		printf("day of the year: %d\n", day);
		printf("remaining days: %d\n", 366 - day);
	}
	{
		if (month == 2 && day == 60)
		{
			printf("invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("day of the year: %d\n", day);
			printf("remaining days: %d\n", 365 - day);
		}
	}


}
