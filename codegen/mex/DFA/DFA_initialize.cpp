//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// DFA_initialize.cpp
//
// Code generation for function 'DFA_initialize'
//

// Include files
#include "DFA_initialize.h"
#include "DFA_data.h"
#include "_coder_DFA_mex.h"
#include "rt_nonfinite.h"

// Function Declarations
static void DFA_once();

// Function Definitions
static void DFA_once()
{
  mex_InitInfAndNan();
  // Allocate instance data
  covrtAllocateInstanceData(&emlrtCoverageInstance);
  // Initialize Coverage Information
  covrtScriptInit(&emlrtCoverageInstance,
                  "/Users/okamoto/program_doc/DFA-cpp/DFA.m", 0U, 1U, 5U, 0U,
                  0U, 0U, 0U, 3U, 0U, 0U, 0U);
  // Initialize Function Information
  covrtFcnInit(&emlrtCoverageInstance, 0U, 0U, "DFA", 0, -1, 2637);
  // Initialize Basic Block Information
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 4U, 1419, -1, 2629);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 3U, 1355, -1, 1386);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 2U, 873, -1, 1312);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 1U, 687, -1, 770);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 0U, 217, -1, 641);
  // Initialize If Information
  // Initialize MCDC Information
  // Initialize For Information
  covrtForInit(&emlrtCoverageInstance, 0U, 0U, 647, 663, 778);
  covrtForInit(&emlrtCoverageInstance, 0U, 1U, 783, 799, 1413);
  covrtForInit(&emlrtCoverageInstance, 0U, 2U, 823, 845, 1345);
  // Initialize While Information
  // Initialize Switch Information
  // Start callback for coverage engine
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void DFA_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    DFA_once();
  }
}

// End of code generation (DFA_initialize.cpp)
