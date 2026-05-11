// ============================================================
// 函数名称: sub_442deb
// 虚拟地址: 0x442deb
// WARP GUID: 85a8a955-46c2-57ee-8ab3-fd54250de443
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MulDiv
// [内部子函数调用]: sub_44317c, sub_431420, sub_442ed4, sub_418b70, sub_42b220, sub_4431ac, sub_442028, sub_42b1dc, sub_418b8c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_442deb(char* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg2:1.b
    *arg1 += arg1.b
    int32_t entry_ebx
    entry_ebx.b += arg1.b
    int32_t var_4 = entry_ebx
    sub_442028(arg1, arg2, arg3)
    sub_431420(arg1, arg2, arg3)
    
    if (sub_442ed4(arg1) != 0)
        int32_t nNumber = sub_42b220(arg1)
        sub_44317c(arg1, MulDiv(sub_42b1dc(arg1), arg2, arg3))
        sub_4431ac(arg1, MulDiv(nNumber, arg2, arg3))
    
    void* ebp_2 = *(arg1 + 0x58)
    return sub_418b8c(ebp_2, MulDiv(sub_418b70(ebp_2), arg2, arg3))
}
