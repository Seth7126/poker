// ============================================================
// 函数名称: sub_49c0d4
// 虚拟地址: 0x49c0d4
// WARP GUID: e2a8d409-3225-5104-bdc5-47ca85792764
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_49c0d4(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[3] == 0)
    if (arg1[3] == 0)
        int32_t edx
        edx.b = 1
        int32_t ecx
        arg1[3] = sub_4030a0(ecx, edx)
    
    (**arg1)()
    return arg1[3]
}
