#include <stdio.h>
#include <math.h>    //sin(), cos()
#define RAD(X)    ((X) * (3.1415926 / 180))
#define EATLINE   while(getchar() != '\n') continue
typedef struct Polar_coor
{
    double r;
    double angle;
}POLAR;
typedef struct Rectan_coor
{
    double x;
    double y;
}RECTAN;
void InitStruct(POLAR*polar,RECTAN*rectan);
void Get_P(POLAR*polar);
RECTAN Change(POLAR * polar);
int main()
{
    POLAR polar;
    RECTAN rectan;
    InitStruct(&polar, &rectan);
    Get_P(&polar);
    rectan = CHA(&polar);
    printf("That is (%.2f, %.2f).", rectan.x, rectan.y);
    return 0;
}
void InitStruct(POLAR*polar,RECTAN*rectan)
{
    polar->r = 0;
    polar->angle = 0;
    rectan->x = 0;
    rectan->x = 0;
}
void Get_P(POLAR * polar)
{
    double r=0,ang= 0;
    printf("Enter the coor of a polar coor system: ");
    while (scanf_s("%lf %lf",&r,&ang)!=2||r<=0||ang==0)
    {
        printf("Input error! Try again:");
        EATLINE;    //宏
        continue;
    }
    polar->r=r;
    polar->angle=ang;
}
RECTAN CHA(POLAR * polar)
{
    double rad = RAD(polar->angle);
    RECTAN rectan;
    rectan.x = polar->r*cos(rad);
    rectan.y = polar->r*sin(rad);
    return rectan;
}
