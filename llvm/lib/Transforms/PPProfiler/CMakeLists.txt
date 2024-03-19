add_llvm_component_library(LLVMPPProfiler
  PPProfiler.cpp

  LINK_COMPONENTS
  Analysis
  Core
  Support
  TransformUtils
  )
