//
// File: autoGenTest.h
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
#ifndef RTW_HEADER_autoGenTest_h_
#define RTW_HEADER_autoGenTest_h_
#include <stddef.h>
#include <string.h>
#ifndef autoGenTest_COMMON_INCLUDES_
# define autoGenTest_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif                                 // autoGenTest_COMMON_INCLUDES_

#include "autoGenTest_types.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

// Block signals (auto storage)
typedef struct {
  real_T Gain[23];                     // '<Root>/Gain'
  real_T SFunction[23];                // '<S1>/S-Function'
  real_T Sum[23];                      // '<Root>/Sum'
} B_autoGenTest_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  real_T state[23];                    // '<S3>/MATLAB Function'
  void *SimulatorSynchronizer_PWORK;   // '<Root>/Simulator Synchronizer'
  void *SFunction_PWORK;               // '<S1>/S-Function'
  void *SFunction_PWORK_b;             // '<S2>/S-Function'
  boolean_T state_not_empty;           // '<S3>/MATLAB Function'
} DW_autoGenTest_T;

// Parameters (auto storage)
struct P_autoGenTest_T_ {
  real_T CompareToConstant_const;      // Mask Parameter: CompareToConstant_const
                                       //  Referenced by: '<S4>/Constant'

  real_T SimulatorSynchronizer_P1_Size[2];// Computed Parameter: SimulatorSynchronizer_P1_Size
                                          //  Referenced by: '<Root>/Simulator Synchronizer'

  real_T SimulatorSynchronizer_P1[21]; // Computed Parameter: SimulatorSynchronizer_P1
                                       //  Referenced by: '<Root>/Simulator Synchronizer'

  real_T SimulatorSynchronizer_P2_Size[2];// Computed Parameter: SimulatorSynchronizer_P2_Size
                                          //  Referenced by: '<Root>/Simulator Synchronizer'

  real_T SimulatorSynchronizer_P2;     // Expression: period
                                       //  Referenced by: '<Root>/Simulator Synchronizer'

  real_T SimulatorSynchronizer_P3_Size[2];// Computed Parameter: SimulatorSynchronizer_P3_Size
                                          //  Referenced by: '<Root>/Simulator Synchronizer'

  real_T SimulatorSynchronizer_P3[10]; // Computed Parameter: SimulatorSynchronizer_P3
                                       //  Referenced by: '<Root>/Simulator Synchronizer'

  real_T SimulatorSynchronizer_P4_Size[2];// Computed Parameter: SimulatorSynchronizer_P4_Size
                                          //  Referenced by: '<Root>/Simulator Synchronizer'

  real_T SimulatorSynchronizer_P4[23]; // Computed Parameter: SimulatorSynchronizer_P4
                                       //  Referenced by: '<Root>/Simulator Synchronizer'

  real_T Constant_Value[23];           // Expression: ones(ROBOT_DOFS,1).*2
                                       //  Referenced by: '<Root>/Constant'

  real_T Gain_Gain;                    // Expression: pi/180
                                       //  Referenced by: '<Root>/Gain'

  real_T SFunction_P1_Size[2];         // Computed Parameter: SFunction_P1_Size
                                       //  Referenced by: '<S1>/S-Function'

  real_T SFunction_P1[11];             // Computed Parameter: SFunction_P1
                                       //  Referenced by: '<S1>/S-Function'

  real_T SFunction_P2_Size[2];         // Computed Parameter: SFunction_P2_Size
                                       //  Referenced by: '<S1>/S-Function'

  real_T SFunction_P2[7];              // Computed Parameter: SFunction_P2
                                       //  Referenced by: '<S1>/S-Function'

  real_T SFunction_P3_Size[2];         // Computed Parameter: SFunction_P3_Size
                                       //  Referenced by: '<S1>/S-Function'

  real_T SFunction_P3[12];             // Computed Parameter: SFunction_P3
                                       //  Referenced by: '<S1>/S-Function'

  real_T SFunction_P4_Size[2];         // Computed Parameter: SFunction_P4_Size
                                       //  Referenced by: '<S1>/S-Function'

  real_T SFunction_P4[26];             // Computed Parameter: SFunction_P4
                                       //  Referenced by: '<S1>/S-Function'

  real_T SFunction_P5_Size[2];         // Computed Parameter: SFunction_P5_Size
                                       //  Referenced by: '<S1>/S-Function'

  real_T SFunction_P5[293];            // Computed Parameter: SFunction_P5
                                       //  Referenced by: '<S1>/S-Function'

  real_T SFunction_P6_Size[2];         // Computed Parameter: SFunction_P6_Size
                                       //  Referenced by: '<S1>/S-Function'

  real_T SFunction_P6[15];             // Computed Parameter: SFunction_P6
                                       //  Referenced by: '<S1>/S-Function'

  real_T SFunction_P1_Size_h[2];       // Computed Parameter: SFunction_P1_Size_h
                                       //  Referenced by: '<S2>/S-Function'

  real_T SFunction_P1_e[13];           // Computed Parameter: SFunction_P1_e
                                       //  Referenced by: '<S2>/S-Function'

  real_T SFunction_P2_Size_j[2];       // Computed Parameter: SFunction_P2_Size_j
                                       //  Referenced by: '<S2>/S-Function'

  real_T SFunction_P2_e[7];            // Computed Parameter: SFunction_P2_e
                                       //  Referenced by: '<S2>/S-Function'

  real_T SFunction_P3_Size_o[2];       // Computed Parameter: SFunction_P3_Size_o
                                       //  Referenced by: '<S2>/S-Function'

  real_T SFunction_P3_g[12];           // Computed Parameter: SFunction_P3_g
                                       //  Referenced by: '<S2>/S-Function'

  real_T SFunction_P4_Size_c[2];       // Computed Parameter: SFunction_P4_Size_c
                                       //  Referenced by: '<S2>/S-Function'

  real_T SFunction_P4_i[26];           // Computed Parameter: SFunction_P4_i
                                       //  Referenced by: '<S2>/S-Function'

  real_T SFunction_P5_Size_g[2];       // Computed Parameter: SFunction_P5_Size_g
                                       //  Referenced by: '<S2>/S-Function'

  real_T SFunction_P5_b[293];          // Computed Parameter: SFunction_P5_b
                                       //  Referenced by: '<S2>/S-Function'

  real_T SFunction_P6_Size_n[2];       // Computed Parameter: SFunction_P6_Size_n
                                       //  Referenced by: '<S2>/S-Function'

  real_T SFunction_P6_k[15];           // Computed Parameter: SFunction_P6_k
                                       //  Referenced by: '<S2>/S-Function'

  real_T SFunction_P7_Size[2];         // Computed Parameter: SFunction_P7_Size
                                       //  Referenced by: '<S2>/S-Function'

  real_T SFunction_P7;                 // Expression: fullOrSubControl
                                       //  Referenced by: '<S2>/S-Function'

  real_T SFunction_P8_Size[2];         // Computed Parameter: SFunction_P8_Size
                                       //  Referenced by: '<S2>/S-Function'

};

// Real-time Model Data Structure
struct tag_RTM_autoGenTest_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T * volatile errorStatus;
  SS_SimMode simMode;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  //
  //  NonInlinedSFcns:
  //  The following substructure contains information regarding
  //  non-inlined s-functions used in the model.

  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[3];
    SimStruct *childSFunctionPtrs[3];
    struct _ssBlkInfo2 blkInfo2[3];
    struct _ssSFcnModelMethods2 methods2[3];
    struct _ssSFcnModelMethods3 methods3[3];
    struct _ssStatesInfo2 statesInfo2[3];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[23];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;
  } NonInlinedSFcns;

  //
  //  ModelData:
  //  The following substructure contains information regarding
  //  the data used in the model.

  struct {
    B_autoGenTest_T *blockIO;
    P_autoGenTest_T *defaultParam;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    DW_autoGenTest_T *dwork;
  } ModelData;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    time_T stepSize;
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
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
  extern void autoGenTest_initialize(RT_MODEL_autoGenTest_T *const autoGenTest_M);
  extern void autoGenTest_step(RT_MODEL_autoGenTest_T *const autoGenTest_M);
  extern void autoGenTest_terminate(RT_MODEL_autoGenTest_T *const autoGenTest_M);

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
//  '<Root>' : 'autoGenTest'
//  '<S1>'   : 'autoGenTest/Get Estimate'
//  '<S2>'   : 'autoGenTest/Set References'
//  '<S3>'   : 'autoGenTest/holder '
//  '<S4>'   : 'autoGenTest/holder /Compare To Constant'
//  '<S5>'   : 'autoGenTest/holder /MATLAB Function'

#endif                                 // RTW_HEADER_autoGenTest_h_

//
// File trailer for generated code.
//
// [EOF]
//
