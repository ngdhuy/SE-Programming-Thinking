//
//  Created by NDHuy at 11/04/2020
//  Copyright 2020 by SEstudio
//  Enter one day (day, month, year)
//  Calculate and print the next day
//

#include <stdio.h>

int main()
{
    int day; 
    int month; 
    int year;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    // Check input
    if((day > 0 && day <= 31) && (month > 0 && month < 13) && year > 0)
    {

        switch (month)
        {
            case 2:
                // Check Leap year
                if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
                {
                    if(day == 28)
                    {
                        day = 29;
                    }
                    else
                    {
                        if(day > 28)
                        {
                            day = 1;
                            month++;
                        }
                        else
                        {
                            day++;
                        }
                    }
                }
                else
                {
                    if(day == 28)
                    {
                        day = 1;
                        month++;
                    }
                    else
                    {
                        day++;
                    }
                    
                }
                break;

            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
                if(day == 31)
                {
                    day = 1;
                    month++;
                }
                else
                {
                    day++;
                }
                break;

            case 4:
            case 6:
            case 9:
            case 11:
                if(day == 30)
                {
                    day = 1; 
                    month++;
                }
                else
                {
                    day++;
                }
                
                break;

            case 12:
                if(day == 31)
                {
                    day = 1;
                    month = 1;
                    year = year + 1;
                }
                else
                {
                    day++;
                }
                break;
            
            default:
                break;
        }
        
        printf("The next day: %d/%d/%d \n", day, month, year);
    }
    else
    {
        printf("Invalid date %d/%d/%d \n", day, month, year);
    }

    return 0;
}