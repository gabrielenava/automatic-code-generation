//
// File: ert_main.cpp
//
// Code generated for Simulink model 'simpleCounter'.
//
// Model version                  : 1.23
// Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
// C/C++ source code generated on : Thu Oct 26 14:17:48 2017
//
// Target selection: ert.tlc
// Embedded hardware selection: 32-bit Generic
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include <stddef.h>
#include <stdio.h>                     // This ert_main.c example uses printf/fflush 
#include "simpleCounter.h"             // Model's header file
#include "rtwtypes.h"

static RT_MODEL_simpleCounter_T simpleCounter_M_;
static RT_MODEL_simpleCounter_T *const simpleCounter_M = &simpleCounter_M_;// Real-time model 
static P_simpleCounter_T simpleCounter_P = {
  10.0,                                // Variable: amplitude
                                       //  Referenced by:
                                       //    '<Root>/MATLAB Function'
                                       //    '<Root>/Sine Wave'

  3.5,                                 // Variable: frequency
                                       //  Referenced by: '<Root>/Sine Wave'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<Root>/Sine Wave'

  0.0                                  // Expression: 0
                                       //  Referenced by: '<Root>/Sine Wave'

};                                     // Modifiable parameters

//
// Associating rt_OneStep with a real-time clock or interrupt service routine
// is what makes the generated code "real-time".  The function rt_OneStep is
// always associated with the base rate of the model.  Subrates are managed
// by the base rate from inside the generated code.  Enabling/disabling
// interrupts and floating point context switches are target specific.  This
// example code indicates where these should take place relative to executing
// the generated code step function.  Overrun behavior should be tailored to
// your application needs.  This example simply sets an error status in the
// real-time model and returns from rt_OneStep.
//
void rt_OneStep(RT_MODEL_simpleCounter_T *const simpleCounter_M)
{
  static boolean_T OverrunFlag = false;

  // Disable interrupts here

  // Check for overrun
  if (OverrunFlag) {
    rtmSetErrorStatus(simpleCounter_M, "Overrun");
    return;
  }

  OverrunFlag = true;

  // Save FPU context here (if necessary)
  // Re-enable timer or interrupt here
  // Set model inputs here

  // Step the model for base rate
  simpleCounter_step(simpleCounter_M);

  // Get model outputs here

  // Indicate task complete
  OverrunFlag = false;

  // Disable interrupts here
  // Restore FPU context here (if necessary)
  // Enable interrupts here
}

//
// The example "main" function illustrates what is required by your
// application code to initialize, execute, and terminate the generated code.
// Attaching rt_OneStep to a real-time clock is target specific.  This example
// illustates how you do this relative to initializing the model.
//
int_T main(int_T argc, const char *argv[])
{
  // Unused arguments
  (void)(argc);
  (void)(argv);

  // Pack model data into RTM
  simpleCounter_M->ModelData.defaultParam = &simpleCounter_P;

  // Initialize model
  simpleCounter_initialize(simpleCounter_M);

  // Attach rt_OneStep to a timer or interrupt service routine with
  //  period 0.01 seconds (the model's base sample time) here.  The
  //  call syntax for rt_OneStep is
  //
  //   rt_OneStep(simpleCounter_M);

  printf("Warning: The simulation will run forever. "
         "Generated ERT main won't simulate model step behavior. "
         "To change this behavior select the 'MAT-file logging' option.\n");
  fflush((NULL));
  while (rtmGetErrorStatus(simpleCounter_M) == (NULL)) {
    //  Perform other application tasks here
  }

  // Disable rt_OneStep() here

  // Terminate model
  simpleCounter_terminate(simpleCounter_M);
  return 0;
}

//
// File trailer for generated code.
//
// [EOF]
//
