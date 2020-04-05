//
//  Created by NDHuy on 05/04/2020
//  Copyright 2020 by SEstudio
//  Input a integer number. After that print character of number
//

#include <stdio.h>

int main()
{
    int num; 
    printf("Input a integer number: ");
    scanf("%d", &num);

    switch(num)
    {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4: 
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        default:
            printf("Invalid character of number\n");
    }

    return 0;
}