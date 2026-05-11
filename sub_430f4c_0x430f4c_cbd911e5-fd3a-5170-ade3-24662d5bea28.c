// ============================================================
// 函数名称: sub_430f4c
// 虚拟地址: 0x430f4c
// WARP GUID: cbd911e5-fd3a-5170-ade3-24662d5bea28
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos
// [内部子函数调用]: sub_431bcc, sub_4318d0
// [被调用的父级函数]: sub_44bec8
// ============================================================

int32_t __convention("regparm")sub_430f4c(int32_t* arg1)
{
    // 第一条实际指令: (*(*arg1 - 0x10))()
    (*(*arg1 - 0x10))()
    char result = sub_431bcc(arg1)
    
    if (result == 0)
        return result
    
    return SetWindowPos(sub_4318d0(arg1), nullptr, 0, 0, 0, 0, 0x37)
}
