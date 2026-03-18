#pragma once
#include<cstdint>
#include<cstdlib>
namespace MiniKernal{
    namespace Utils{
    //设备类型
    enum class DeviceType:int32_t{
        CPU,
        GPU,
    };
    //数据类型
    enum class DataType:int32_t{
        Float32,
        Float16,
    };
    //张量维度的数据结构
    struct Dims{
        static constexpr int MaxDimsb=8;
        int mDimsNb;
        int mDims[MaxDimsb];
    };
    //获取Dims里元素个数
    inline std::size_t GetDimsNumel(const Dims& d);
}
}