// ============================================================
// 函数名称: sub_496423
// 虚拟地址: 0x496423
// WARP GUID: 319c450c-4174-5ef1-a4ad-9dd8ce0538b8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_49649c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_496423(int32_t* arg1, int32_t arg2, void* arg3, uint16_t* arg4 @ esi)
{
    // 第一条实际指令: *(arg1 * 2) -= 1
    *(arg1 * 2) -= 1
    *arg1 += arg1.b
    void* entry_ebx
    void* var_4 = entry_ebx
    
    if (arg3 + 1 s>= 0)
        *arg1 += arg1.b
        return sub_49649c(arg3 + 1, arg2, arg1, __return_addr) __tailcall
    
    int32_t eflags
    int16_t temp0
    temp0, eflags = __arpl_memw_gpr16(*arg1, &var_4)
    *arg1 = temp0
    uint16_t* esi = __outsd(arg2.w, *arg4, arg4, eflags)
    __outsd(arg2.w, *esi, esi, eflags)
    *arg1 += arg1.b
    *(entry_ebx - 0x3a) += arg2.b
    *(arg3 + 1) |= (arg1 + 1).b
    char* ecx
    ecx.b = 2
    entry_ebx.w = 0xffff
    return sub_4032ac(arg1 + 1, arg1 + 1, ecx)
}
