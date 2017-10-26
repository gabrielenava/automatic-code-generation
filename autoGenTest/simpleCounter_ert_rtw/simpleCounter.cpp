//
// File: simpleCounter.cpp
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
#include "simpleCounter.h"
#include "simpleCounter_private.h"

// Model step function
void simpleCounter_step(RT_MODEL_simpleCounter_T *const simpleCounter_M)
{
  // MATLAB Function 'MATLAB Function': '<S1>:1'
  //  just check if sine_t = amplitude. Returns 0 otherwise.
  // '<S1>:1:4'
  // '<S1>:1:5'

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  simpleCounter_M->Timing.t[0] =
    (++simpleCounter_M->Timing.clockTick0) * simpleCounter_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.01s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.01, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    simpleCounter_M->Timing.clockTick1++;
  }

  UNUSED_PARAMETER(simpleCounter_M);
}

// Model initialize function
void simpleCounter_initialize(RT_MODEL_simpleCounter_T *const simpleCounter_M)
{
  // Registration code
  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&simpleCounter_M->solverInfo,
                          &simpleCounter_M->Timing.simTimeStep);
    rtsiSetTPtr(&simpleCounter_M->solverInfo, &rtmGetTPtr(simpleCounter_M));
    rtsiSetStepSizePtr(&simpleCounter_M->solverInfo,
                       &simpleCounter_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&simpleCounter_M->solverInfo, ((const char_T **)
      (&rtmGetErrorStatus(simpleCounter_M))));
    rtsiSetRTModelPtr(&simpleCounter_M->solverInfo, simpleCounter_M);
  }

  rtsiSetSimTimeStep(&simpleCounter_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&simpleCounter_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(simpleCounter_M, &simpleCounter_M->Timing.tArray[0]);
  simpleCounter_M->Timing.stepSize0 = 0.01;
  UNUSED_PARAMETER(simpleCounter_M);
}

// Model terminate function
void simpleCounter_terminate(RT_MODEL_simpleCounter_T *const simpleCounter_M)
{
  // (no terminate code required)
  UNUSED_PARAMETER(simpleCounter_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
