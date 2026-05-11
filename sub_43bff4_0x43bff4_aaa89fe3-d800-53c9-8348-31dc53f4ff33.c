// ============================================================
// 函数名称: sub_43bff4
// 虚拟地址: 0x43bff4
// WARP GUID: aaa89fe3-d800-53c9-8348-31dc53f4ff33
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_43b94c
// [被调用的父级函数]: sub_43bd98
// ============================================================

int32_t __convention("regparm")sub_43bff4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = sub_43b94c(arg1)
    int32_t result = sub_43b94c(arg1)
    
    if (arg2 != result)
        return result
    
    int32_t ebx
    ebx.w = 0xfff0
    return sub_4032ac(arg1, arg2, 0)
}
