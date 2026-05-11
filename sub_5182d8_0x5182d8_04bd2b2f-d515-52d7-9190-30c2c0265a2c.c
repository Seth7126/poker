// ============================================================
// 函数名称: sub_5182d8
// 虚拟地址: 0x5182d8
// WARP GUID: 04bd2b2f-d515-52d7-9190-30c2c0265a2c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4bca48, sub_52b194, sub_4bf070
// ============================================================

int32_t __convention("regparm")sub_5182d8(int32_t arg1, char arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    void var_112
    __builtin_memcpy(&var_112, arg1, 0x104)
    int32_t result = 0
    int16_t i_2
    int32_t i_1 = sx.d(i_2)
    
    if (i_1 s> 0)
        void* eax = &var_112
        int32_t i
        
        do
            ebx.b = *eax
            
            if (ebx.b == arg2)
                result.b = 1
            
            eax += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
