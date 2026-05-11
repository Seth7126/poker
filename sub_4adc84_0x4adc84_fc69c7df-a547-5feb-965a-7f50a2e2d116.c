// ============================================================
// 函数名称: sub_4adc84
// 虚拟地址: 0x4adc84
// WARP GUID: fc69c7df-a547-5feb-965a-7f50a2e2d116
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_4030d0, sub_410fe0, sub_40cc98, sub_403430, sub_410ee4, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4adc84(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    sub_403430(arg1, arg2)
    var_8:3.b = arg2.b
    void* ebp = sub_410fe0(arg1)
    int32_t i_2 = (*(*arg1[7] + 0x14))()
    
    if (add_overflow(i_2, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i_2 - 1 s>= 0)
        int32_t i_1 = i_2
        int32_t edi_1 = 0
        int32_t i
        
        do
            sub_4030d0((*(*arg1[7] + 0x18))())
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_40cc98(&arg1[7])
    sub_40cc98(&arg1[8])
    int32_t edx_2
    edx_2.b = *(ebp - 1)
    edx_2.b &= 0xfc
    int32_t result = sub_410ee4(arg1, edx_2)
    
    if (*(ebp - 1) s<= 0)
        return result
    
    return sub_403420(arg1)
}
