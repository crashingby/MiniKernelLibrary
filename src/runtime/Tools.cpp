#include"runtime/Tools.h"
namespace MiniKernal{
    namespace Utils{
    std::size_t MiniKernal::Utils::GetDimsNumel(const Dims &d)
    {
        std::size_t n=1;
        for(int i=0;i<d.mDimsNb;++i){
            n*=d.mDims[i];
        }
        return n;
    }
}
}