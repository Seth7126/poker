// ============================================================
// 函数名称: sub_40d7c0
// 虚拟地址: 0x40d7c0
// WARP GUID: 80a439e0-22d3-5197-bc85-283bcd253e03
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_406510, sub_40d86b, sub_40d892, sub_40d876
// [被调用的父级函数]: 无
// ============================================================

int16_t __convention("regparm")sub_40d7c0(char* arg1, long double* arg2, int16_t arg3 @ x87control, long double arg4 @ st0, long double arg5 @ st1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    char* esi = arg1
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg3)
    __fnclex()
    int16_t x87control
    int16_t x87status_2
    x87control, x87status_2 = __fldcw_memmem16(0x133f)
    sub_40d86b(esi)
    int16_t ebx
    ebx:1.b = *esi
    
    if (ebx:1.b == 0x2b || ebx:1.b == 0x2d)
        esi = &esi[1]
    
    char* ecx_1 = esi
    long double x87_r7_1 = sub_40d876(ebp, esi, float.t(0))
    uint32_t edx = 0
    
    if (*esi == data_5314fb)
        esi = &esi[1]
        int32_t edx_1
        long double st0_1
        st0_1, edx_1 = sub_40d876(ebp, esi, x87_r7_1)
        x87_r7_1 = st0_1
        edx = neg.d(edx_1)
    
    int16_t result
    
    if (ecx_1 == esi)
        result = 0
    else
        if ((*esi & 0xdf) == 0x45)
            esi = &esi[1]
            edx += sub_40d892(esi)
        
        sub_40d86b(esi)
        
        if (*esi != 0)
            result = 0
        else
            uint32_t eax_2 = edx
            
            if (ebx.b == 1)
                eax_2 += 4
            
            sub_406510(eax_2, x87_r7_1)
            
            if (ebx:1.b == 0x2d)
                arg4 = fneg(arg4)
            
            int16_t top_1
            bool c1
            
            if (ebx.b == 0)
                *arg2 = arg4
                top_1 = 1
            else
                *arg2 = int.q(arg5)
                top_1 = 2
                c1 = unimplemented  {fistp qword [edi], st0}
            
            bool c0
            bool c2
            bool c3
            
            if ((((c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
                    | (top_1 & 7) << 0xb) & 9) != 0)
                result = 0
            else
                result.b = 1
    
    __fnclex()
    int16_t x87control_1
    int16_t x87status_4
    x87control_1, x87status_4 = __fldcw_memmem16(temp0)
    return result
}
