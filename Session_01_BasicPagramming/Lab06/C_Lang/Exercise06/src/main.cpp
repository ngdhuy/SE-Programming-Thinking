//
//  Created by NDHuy on 26/08/2020
//  Copyright 2020 by SEstudio
//  Struct
//

#include <stdio.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
} Point;

typedef struct
{
    Point lowerLeft; 
    Point upperRight;
} Rect;

void PointShow(const Point p);
double PointDist(const Point p_1, const Point p_2);
int PointEqual(const Point p_1, const Point p_2);
double CalArea(const Rect rect);
int IsInsideRect(const Point p, const Rect rect);
int IsRectInsideRect(const Rect rect_1, const Rect rect_2);
void Farthest(const Point arrPoint[], const int n);

int main()
{
    Point p = {3, 5};
    PointShow(p);

    Point p_1 = {3, 5};
    PointShow(p_1);
    printf("Distance = %.6lf \n", PointDist(p, p_1));
    if(PointEqual(p, p_1) == 1)
        printf("P == P_1\n");
    else
        printf("P != P_1\n");

    printf("\n");
    return 0;
}

void PointShow(const Point p)
{
    printf("P = (%d, %d)\n", p.x, p.y);
}

double PointDist(const Point p_1, const Point p_2)
{
    float dist = sqrt(((p_1.x - p_2.x) * (p_1.x - p_2.x)) + ((p_1.y - p_2.y) * (p_1.y - p_2.y)));
    return dist;
}

int PointEqual(const Point p_1, const Point p_2)
{
    float dist = PointDist(p_1, p_2);
    if(dist < 0.000001)
        return 1; 
    else
        return 0;
}

double CalArea(const Rect rect)
{
    Point upperLeft;
    Point lowerRight;

    upperLeft.x = rect.lowerLeft.x;
    upperLeft.y = rect.upperRight.y;

    lowerRight.x = rect.upperRight.x;
    lowerRight.y = rect.lowerLeft.y;

    double a = PointDist(upperLeft, rect.upperRight);
    double b = PointDist(lowerRight, rect.lowerLeft);

    return a * b;
}

int IsInsideRect(const Point p, const Rect rect)
{
    if(rect.lowerLeft.x < p.x && p.x < rect.upperRight.x && rect.upperRight.y < p.y && p.y < rect.lowerLeft.y)
        return 1;
    else
        return 0;
}

int IsRectInsideRect(const Rect rect_1, const Rect rect_2)
{
    if(IsInsideRect(rect_1.lowerLeft, rect_2) == 1 && IsInsideRect(rect_1.upperRight, rect_2) == 1)
        return 1;
    else
        return 0;
}

void Farthest(const Point arrPoint[], const int n)
{
    double dist_max = -1.0; 
    Point a;
    Point b;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            double dist = PointDist(arrPoint[i], arrPoint[j]);
            if(dist > dist_max)
            {
                dist_max = dist;
                a = arrPoint[i];
                b = arrPoint[j]; 
            }
        }
    }

    printf("(%d, %d) and (%d, %d) is farthest with %lf", a.x, a.y, b.x, b.y, dist_max);
}