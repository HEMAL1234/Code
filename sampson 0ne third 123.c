#include<stdio.h>

float function(float temp);

int main()
{
      int count = 0, value;
      float x[30], y[30], lower_boundary, upper_boundary, width, m = 0, n = 0, result;
      printf("\nEnter value for Lower Boundary:\t");
      scanf("%f", &lower_boundary);
      printf("\nEnter value for Upper Boundary:\t");
      scanf("%f", &upper_boundary);
      printf("\nEnter value for Width:\t");
      scanf("%f", &width);
      value = (upper_boundary - lower_boundary) / width;
      if(value % 2 == 1)
      {
            value = value + 1;
      }
      width = (upper_boundary - lower_boundary) / value;
      printf("\nModified Values:\n");
      printf("\nMid Point:\t%d\n", value);
      printf("\nWidth:\t%f\n", width);
      printf("\nY values\n");
      while(count <= value)
      {
            x[count] = lower_boundary + count * width;
            y[count] = function(x[count]);
            printf("\nY[%d] = %f", count, y[count]);
            count++;
      }
      count = 1;
      while(count < value)
      {
            if(count % 2 == 1)
            {
                  m = m + y[count];
            }
            else
            {
                  n = n + y[count];
            }
            count++;
      }
      result = width / 3 * (y[0] + y[value] + 4 * m + 2 * n);
      printf("\n\nSimpson's Rule Integration:\t%f\n", result);
      return 0;
}

float function(float temp)
{
      return(1 / (1 + temp));
}
