#pragma once
#include<cuda_runtime.h>
#include"Tools.h"
namespace MiniKernal{
    namespace Utils{
    
    class Tensor{
    private:
        //data member
        //数据成员
        void *mData=nullptr;//不区分CPU/GPU
        Dims mShape;
        DeviceType mDeviceType;
        DataType mDateType;
    private:
        //private member function
        //成员方法
        void allocate();
        std::size_t element_size()const;
    public:
        std::size_t size()const;
    };
    
};    
};
