// ============================================================
// 函数名称: sub_4419f4
// 虚拟地址: 0x4419f4
// WARP GUID: c37663e0-e836-55e1-9989-1acc935f87db
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4418ec, sub_441308, sub_441770, sub_4318d0
// [被调用的父级函数]: sub_441dc4
// ============================================================

uint32_t __convention("regparm")sub_4419f4(uint32_t arg1)
{
    // 第一条实际指令: char ecx
    char ecx
    char var_a = ecx
    *(arg1 + 0x14) = 0
    int16_t ebx = 0
    
    if (*(arg1 + 0x18) == 1)
        ebx = 1
    
    if (*(arg1 + 0x1c) != 0)
        int32_t eax_4 = sub_441308(arg1)
        int32_t edi_2 = *(arg1 + 0x10) - eax_4
        *(arg1 + 0x14) = edi_2
        
        if (edi_2 s< 0)
            *(arg1 + 0x14) = 0
    
    int32_t var_26 = 0x1c
    int32_t var_22 = 0x17
    int32_t var_1e = 0
    
    if (*(arg1 + 0x14) s<= 0)
        int32_t var_1a_1 = 0
    else
        int32_t var_1a = *(arg1 + 0x10)
    
    int32_t eax_11
    void* edx_2
    eax_11, edx_2 = sub_441308(arg1)
    int32_t var_16 = eax_11 + 1
    int32_t eax_14 = *(arg1 + 0xc)
    int32_t var_12 = eax_14
    int32_t var_e = eax_14
    int32_t __saved_ebp
    int32_t* var_38 = &__saved_ebp
    uint32_t eax_15
    eax_15.b = *(arg1 + 0x44)
    sub_4418ec(eax_15, edx_2)
    *(arg1 + 0x44) = 0
    (*data_530628)(sub_4318d0(*(arg1 + 4)), zx.d(ebx), &var_26, 0xffffffff)
    sub_441770(arg1, *(arg1 + 0xc))
    int32_t edx_4
    edx_4.b = 1
    int16_t temp0 = (divs.dp.d(sx.q(sub_441308(arg1) * 9), 0xa)).w
    *(arg1 + 0xa) = temp0
    uint32_t result = arg1
    
    if (*(result + 0x1f) != 0)
        result = divu.dp.d(0:(zx.d(temp0)), 0xa)
        *(arg1 + 8) = result.w
    
    return result
}
