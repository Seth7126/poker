// ============================================================
// 函数名称: sub_46ae30
// 虚拟地址: 0x46ae30
// WARP GUID: 5b1aebb2-78e9-518a-b7d1-a1c66f2cf34f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402e64, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_488509, sub_484e24
// ============================================================

int32_t __fastcallsub_46ae30(char arg1, int32_t arg2, void* arg3 @ eax, float arg4)
{
    // 第一条实际指令: int32_t var_2c
    int32_t var_2c
    sub_402e64(&var_2c, (*(arg3 + 0x10d8)).b, 0x20)
    int32_t eax_1 = *(arg3 + 0x10e0)
    
    if (eax_1 u<= 0xff)
        var_2c |= 1 << (eax_1 u% 0x20)
    
    bool c = arg2 u< 0xff
    
    if (arg2 == 0xff || c)
        c = test_bit(var_2c, arg2)
    
    if (c)
        return 0
    
    float var_c_1
    
    if (arg1 == 0)
        var_c_1 = fconvert.s((fconvert.t(1f) - fconvert.t(arg4)) * data_46af30)
    else
        var_c_1 = fconvert.s(fneg(fconvert.t(1f) - fconvert.t(arg4)) * data_46af30)
    
    if (arg2 != 0x2b)
        int32_t eax_3 = arg2 * 0x1038
        bool o_1 = unimplemented  {imul eax, esi, 0x1038}
        
        if (o_1)
            sub_403010()
            noreturn
        
        int32_t edx_2 = sx.d(*(*(arg3 + 0xab0) + (eax_3 << 3) + 2))
        int32_t eax_4 = sx.d(*(*(arg3 + 0xab0) + (eax_3 << 3) + 6))
        
        if (add_overflow(edx_2, eax_4))
            sub_403010()
            noreturn
        
        if (edx_2 + eax_4 s> 0x320)
            (*data_5301d4)(var_c_1, 0, 0)
            return sub_402b4c(fconvert.t(var_c_1) * fconvert.t(639f))
        
        bool o_3 = unimplemented  {imul eax, esi, 0x1038}
        
        if (o_3)
            sub_403010()
            noreturn
        
        if (*(*(arg3 + 0xab0) + arg2 * 0x81c0 + 2) s< 0xa)
            (*data_5301d4)(var_c_1, 0, 0)
            return sub_402b4c(fconvert.t(var_c_1) * fconvert.t(639f))
    
    return 0
}
