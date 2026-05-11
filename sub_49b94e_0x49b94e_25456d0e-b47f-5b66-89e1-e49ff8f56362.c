// ============================================================
// 函数名称: sub_49b94e
// 虚拟地址: 0x49b94e
// WARP GUID: 25456d0e-b47f-5b66-89e1-e49ff8f56362
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49b963
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_49b94e(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ edi)
{
    // 第一条实际指令: *(arg4 + (arg1 << 3)) += arg1.b
    *(arg4 + (arg1 << 3)) += arg1.b
    int32_t entry_ebx
    *(arg2 + (arg4 << 2) + 0x49) += entry_ebx.b
    *((arg1 << 3) + 0x540f0049) += (arg3 - 2).b
    int32_t var_4 = entry_ebx
    
    if (arg3 != 3)
        int32_t ebp
        return sub_49b963(arg3 - 3, arg2, ebp.w) __tailcall
    
    int32_t eflags
    uint8_t* edi
    uint8_t temp0_1
    temp0_1, edi = __insb(arg4, arg2.w, eflags)
    *edi = temp0_1
    undefined
}
