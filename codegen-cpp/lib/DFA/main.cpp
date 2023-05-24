//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: main.cpp
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 24-May-2023 19:50:41
//

/*************************************************************************/
/* This automatically generated example C++ main file shows how to call  */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

// Include Files
#include "main.h"
#include "DFA.h"
#include "DFA_terminate.h"
#include "coder_array.h"
#include "rt_nonfinite.h"

// Function Declarations
static void argInit_500x1_real_T(double result[500]);

static double argInit_real_T();

// Function Definitions
//
// Arguments    : double result[500]
// Return Type  : void
//
static void argInit_500x1_real_T(double result[500])
{
  // Loop over the array to initialize each element.
  for (int idx0{0}; idx0 < 500; idx0++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx0] = argInit_real_T();
  }
}

//
// Arguments    : void
// Return Type  : double
//
static double argInit_real_T()
{
  return 0.0;
}

//
// Arguments    : int argc
//                char **argv
// Return Type  : int
//
int main(int, char **)
{
  // The initialize function is being called automatically from your entry-point
  // function. So, a call to initialize is not included here. Invoke the
  // entry-point functions.
  // You can call entry-point functions multiple times.
  main_DFA();
  // Terminate the application.
  // You do not need to do this more than one time.
  DFA_terminate();
  return 0;
}

//
// Arguments    : void
// Return Type  : void
//
void main_DFA()
{
  coder::array<double, 2U> dfa_out;
  double dv[500];
  double alpha;
  double scmin = 4;
  double scmax = 125;
  double scres = 20;
  // Initialize function 'DFA' input arguments.
  // Initialize function input argument 'data'.
  // scmin_tmp = argInit_real_T();
  // // Call the entry-point 'DFA'.
  // argInit_500x1_real_T(dv);
  // DFA(dv, scmin_tmp, scmin_tmp, scmin_tmp, &alpha, dfa_out);

  FILE *fp, *out;
  fp = fopen("../../../sample.txt", "r");
  for (int i = 0; i < 500; i++) {
    fscanf(fp, "%lf", &dv[i]);
  }

  DFA(dv, scmin, scmax, scres, &alpha, dfa_out);
  fclose(fp);

  printf("alpha = %lf\n", alpha);
  printf("dfa_out = %lf\n", dfa_out.at(0, 0));
  out = fopen("../../../dfa_out.txt", "w");
  // fclose(out);
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 3; j++) {
      fprintf(out, "%lf ", dfa_out.at(i, j));
    }
    fprintf(out, "\n");
  }
  fclose(out);
}

//
// File trailer for main.cpp
//
// [EOF]
//
