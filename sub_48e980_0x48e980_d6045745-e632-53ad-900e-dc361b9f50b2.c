// ============================================================
// 函数名称: sub_48e980
// 虚拟地址: 0x48e980
// WARP GUID: d6045745-e632-53ad-900e-dc361b9f50b2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: sub_4702a8, sub_506f9c, sub_4727af, sub_472854, sub_527454, sub_4dad04
// ============================================================

int32_t __convention("regparm")sub_48e980(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: uint32_t eax = GetTickCount()
    uint32_t eax = GetTickCount()
    
    if (arg2 u> 0x14)
        sub_403008()
        noreturn
    
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(arg1 + 0x1234 + (arg2 << 2)))
    int32_t var_1c_1 = eax - eax_2
    
    if (var_1c_1 s>> 0x1f != sbb.d(0, edx, eax u< eax_2))
        sub_403008()
        noreturn
    
    if (var_1c_1 s> 0)
        if (arg2 u> 0x14)
            sub_403008()
            noreturn
        
        int32_t temp1_1 = *(arg1 + 0x1234 + (arg2 << 2) + 0x54)
        *(arg1 + 0x1234 + (arg2 << 2) + 0x54) += var_1c_1
        
        if (add_overflow(temp1_1, var_1c_1))
            sub_403010()
            noreturn
    
    int32_t result
    result.b = arg3:3.b
    return result
}
