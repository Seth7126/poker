// ============================================================
// 函数名称: sub_404524
// 虚拟地址: 0x404524
// WARP GUID: c1243b07-e064-5a96-98d6-e802e47888a5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SysReAllocStringLen
// [内部子函数调用]: sub_4044e8, sub_4027e0
// [被调用的父级函数]: sub_40e288, sub_40496c, sub_404a88
// ============================================================

int32_t __convention("regparm")sub_404524(BSTR* arg1, PWSTR arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        return sub_4044e8(arg1) __tailcall
    
    uint32_t len = *(arg2 - 4) u>> 1
    
    if (len == 0)
        return sub_4044e8(arg1) __tailcall
    
    int32_t result = SysReAllocStringLen(arg1, arg2, len)
    
    if (result != 0)
        return result
    
    result.b = 1
    noreturn sub_4027e0(result) __tailcall
}
