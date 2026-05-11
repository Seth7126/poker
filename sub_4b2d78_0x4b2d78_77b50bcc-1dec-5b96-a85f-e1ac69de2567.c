// ============================================================
// 函数名称: sub_4b2d78
// 虚拟地址: 0x4b2d78
// WARP GUID: 77b50bcc-1dec-5b96-a85f-e1ac69de2567
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_407788, sub_431bcc, sub_4318d0
// [被调用的父级函数]: sub_4b2df0, sub_4b28bf, sub_4b2ddc
// ============================================================

int32_t __convention("regparm")sub_4b2d78(int32_t* arg1)
{
    // 第一条实际指令: int16_t result = sub_431bcc(arg1)
    int16_t result = sub_431bcc(arg1)
    
    if (result.b == 0)
        return result
    
    if (arg1[0x85] == 0 && arg1[0x86] == 0)
        return SendMessageA(sub_4318d0(arg1), 0x413, 1, 0)
    
    uint32_t lParam = sub_407788(arg1[0x85].w, arg1[0x86].w)
    return SendMessageA(sub_4318d0(arg1), 0x40a, 1, lParam)
}
