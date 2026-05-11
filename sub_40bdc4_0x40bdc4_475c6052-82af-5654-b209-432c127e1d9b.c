// ============================================================
// 函数名称: sub_40bdc4
// 虚拟地址: 0x40bdc4
// WARP GUID: 475c6052-82af-5654-b209-432c127e1d9b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40423c, sub_40bd4c
// [被调用的父级函数]: sub_4091b0, sub_40bfb0, sub_409180
// ============================================================

int32_t __convention("regparm")sub_40bdc4(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (data_5315bc == 0)
    if (data_5315bc == 0)
        return 0
    
    return sub_40bd4c(sub_40423c(arg1), arg2 - 1)
}
