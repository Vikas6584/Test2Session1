#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter coordinates of point1\n");
  scanf("%f%f", x1, y1);
  printf("Enter coordinates of point2\n");
  scanf("%f%f", x2, y2);
}

void find_distance(float x1, float y1, float x2, float y2, float *d)
{
  *d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

void output(float x1, float y1, float x2, float y2, float d)
{
  printf("The distance between %f,%f and %f,%f is %f\n",x1,y1,x2,y2,d);
}

int main()
{
  float a1, a2, b1, b2, res;
  input(&a1,&b1,&a2,&b2);
  find_distance(a1,b1,a2,b2,&res);
  output(a1,b1,a2,b2,res);
  return 0;
}