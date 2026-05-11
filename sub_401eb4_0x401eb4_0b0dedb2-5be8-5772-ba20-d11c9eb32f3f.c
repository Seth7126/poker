// ============================================================
// 函数名称: sub_401eb4
// 虚拟地址: 0x401eb4
// WARP GUID: 0b0dedb2-5be8-5772-ba20-d11c9eb32f3f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_401e1c
// [被调用的父级函数]: sub_40231c, sub_401cf8, sub_4020a0, sub_4024c0
// ============================================================

void** __convention("regparm")sub_401eb4(void** arg1, void* arg2)
{
    // 第一条实际指令: arg1[2] = arg2
    arg1[2] = arg2
    *(arg1 + arg2 - 4) = arg2
    void** result
    
    if (arg2 s> 0x1000)
        if (arg2 s>= 0x3c00)
            result = sub_401e1c(arg1, arg2)
        
        if (arg2 s< 0x3c00 || result.b == 0)
            result = data_531484
            data_531484 = arg1
            void* edx_4 = *result
            arg1[1] = result
            *arg1 = edx_4
            *result = arg1
            *(edx_4 + 4) = arg1
    else
        void* edx = arg2
        
        if (edx s< 0)
            edx += 3
        
        int32_t edx_1 = edx s>> 2
        result = *(data_531490 + (edx_1 << 2) - 0xc)
        
        if (result != 0)
            void* edx_2 = *result
            arg1[1] = result
            *arg1 = edx_2
            *result = arg1
            *(edx_2 + 4) = arg1
        else
            result = data_531490
            result[edx_1 - 3] = arg1
            arg1[1] = arg1
            *arg1 = arg1
    
    return result
}
