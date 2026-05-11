// ============================================================
// 函数名称: sub_4b2a3c
// 虚拟地址: 0x4b2a3c
// WARP GUID: 2bf03fef-3417-5db3-a31d-90635fecd5a6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_431bcc, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

LRESULT __convention("regparm")sub_4b2a3c(int32_t* arg1)
{
    // 第一条实际指令: if (sub_431bcc(arg1) == 0)
    if (sub_431bcc(arg1) == 0)
        return arg1[0x7f]
    
    return SendMessageA(sub_4318d0(arg1), 0x41c, 0, 0)
}
