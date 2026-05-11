// ============================================================
// 函数名称: sub_49627b
// 虚拟地址: 0x49627b
// WARP GUID: c6620bf4-e961-58d0-857d-aa207d895aa6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49611c
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_49627b(int32_t* arg1, int16_t* arg2 @ esi)
{
    // 第一条实际指令: *(arg1 * 2) += 1
    *(arg1 * 2) += 1
    char temp1 = *arg1
    *arg1 += arg1.b
    void* entry_ebx
    
    if (temp1 + arg1.b u< temp1)
        int32_t var_4 = *(arg2 + entry_ebx + 0x3b)
        return 
    
    int32_t eflags
    int16_t temp0
    temp0, eflags = __arpl_memw_gpr16(*arg2, arg2.w)
    *arg2 = temp0
    *arg1 += arg1.b
    *(entry_ebx - 0x2dcc0037) += arg1.b
    int32_t ecx
    int32_t edx
    sub_49611c(arg1, edx, ecx)
}
