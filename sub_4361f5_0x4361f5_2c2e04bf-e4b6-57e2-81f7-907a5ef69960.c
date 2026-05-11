// ============================================================
// 函数名称: sub_4361f5
// 虚拟地址: 0x4361f5
// WARP GUID: 2c2e04bf-e4b6-57e2-81f7-907a5ef69960
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4361e4
// ============================================================

int32_t __convention("regparm")sub_4361f5(char* arg1, int32_t arg2, void* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi, char arg7)
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    int16_t* edi
    int16_t temp0_1
    temp0_1, edi = __insd(arg6, arg2.w, eflags)
    *edi = temp0_1
    int32_t eflags_1
    int16_t temp0
    temp0, eflags_1 = __arpl_memw_gpr16(*(arg3 + 1 + (arg4 << 1) + 0x6f), arg5.w)
    *(arg3 + 1 + (arg4 << 1) + 0x6f) = temp0
    __outsb(arg2.w, *arg5, arg5, eflags_1)
    char* entry_ebx
    *(entry_ebx + 0x74)
    void* esi_1 = *(entry_ebx + 0x74) * 0x436204
    bool c = unimplemented  {imul esi, dword [ebx+0x74], 0x436204}
    int32_t temp2 = *(entry_ebx + (arg1 << 1) + 0x75)
    *(entry_ebx + (arg1 << 1) + 0x75) = adc.d(temp2, arg2, c)
    
    if (adc.d(temp2, arg2, c) u< temp2 || (c && adc.d(temp2, arg2, c) == temp2))
        jump("omActionList")
    
    *(entry_ebx + arg3 + 1) += entry_ebx.b
    arg1[0x61] += entry_ebx:1.b
    arg1[0x41] += arg1.b
    arg1[0x64] += (arg3 + 3).b
    arg1[0xac00436d] += arg2.b
    *(arg3 + 0x618c0045) += arg2.b
    arg7 += arg2:1.b
    *edi += arg1.b
    arg1[0x6c004166] += arg2:1.b
    void* ecx_5
    ecx_5.w = (arg3 + 6).w + 1
    *(esi_1 + 0x41) += arg2:1.b
    arg1[0x66] += arg2:1.b
    *(arg4 + 0xe0043) += (entry_ebx.w + 2).b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1.b += *arg1
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[arg2 + 0x600040] += (entry_ebx.w + 2):1.b
    *arg1 += arg1.b
    arg1.b += *arg1
    __out_dx_oeax(arg2.w, arg1, eflags_1)
    *0x5400400c = arg1
    undefined
}
