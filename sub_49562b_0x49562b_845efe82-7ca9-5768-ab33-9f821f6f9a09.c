// ============================================================
// 函数名称: sub_49562b
// 虚拟地址: 0x49562b
// WARP GUID: 845efe82-7ca9-5768-ab33-9f821f6f9a09
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_440cb8, sub_495638
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_49562b(char* arg1, int16_t arg2, int32_t arg3, int32_t arg4 @ ebp, int32_t* arg5 @ esi, void* arg6 @ edi)
{
    // 第一条实际指令: *arg5 += 1
    *arg5 += 1
    *arg1 += arg1.b
    char temp1 = *(arg3 + (arg4 << 1) + 0x73)
    *(arg3 + (arg4 << 1) + 0x73) += arg3:1.b
    
    if (temp1 != neg.b(arg3:1.b))
        int32_t eflags
        __outsb(arg2, *arg5, arg5, eflags)
        *arg1 += arg1.b
        return sub_495638(arg1) __tailcall
    
    *arg1 += arg1.b
    int32_t eflags_1
    int16_t temp0
    temp0, eflags_1 = __arpl_memw_gpr16(*(arg6 + 0x6e), arg4.w)
    *(arg6 + 0x6e) = temp0
    uint16_t esi_1 = __outsb(arg2, *arg5, arg5, eflags_1)
    int32_t eflags_2
    int32_t gsbase
    int16_t temp0_1
    temp0_1, eflags_2 = __arpl_memw_gpr16(*(gsbase + arg1 * 2 + 0x53), esi_1)
    *(gsbase + arg1 * 2 + 0x53) = temp0_1
    
    if (*(arg1 + 0x14) == 0)
        *(arg1 + 0x14) = sub_440cb8(sub_496294, arg1.w, __return_addr)
    
    return *(arg1 + 0x14)
}
