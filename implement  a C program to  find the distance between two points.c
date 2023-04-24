#include<stdio.h>
#include<math.h>
int main()

{

  float x1,y1,x2,y2,distance;
  printf("Enter the 1st point(x1,y1)=");
  scanf("%f %f",&x1,&y1);

  printf("Enter the 2nd point(x2,y2)=");
  scanf("%f %f",&x2,&y2);

    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("\n The distance between(%0.0f,%0.0f) and (%0.0f,%0.0f)=%f0.2",x1,y1,x2,y2,distance);


}
