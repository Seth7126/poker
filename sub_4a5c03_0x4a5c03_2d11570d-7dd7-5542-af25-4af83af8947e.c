// ============================================================
// 函数名称: sub_4a5c03
// 虚拟地址: 0x4a5c03
// WARP GUID: 2d11570d-7dd7-5542-af25-4af83af8947e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403248, sub_403e4c, sub_410c00, sub_4a5c8c, sub_4a5c6c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a5c03(char* arg1, int32_t arg2, char* arg3, uint16_t* arg4 @ esi)
{
    // 第一条实际指令: *arg3 += arg1.b
    *arg3 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    char temp0 = arg1[0x54080002]
    arg1[0x54080002] += arg1.b
    
    if (temp0 + arg1.b s< 0)
        return sub_4a5c8c(arg1, arg2 - 1) __tailcall
    
    int32_t entry_ebx
    int32_t var_8 = entry_ebx + 1
    int32_t eflags
    int32_t var_c = __outsd((arg2 - 1).w, *arg4, arg4, eflags)
    
    if (sub_403248(arg2 - 1, &data_4a5b50) == 0)
        sub_410c00(arg1, arg2 - 1)
        noreturn
    
    sub_4a5c6c(arg2 - 1)
    *(arg2 + 0xb) = *(arg1 + 0xc)
    *(arg1 + 0x10)
    (*(**(arg2 + 0xf) + 8))()
    return sub_403e4c(arg2 + 0x13, *(arg1 + 0x14))
}
