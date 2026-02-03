/* YOU MUST MODIFY THIS FILE */
// Read "hw3.h" to learn about the two data types: `Range` and `RangeAnswer`

#include "hw3.h"

double integrate1(Range rng)
{
  double lower = rng.lowerlimit;
  double upper = rng.upperlimit;
  int n = rng.intervals;

  double width = (upper - lower) / n;
  double sum = 0;
  for (int i = 0; i < n; i++) {
      double x = lower + i * width;
      sum += func(x); // Assuming func is defined elsewhere
  }
  
  /* Fill in for Part 1 */
  // calculate the numerical integration of the function func
  // based on the three attributes (`lowerlimit`, `upperlimit`, and `intervals`) of the type `Range`.
  // the return value of function `integrate1` should be the numerical integration (return type is double)  
  return width * sum;
}

void integrate2(RangeAnswer * rngans)
{
  Range rng = rngans->rng;
  double result = integrate1(rng);
  rngans->answer = result;
  /* Fill in for Part 2 */
  // run `integrate1` function
  // take the return value from `integrate1` function 
  // and assign it to attribute `answer` of the type `RangeAnswer`
 
}
