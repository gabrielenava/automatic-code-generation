//
// File: autoGenTest.cpp
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
#include "autoGenTest.h"
#include "autoGenTest_private.h"

// Model step function
void autoGenTest_step(RT_MODEL_autoGenTest_T *const autoGenTest_M)
{
  P_autoGenTest_T *autoGenTest_P = ((P_autoGenTest_T *)
    autoGenTest_M->ModelData.defaultParam);
  B_autoGenTest_T *autoGenTest_B = ((B_autoGenTest_T *)
    autoGenTest_M->ModelData.blockIO);
  DW_autoGenTest_T *autoGenTest_DW = ((DW_autoGenTest_T *)
    autoGenTest_M->ModelData.dwork);

  // local block i/o variables
  real_T rtb_Clock;
  int32_T i;

  // Level2 S-Function Block: '<Root>/Simulator Synchronizer' (WBToolbox)
  {
    SimStruct *rts = autoGenTest_M->childSfunctions[0];
    sfcnOutputs(rts, 1);
  }

  // Gain: '<Root>/Gain' incorporates:
  //   Constant: '<Root>/Constant'

  for (i = 0; i < 23; i++) {
    autoGenTest_B->Gain[i] = autoGenTest_P->Gain_Gain *
      autoGenTest_P->Constant_Value[i];
  }

  // End of Gain: '<Root>/Gain'

  // Level2 S-Function Block: '<S1>/S-Function' (WBToolbox)
  {
    SimStruct *rts = autoGenTest_M->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }

  // Clock: '<S3>/Clock'
  rtb_Clock = autoGenTest_M->Timing.t[0];

  // MATLAB Function: '<S3>/MATLAB Function'
  // MATLAB Function 'Utilities/holder /MATLAB Function': '<S5>:1'
  if (!autoGenTest_DW->state_not_empty) {
    // '<S5>:1:5'
    // '<S5>:1:6'
    memcpy(&autoGenTest_DW->state[0], &autoGenTest_B->SFunction[0], 23U * sizeof
           (real_T));
    autoGenTest_DW->state_not_empty = true;
  }

  // Sum: '<Root>/Sum' incorporates:
  //   MATLAB Function: '<S3>/MATLAB Function'

  // '<S5>:1:9'
  for (i = 0; i < 23; i++) {
    autoGenTest_B->Sum[i] = autoGenTest_B->Gain[i] + autoGenTest_DW->state[i];
  }

  // End of Sum: '<Root>/Sum'

  // Level2 S-Function Block: '<S2>/S-Function' (WBToolbox)
  {
    SimStruct *rts = autoGenTest_M->childSfunctions[2];
    sfcnOutputs(rts, 0);
  }

  // Level2 S-Function Block: '<Root>/Simulator Synchronizer' (WBToolbox)
  {
    SimStruct *rts = autoGenTest_M->childSfunctions[0];
    sfcnUpdate(rts, 1);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  // Level2 S-Function Block: '<S1>/S-Function' (WBToolbox)
  {
    SimStruct *rts = autoGenTest_M->childSfunctions[1];
    sfcnUpdate(rts, 0);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  // Level2 S-Function Block: '<S2>/S-Function' (WBToolbox)
  {
    SimStruct *rts = autoGenTest_M->childSfunctions[2];
    sfcnUpdate(rts, 0);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  autoGenTest_M->Timing.t[0] =
    (++autoGenTest_M->Timing.clockTick0) * autoGenTest_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.01s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick1"
    //  and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
    //  overflow during the application lifespan selected.

    autoGenTest_M->Timing.t[1] =
      (++autoGenTest_M->Timing.clockTick1) * autoGenTest_M->Timing.stepSize1;
  }
}

// Model initialize function
void autoGenTest_initialize(RT_MODEL_autoGenTest_T *const autoGenTest_M)
{
  P_autoGenTest_T *autoGenTest_P = ((P_autoGenTest_T *)
    autoGenTest_M->ModelData.defaultParam);
  B_autoGenTest_T *autoGenTest_B = ((B_autoGenTest_T *)
    autoGenTest_M->ModelData.blockIO);
  DW_autoGenTest_T *autoGenTest_DW = ((DW_autoGenTest_T *)
    autoGenTest_M->ModelData.dwork);

  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&autoGenTest_M->solverInfo,
                          &autoGenTest_M->Timing.simTimeStep);
    rtsiSetTPtr(&autoGenTest_M->solverInfo, &rtmGetTPtr(autoGenTest_M));
    rtsiSetStepSizePtr(&autoGenTest_M->solverInfo,
                       &autoGenTest_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&autoGenTest_M->solverInfo, ((const char_T **)
      (&rtmGetErrorStatus(autoGenTest_M))));
    rtsiSetRTModelPtr(&autoGenTest_M->solverInfo, autoGenTest_M);
  }

  rtsiSetSimTimeStep(&autoGenTest_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&autoGenTest_M->solverInfo,"FixedStepDiscrete");
  autoGenTest_M->solverInfoPtr = (&autoGenTest_M->solverInfo);

  // Initialize timing info
  {
    int_T *mdlTsMap = autoGenTest_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    autoGenTest_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    autoGenTest_M->Timing.sampleTimes = (&autoGenTest_M->
      Timing.sampleTimesArray[0]);
    autoGenTest_M->Timing.offsetTimes = (&autoGenTest_M->
      Timing.offsetTimesArray[0]);

    // task periods
    autoGenTest_M->Timing.sampleTimes[0] = (0.0);
    autoGenTest_M->Timing.sampleTimes[1] = (0.01);

    // task offsets
    autoGenTest_M->Timing.offsetTimes[0] = (0.0);
    autoGenTest_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(autoGenTest_M, &autoGenTest_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = autoGenTest_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    autoGenTest_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(autoGenTest_M, -1);
  autoGenTest_M->Timing.stepSize0 = 0.01;
  autoGenTest_M->Timing.stepSize1 = 0.01;
  autoGenTest_M->solverInfoPtr = (&autoGenTest_M->solverInfo);
  autoGenTest_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&autoGenTest_M->solverInfo, 0.01);
  rtsiSetSolverMode(&autoGenTest_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  // block I/O
  (void) memset(((void *) autoGenTest_B), 0,
                sizeof(B_autoGenTest_T));

  // states (dwork)
  (void) memset((void *)autoGenTest_DW, 0,
                sizeof(DW_autoGenTest_T));

  // child S-Function registration
  {
    RTWSfcnInfo *sfcnInfo = &autoGenTest_M->NonInlinedSFcns.sfcnInfo;
    autoGenTest_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, ((const char_T **)(&rtmGetErrorStatus
      (autoGenTest_M))));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &autoGenTest_M->Sizes.numSampTimes);
    autoGenTest_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(autoGenTest_M)
      [0]);
    autoGenTest_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(autoGenTest_M)
      [1]);
    rtssSetTPtrPtr(sfcnInfo,autoGenTest_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(autoGenTest_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(autoGenTest_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(autoGenTest_M));
    rtssSetStepSizePtr(sfcnInfo, &autoGenTest_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(autoGenTest_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &autoGenTest_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &autoGenTest_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &autoGenTest_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &autoGenTest_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &autoGenTest_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &autoGenTest_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &autoGenTest_M->solverInfoPtr);
  }

  autoGenTest_M->Sizes.numSFcns = (3);

  // register each child
  {
    (void) memset((void *)&autoGenTest_M->NonInlinedSFcns.childSFunctions[0], 0,
                  3*sizeof(SimStruct));
    autoGenTest_M->childSfunctions =
      (&autoGenTest_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    autoGenTest_M->childSfunctions[0] =
      (&autoGenTest_M->NonInlinedSFcns.childSFunctions[0]);
    autoGenTest_M->childSfunctions[1] =
      (&autoGenTest_M->NonInlinedSFcns.childSFunctions[1]);
    autoGenTest_M->childSfunctions[2] =
      (&autoGenTest_M->NonInlinedSFcns.childSFunctions[2]);

    // Level2 S-Function Block: autoGenTest/<Root>/Simulator Synchronizer (WBToolbox) 
    {
      SimStruct *rts = autoGenTest_M->childSfunctions[0];

      // timing info
      time_T *sfcnPeriod = autoGenTest_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = autoGenTest_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = autoGenTest_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      // Set up the mdlInfo pointer
      {
        ssSetBlkInfo2Ptr(rts, &autoGenTest_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, autoGenTest_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts, &autoGenTest_M->NonInlinedSFcns.methods2[0]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts, &autoGenTest_M->NonInlinedSFcns.methods3[0]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts, &autoGenTest_M->NonInlinedSFcns.statesInfo2[0]);
      }

      // path info
      ssSetModelName(rts, "Simulator Synchronizer");
      ssSetPath(rts, "autoGenTest/Simulator Synchronizer");
      ssSetRTModel(rts,autoGenTest_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &autoGenTest_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       autoGenTest_P->SimulatorSynchronizer_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       autoGenTest_P->SimulatorSynchronizer_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       autoGenTest_P->SimulatorSynchronizer_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       autoGenTest_P->SimulatorSynchronizer_P4_Size);
      }

      // work vectors
      ssSetPWork(rts, (void **) &autoGenTest_DW->SimulatorSynchronizer_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &autoGenTest_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &autoGenTest_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        // PWORK
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &autoGenTest_DW->SimulatorSynchronizer_PWORK);
      }

      // registration
      WBToolbox(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      // set compiled values of dynamic vector attributes
      ssSetNumNonsampledZCs(rts, 0);

      // Update connectivity flags for each port
      // Update the BufferDstPort flags for each input port
    }

    // Level2 S-Function Block: autoGenTest/<S1>/S-Function (WBToolbox)
    {
      SimStruct *rts = autoGenTest_M->childSfunctions[1];

      // timing info
      time_T *sfcnPeriod = autoGenTest_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = autoGenTest_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = autoGenTest_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      // Set up the mdlInfo pointer
      {
        ssSetBlkInfo2Ptr(rts, &autoGenTest_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, autoGenTest_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts, &autoGenTest_M->NonInlinedSFcns.methods2[1]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts, &autoGenTest_M->NonInlinedSFcns.methods3[1]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts, &autoGenTest_M->NonInlinedSFcns.statesInfo2[1]);
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &autoGenTest_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 23);
          ssSetOutputPortSignal(rts, 0, ((real_T *) autoGenTest_B->SFunction));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "autoGenTest/Get Estimate/S-Function");
      ssSetRTModel(rts,autoGenTest_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &autoGenTest_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)autoGenTest_P->SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)autoGenTest_P->SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)autoGenTest_P->SFunction_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)autoGenTest_P->SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)autoGenTest_P->SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)autoGenTest_P->SFunction_P6_Size);
      }

      // work vectors
      ssSetPWork(rts, (void **) &autoGenTest_DW->SFunction_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &autoGenTest_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &autoGenTest_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        // PWORK
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &autoGenTest_DW->SFunction_PWORK);
      }

      // registration
      WBToolbox(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      // set compiled values of dynamic vector attributes
      ssSetNumNonsampledZCs(rts, 0);

      // Update connectivity flags for each port
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      // Update the BufferDstPort flags for each input port
    }

    // Level2 S-Function Block: autoGenTest/<S2>/S-Function (WBToolbox)
    {
      SimStruct *rts = autoGenTest_M->childSfunctions[2];

      // timing info
      time_T *sfcnPeriod = autoGenTest_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = autoGenTest_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = autoGenTest_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      // Set up the mdlInfo pointer
      {
        ssSetBlkInfo2Ptr(rts, &autoGenTest_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, autoGenTest_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts, &autoGenTest_M->NonInlinedSFcns.methods2[2]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts, &autoGenTest_M->NonInlinedSFcns.methods3[2]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts, &autoGenTest_M->NonInlinedSFcns.statesInfo2[2]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &autoGenTest_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &autoGenTest_M->NonInlinedSFcns.Sfcn2.UPtrs0;

          {
            int_T i1;
            const real_T *u0 = autoGenTest_B->Sum;
            for (i1=0; i1 < 23; i1++) {
              sfcnUPtrs[i1] = &u0[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 23);
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "autoGenTest/Set References/S-Function");
      ssSetRTModel(rts,autoGenTest_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &autoGenTest_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)autoGenTest_P->SFunction_P1_Size_h);
        ssSetSFcnParam(rts, 1, (mxArray*)autoGenTest_P->SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)autoGenTest_P->SFunction_P3_Size_o);
        ssSetSFcnParam(rts, 3, (mxArray*)autoGenTest_P->SFunction_P4_Size_c);
        ssSetSFcnParam(rts, 4, (mxArray*)autoGenTest_P->SFunction_P5_Size_g);
        ssSetSFcnParam(rts, 5, (mxArray*)autoGenTest_P->SFunction_P6_Size_n);
        ssSetSFcnParam(rts, 6, (mxArray*)autoGenTest_P->SFunction_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)autoGenTest_P->SFunction_P8_Size);
      }

      // work vectors
      ssSetPWork(rts, (void **) &autoGenTest_DW->SFunction_PWORK_b);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &autoGenTest_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &autoGenTest_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        // PWORK
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &autoGenTest_DW->SFunction_PWORK_b);
      }

      // registration
      WBToolbox(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      // set compiled values of dynamic vector attributes
      ssSetNumNonsampledZCs(rts, 0);

      // Update connectivity flags for each port
      _ssSetInputPortConnected(rts, 0, 1);

      // Update the BufferDstPort flags for each input port
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  // Level2 S-Function Block: '<Root>/Simulator Synchronizer' (WBToolbox)
  {
    SimStruct *rts = autoGenTest_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  // Level2 S-Function Block: '<S1>/S-Function' (WBToolbox)
  {
    SimStruct *rts = autoGenTest_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  // Level2 S-Function Block: '<S2>/S-Function' (WBToolbox)
  {
    SimStruct *rts = autoGenTest_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  // Level2 S-Function Block: '<Root>/Simulator Synchronizer' (WBToolbox)
  {
    SimStruct *rts = autoGenTest_M->childSfunctions[0];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  // Level2 S-Function Block: '<S1>/S-Function' (WBToolbox)
  {
    SimStruct *rts = autoGenTest_M->childSfunctions[1];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  // InitializeConditions for MATLAB Function: '<S3>/MATLAB Function'
  autoGenTest_DW->state_not_empty = false;

  // Level2 S-Function Block: '<S2>/S-Function' (WBToolbox)
  {
    SimStruct *rts = autoGenTest_M->childSfunctions[2];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

// Model terminate function
void autoGenTest_terminate(RT_MODEL_autoGenTest_T *const autoGenTest_M)
{
  // Level2 S-Function Block: '<Root>/Simulator Synchronizer' (WBToolbox)
  {
    SimStruct *rts = autoGenTest_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  // Level2 S-Function Block: '<S1>/S-Function' (WBToolbox)
  {
    SimStruct *rts = autoGenTest_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  // Level2 S-Function Block: '<S2>/S-Function' (WBToolbox)
  {
    SimStruct *rts = autoGenTest_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  UNUSED_PARAMETER(autoGenTest_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
