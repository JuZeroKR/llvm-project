#include "llvm/IR/PassManager.h"



namespace llvm {
    class PPProfilerIRPass
        : public llvm::PassInfoMixin<PPProfilerIRPass> {
            public:
            llvm::PreservedAnalyses
            run(llvm::Module &M, llvm::ModuleAnalysisManager &AM);
            private:
            void instrument(llvm::Function &F,
                            llvm::Function *EnterFn,
                            llvm::Function *ExitFn);
        };
}