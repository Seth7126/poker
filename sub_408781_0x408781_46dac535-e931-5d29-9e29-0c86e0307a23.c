// ============================================================
// 函数名称: sub_408781
// 虚拟地址: 0x408781
// WARP GUID: 46dac535-e931-5d29-9e29-0c86e0307a23
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_40b4b0, sub_40b4ec
// [被调用的父级函数]: 无
// ============================================================

char* __convention("regparm")sub_408781(char* arg1, void* arg2, int16_t* arg3, void* arg4 @ ebp, char* arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: arg1.b ^= *arg1
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (&arg1[1]).b
    arg1[2] += arg3.b
    char* result = &arg1[2] ^ *(arg1 + 2)
    result.b ^= *result
    TEB* fsbase
    char temp3 = *(fsbase + result) ^ result.b
    *(fsbase + result) = temp3
    char* var_4
    
    if (temp3 s< 0)
        var_4 = entry_ebx
        
        if (temp3 s>= 0)
            void* eax_5
            eax_5.b = (&result[1]).b + arg3:1.b
            
            if ((eax_5 & 0xe800002c) == 0 || arg3 == 1)
                undefined
            
            arg2.b = 1
            sub_40b4b0(0x40837c, arg2, eax_5)
            sub_403828()
            noreturn
        
        int32_t eflags
        int16_t temp0_1
        temp0_1, eflags = __arpl_memw_gpr16(*(result + 0x72), arg4.w)
        *(result + 0x72) = temp0_1
        uint16_t* esi = __outsd(arg2.w, *arg5, arg5, eflags)
        __outsb(arg2.w, *esi, esi, eflags)
        *(arg2 + 0x65)
        result.b = __in_al_dx(arg2.w, eflags)
        char* var_8 = entry_ebx
        int16_t ebx = arg2.w
        uint16_t edx_1 = (result u>> 0x10).w
        uint16_t temp1 = modu.dp.w(edx_1:(result.w), ebx)
        result.w = divu.dp.w(edx_1:(result.w), ebx)
        uint16_t* ebx_1 = *(arg4 + 8)
        *arg3 = result.w
        *ebx_1 = temp1
        return result
    
    *(arg3 * 9 + 0x40) += (&result[1]):1.b
    *arg5 += arg3.b
    result[1] += (&result[1]).b
    result[1] += (&result[1]).b
    *arg3 += (&result[1]).b
    result[1] += (&result[1]).b
    result[1] += arg2:1.b
    char* temp0 = *(result + 1)
    *(result + 1) = &result[1]
    *temp0 -= temp0.b
    *temp0 += temp0.b
    char* eax_3
    eax_3.b = temp0.b & 0x54
    
    if (arg4 == 1)
        if (arg4 == 1)
            jump(sub_40880c+0x16)
        
        jump(&data_4087b2[7])
    
    var_4 = *eax_3
    *(fsbase + eax_3) = &var_4
    char* var_8_1 = arg5
    sub_405ae8(entry_ebx, arg4 - 5)
    int32_t edx_3
    edx_3.b = 1
    sub_40b4ec(0x40837c, edx_3, *(arg4 - 5), arg6)
    sub_403828()
    noreturn
}
