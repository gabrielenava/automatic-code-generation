//
// File: simpleCounter.h
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
#ifndef RTW_HEADER_simpleCounter_h_
#define RTW_HEADER_simpleCounter_h_
#ifndef simpleCounter_COMMON_INCLUDES_
# define simpleCounter_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 // simpleCounter_COMMON_INCLUDES_

#include "simpleCounter_types.h"
#include "rt_defines.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

// Parameters (auto storage)
struct P_simpleCounter_T_ {
  real_T amplitude;                    // Variable: amplitude
                                       //  Referenced by:
                                       //    '<Root>/MATLAB Function'
                                       //    '<Root>/Sine Wave'

  real_T frequency;                    // Variable: frequency
                                       //  Referenced by: '<Root>/Sine Wave'

  real_T SineWave_Bias;                // Expression: 0
                                       //  Referenced by: '<Root>/Sine Wave'

  real_T SineWave_Phase;               // Expression: 0
                                       //  Referenced by: '<Root>/Sine Wave'

};

// Real-time Model Data Structure
struct tag_RTM_simpleCounter_T {
  const char_T * volatile errorStatus;
  RTWSolverInfo solverInfo;

  //
  //  ModelData:
  //  The following substructure contains information regarding
  //  the data used in the model.

  struct {
    P_simpleCounter_T *defaultParam;
  } ModelData;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

#ifdef __cplusplus

extern "C" {

#endif

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void simpleCounter_initialize(RT_MODEL_simpleCounter_T *const
    simpleCounter_M);
  extern void simpleCounter_step(RT_MODEL_simpleCounter_T *const simpleCounter_M);
  extern void simpleCounter_terminate(RT_MODEL_simpleCounter_T *const
    simpleCounter_M);

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'simpleCounter'
//  '<S1>'   : 'simpleCounter/MATLAB Function'

#endif                                 // RTW_HEADER_simpleCounter_h_

//
// File trailer for generated code.
//
// [EOF]
//
