// ============================================================
// 函数名称: sub_4a7ca4
// 虚拟地址: 0x4a7ca4
// WARP GUID: 61ba1f8e-7274-5107-923c-a8639fbe6acf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4128a4, sub_4128b4
// [被调用的父级函数]: sub_4a7cd8
// ============================================================

int32_t __convention("regparm")sub_4a7ca4(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_1 = sub_4128a4(arg1)
    int32_t eax_1 = sub_4128a4(arg1)
    (**arg1)()
    int32_t result = sub_4128a4(arg1)
    
    if (eax_1 == result)
        return result
    
    return sub_4128b4(arg1)
}
