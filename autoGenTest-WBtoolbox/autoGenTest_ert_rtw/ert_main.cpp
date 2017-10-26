//
// File: ert_main.cpp
//
// Code generated for Simulink model 'autoGenTest'.
//
// Model version                  : 1.15
// Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
// C/C++ source code generated on : Thu Oct 26 13:58:58 2017
//
// Target selection: ert.tlc
// Embedded hardware selection: 32-bit Generic
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include <stddef.h>
#include <stdio.h>                     // This ert_main.c example uses printf/fflush 
#include "autoGenTest.h"               // Model's header file
#include "rtwtypes.h"

static RT_MODEL_autoGenTest_T autoGenTest_M_;
static RT_MODEL_autoGenTest_T *const autoGenTest_M = &autoGenTest_M_;// Real-time model 
static P_autoGenTest_T autoGenTest_P = {
  0.0,                                 // Mask Parameter: CompareToConstant_const
                                       //  Referenced by: '<S4>/Constant'


  //  Computed Parameter: SimulatorSynchronizer_P1_Size
  //  Referenced by: '<Root>/Simulator Synchronizer'

  { 1.0, 21.0 },

  //  Computed Parameter: SimulatorSynchronizer_P1
  //  Referenced by: '<Root>/Simulator Synchronizer'

  { 83.0, 105.0, 109.0, 117.0, 108.0, 97.0, 116.0, 111.0, 114.0, 83.0, 121.0,
    110.0, 99.0, 104.0, 114.0, 111.0, 110.0, 105.0, 122.0, 101.0, 114.0 },

  //  Computed Parameter: SimulatorSynchronizer_P2_Size
  //  Referenced by: '<Root>/Simulator Synchronizer'

  { 1.0, 1.0 },
  0.01,                                // Expression: period
                                       //  Referenced by: '<Root>/Simulator Synchronizer'


  //  Computed Parameter: SimulatorSynchronizer_P3_Size
  //  Referenced by: '<Root>/Simulator Synchronizer'

  { 1.0, 10.0 },

  //  Computed Parameter: SimulatorSynchronizer_P3
  //  Referenced by: '<Root>/Simulator Synchronizer'

  { 47.0, 99.0, 108.0, 111.0, 99.0, 107.0, 47.0, 114.0, 112.0, 99.0 },

  //  Computed Parameter: SimulatorSynchronizer_P4_Size
  //  Referenced by: '<Root>/Simulator Synchronizer'

  { 1.0, 23.0 },

  //  Computed Parameter: SimulatorSynchronizer_P4
  //  Referenced by: '<Root>/Simulator Synchronizer'

  { 47.0, 87.0, 66.0, 84.0, 95.0, 115.0, 121.0, 110.0, 99.0, 104.0, 114.0, 111.0,
    110.0, 105.0, 122.0, 101.0, 114.0, 47.0, 114.0, 112.0, 99.0, 58.0, 111.0 },

  //  Expression: ones(ROBOT_DOFS,1).*2
  //  Referenced by: '<Root>/Constant'

  { 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0,
    2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0 },
  0.017453292519943295,                // Expression: pi/180
                                       //  Referenced by: '<Root>/Gain'


  //  Computed Parameter: SFunction_P1_Size
  //  Referenced by: '<S1>/S-Function'

  { 1.0, 11.0 },

  //  Computed Parameter: SFunction_P1
  //  Referenced by: '<S1>/S-Function'

  { 71.0, 101.0, 116.0, 69.0, 115.0, 116.0, 105.0, 109.0, 97.0, 116.0, 101.0 },

  //  Computed Parameter: SFunction_P2_Size
  //  Referenced by: '<S1>/S-Function'

  { 1.0, 7.0 },

  //  Computed Parameter: SFunction_P2
  //  Referenced by: '<S1>/S-Function'

  { 105.0, 99.0, 117.0, 98.0, 83.0, 105.0, 109.0 },

  //  Computed Parameter: SFunction_P3_Size
  //  Referenced by: '<S1>/S-Function'

  { 1.0, 12.0 },

  //  Computed Parameter: SFunction_P3
  //  Referenced by: '<S1>/S-Function'

  { 87.0, 66.0, 84.0, 95.0, 115.0, 105.0, 109.0, 117.0, 108.0, 105.0, 110.0,
    107.0 },

  //  Computed Parameter: SFunction_P4_Size
  //  Referenced by: '<S1>/S-Function'

  { 1.0, 26.0 },

  //  Computed Parameter: SFunction_P4
  //  Referenced by: '<S1>/S-Function'

  { 121.0, 97.0, 114.0, 112.0, 87.0, 104.0, 111.0, 108.0, 101.0, 66.0, 111.0,
    100.0, 121.0, 73.0, 110.0, 116.0, 101.0, 114.0, 102.0, 97.0, 99.0, 101.0,
    46.0, 105.0, 110.0, 105.0 },

  //  Computed Parameter: SFunction_P5_Size
  //  Referenced by: '<S1>/S-Function'

  { 1.0, 293.0 },

  //  Computed Parameter: SFunction_P5
  //  Referenced by: '<S1>/S-Function'

  { 40.0, 116.0, 111.0, 114.0, 115.0, 111.0, 95.0, 112.0, 105.0, 116.0, 99.0,
    104.0, 44.0, 116.0, 111.0, 114.0, 115.0, 111.0, 95.0, 114.0, 111.0, 108.0,
    108.0, 44.0, 116.0, 111.0, 114.0, 115.0, 111.0, 95.0, 121.0, 97.0, 119.0,
    44.0, 108.0, 95.0, 115.0, 104.0, 111.0, 117.0, 108.0, 100.0, 101.0, 114.0,
    95.0, 112.0, 105.0, 116.0, 99.0, 104.0, 44.0, 32.0, 108.0, 95.0, 115.0,
    104.0, 111.0, 117.0, 108.0, 100.0, 101.0, 114.0, 95.0, 114.0, 111.0, 108.0,
    108.0, 44.0, 32.0, 108.0, 95.0, 115.0, 104.0, 111.0, 117.0, 108.0, 100.0,
    101.0, 114.0, 95.0, 121.0, 97.0, 119.0, 44.0, 32.0, 108.0, 95.0, 101.0,
    108.0, 98.0, 111.0, 119.0, 44.0, 32.0, 114.0, 95.0, 115.0, 104.0, 111.0,
    117.0, 108.0, 100.0, 101.0, 114.0, 95.0, 112.0, 105.0, 116.0, 99.0, 104.0,
    44.0, 114.0, 95.0, 115.0, 104.0, 111.0, 117.0, 108.0, 100.0, 101.0, 114.0,
    95.0, 114.0, 111.0, 108.0, 108.0, 44.0, 32.0, 114.0, 95.0, 115.0, 104.0,
    111.0, 117.0, 108.0, 100.0, 101.0, 114.0, 95.0, 121.0, 97.0, 119.0, 44.0,
    32.0, 114.0, 95.0, 101.0, 108.0, 98.0, 111.0, 119.0, 44.0, 32.0, 108.0, 95.0,
    104.0, 105.0, 112.0, 95.0, 112.0, 105.0, 116.0, 99.0, 104.0, 44.0, 32.0,
    108.0, 95.0, 104.0, 105.0, 112.0, 95.0, 114.0, 111.0, 108.0, 108.0, 44.0,
    32.0, 108.0, 95.0, 104.0, 105.0, 112.0, 95.0, 121.0, 97.0, 119.0, 44.0, 32.0,
    108.0, 95.0, 107.0, 110.0, 101.0, 101.0, 44.0, 32.0, 108.0, 95.0, 97.0,
    110.0, 107.0, 108.0, 101.0, 95.0, 112.0, 105.0, 116.0, 99.0, 104.0, 44.0,
    32.0, 108.0, 95.0, 97.0, 110.0, 107.0, 108.0, 101.0, 95.0, 114.0, 111.0,
    108.0, 108.0, 44.0, 32.0, 114.0, 95.0, 104.0, 105.0, 112.0, 95.0, 112.0,
    105.0, 116.0, 99.0, 104.0, 44.0, 114.0, 95.0, 104.0, 105.0, 112.0, 95.0,
    114.0, 111.0, 108.0, 108.0, 44.0, 114.0, 95.0, 104.0, 105.0, 112.0, 95.0,
    121.0, 97.0, 119.0, 44.0, 114.0, 95.0, 107.0, 110.0, 101.0, 101.0, 44.0,
    114.0, 95.0, 97.0, 110.0, 107.0, 108.0, 101.0, 95.0, 112.0, 105.0, 116.0,
    99.0, 104.0, 44.0, 114.0, 95.0, 97.0, 110.0, 107.0, 108.0, 101.0, 95.0,
    114.0, 111.0, 108.0, 108.0, 41.0 },

  //  Computed Parameter: SFunction_P6_Size
  //  Referenced by: '<S1>/S-Function'

  { 1.0, 15.0 },

  //  Computed Parameter: SFunction_P6
  //  Referenced by: '<S1>/S-Function'

  { 74.0, 111.0, 105.0, 110.0, 116.0, 115.0, 32.0, 80.0, 111.0, 115.0, 105.0,
    116.0, 105.0, 111.0, 110.0 },

  //  Computed Parameter: SFunction_P1_Size_h
  //  Referenced by: '<S2>/S-Function'

  { 1.0, 13.0 },

  //  Computed Parameter: SFunction_P1_e
  //  Referenced by: '<S2>/S-Function'

  { 83.0, 101.0, 116.0, 82.0, 101.0, 102.0, 101.0, 114.0, 101.0, 110.0, 99.0,
    101.0, 115.0 },

  //  Computed Parameter: SFunction_P2_Size_j
  //  Referenced by: '<S2>/S-Function'

  { 1.0, 7.0 },

  //  Computed Parameter: SFunction_P2_e
  //  Referenced by: '<S2>/S-Function'

  { 105.0, 99.0, 117.0, 98.0, 83.0, 105.0, 109.0 },

  //  Computed Parameter: SFunction_P3_Size_o
  //  Referenced by: '<S2>/S-Function'

  { 1.0, 12.0 },

  //  Computed Parameter: SFunction_P3_g
  //  Referenced by: '<S2>/S-Function'

  { 87.0, 66.0, 84.0, 95.0, 115.0, 105.0, 109.0, 117.0, 108.0, 105.0, 110.0,
    107.0 },

  //  Computed Parameter: SFunction_P4_Size_c
  //  Referenced by: '<S2>/S-Function'

  { 1.0, 26.0 },

  //  Computed Parameter: SFunction_P4_i
  //  Referenced by: '<S2>/S-Function'

  { 121.0, 97.0, 114.0, 112.0, 87.0, 104.0, 111.0, 108.0, 101.0, 66.0, 111.0,
    100.0, 121.0, 73.0, 110.0, 116.0, 101.0, 114.0, 102.0, 97.0, 99.0, 101.0,
    46.0, 105.0, 110.0, 105.0 },

  //  Computed Parameter: SFunction_P5_Size_g
  //  Referenced by: '<S2>/S-Function'

  { 1.0, 293.0 },

  //  Computed Parameter: SFunction_P5_b
  //  Referenced by: '<S2>/S-Function'

  { 40.0, 116.0, 111.0, 114.0, 115.0, 111.0, 95.0, 112.0, 105.0, 116.0, 99.0,
    104.0, 44.0, 116.0, 111.0, 114.0, 115.0, 111.0, 95.0, 114.0, 111.0, 108.0,
    108.0, 44.0, 116.0, 111.0, 114.0, 115.0, 111.0, 95.0, 121.0, 97.0, 119.0,
    44.0, 108.0, 95.0, 115.0, 104.0, 111.0, 117.0, 108.0, 100.0, 101.0, 114.0,
    95.0, 112.0, 105.0, 116.0, 99.0, 104.0, 44.0, 32.0, 108.0, 95.0, 115.0,
    104.0, 111.0, 117.0, 108.0, 100.0, 101.0, 114.0, 95.0, 114.0, 111.0, 108.0,
    108.0, 44.0, 32.0, 108.0, 95.0, 115.0, 104.0, 111.0, 117.0, 108.0, 100.0,
    101.0, 114.0, 95.0, 121.0, 97.0, 119.0, 44.0, 32.0, 108.0, 95.0, 101.0,
    108.0, 98.0, 111.0, 119.0, 44.0, 32.0, 114.0, 95.0, 115.0, 104.0, 111.0,
    117.0, 108.0, 100.0, 101.0, 114.0, 95.0, 112.0, 105.0, 116.0, 99.0, 104.0,
    44.0, 114.0, 95.0, 115.0, 104.0, 111.0, 117.0, 108.0, 100.0, 101.0, 114.0,
    95.0, 114.0, 111.0, 108.0, 108.0, 44.0, 32.0, 114.0, 95.0, 115.0, 104.0,
    111.0, 117.0, 108.0, 100.0, 101.0, 114.0, 95.0, 121.0, 97.0, 119.0, 44.0,
    32.0, 114.0, 95.0, 101.0, 108.0, 98.0, 111.0, 119.0, 44.0, 32.0, 108.0, 95.0,
    104.0, 105.0, 112.0, 95.0, 112.0, 105.0, 116.0, 99.0, 104.0, 44.0, 32.0,
    108.0, 95.0, 104.0, 105.0, 112.0, 95.0, 114.0, 111.0, 108.0, 108.0, 44.0,
    32.0, 108.0, 95.0, 104.0, 105.0, 112.0, 95.0, 121.0, 97.0, 119.0, 44.0, 32.0,
    108.0, 95.0, 107.0, 110.0, 101.0, 101.0, 44.0, 32.0, 108.0, 95.0, 97.0,
    110.0, 107.0, 108.0, 101.0, 95.0, 112.0, 105.0, 116.0, 99.0, 104.0, 44.0,
    32.0, 108.0, 95.0, 97.0, 110.0, 107.0, 108.0, 101.0, 95.0, 114.0, 111.0,
    108.0, 108.0, 44.0, 32.0, 114.0, 95.0, 104.0, 105.0, 112.0, 95.0, 112.0,
    105.0, 116.0, 99.0, 104.0, 44.0, 114.0, 95.0, 104.0, 105.0, 112.0, 95.0,
    114.0, 111.0, 108.0, 108.0, 44.0, 114.0, 95.0, 104.0, 105.0, 112.0, 95.0,
    121.0, 97.0, 119.0, 44.0, 114.0, 95.0, 107.0, 110.0, 101.0, 101.0, 44.0,
    114.0, 95.0, 97.0, 110.0, 107.0, 108.0, 101.0, 95.0, 112.0, 105.0, 116.0,
    99.0, 104.0, 44.0, 114.0, 95.0, 97.0, 110.0, 107.0, 108.0, 101.0, 95.0,
    114.0, 111.0, 108.0, 108.0, 41.0 },

  //  Computed Parameter: SFunction_P6_Size_n
  //  Referenced by: '<S2>/S-Function'

  { 1.0, 15.0 },

  //  Computed Parameter: SFunction_P6_k
  //  Referenced by: '<S2>/S-Function'

  { 80.0, 111.0, 115.0, 105.0, 116.0, 105.0, 111.0, 110.0, 32.0, 68.0, 105.0,
    114.0, 101.0, 99.0, 116.0 },

  //  Computed Parameter: SFunction_P7_Size
  //  Referenced by: '<S2>/S-Function'

  { 1.0, 1.0 },
  1.0,                                 // Expression: fullOrSubControl
                                       //  Referenced by: '<S2>/S-Function'


  //  Computed Parameter: SFunction_P8_Size
  //  Referenced by: '<S2>/S-Function'

  { 0.0, 0.0 }
};                                     // Modifiable parameters

static B_autoGenTest_T autoGenTest_B;  // Observable signals
static DW_autoGenTest_T autoGenTest_DW;// Observable states

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
void rt_OneStep(RT_MODEL_autoGenTest_T *const autoGenTest_M)
{
  static boolean_T OverrunFlag = false;

  // Disable interrupts here

  // Check for overrun
  if (OverrunFlag) {
    rtmSetErrorStatus(autoGenTest_M, "Overrun");
    return;
  }

  OverrunFlag = true;

  // Save FPU context here (if necessary)
  // Re-enable timer or interrupt here
  // Set model inputs here

  // Step the model for base rate
  autoGenTest_step(autoGenTest_M);

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
  autoGenTest_M->ModelData.defaultParam = &autoGenTest_P;
  autoGenTest_M->ModelData.blockIO = &autoGenTest_B;
  autoGenTest_M->ModelData.dwork = &autoGenTest_DW;

  // Initialize model
  autoGenTest_initialize(autoGenTest_M);

  // Simulating the model step behavior (in non real-time) to
  //   simulate model behavior at stop time.

  while ((rtmGetErrorStatus(autoGenTest_M) == (NULL)) && !rtmGetStopRequested
         (autoGenTest_M)) {
    rt_OneStep(autoGenTest_M);
  }

  // Disable rt_OneStep() here

  // Terminate model
  autoGenTest_terminate(autoGenTest_M);
  return 0;
}

//
// File trailer for generated code.
//
// [EOF]
//
