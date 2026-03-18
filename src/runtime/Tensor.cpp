#include"runtime/Tensor.h"
namespace MiniKernal{
    namespace Utils{
        std::size_t Tensor::size()const{
            return GetDimsNumel(this->mShape);
        }
    }
}