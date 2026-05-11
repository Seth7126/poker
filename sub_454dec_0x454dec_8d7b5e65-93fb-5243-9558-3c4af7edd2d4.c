// ============================================================
// 函数名称: sub_454dec
// 虚拟地址: 0x454dec
// WARP GUID: 8d7b5e65-93fb-5243-9558-3c4af7edd2d4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_454e00, sub_454f30
// ============================================================

int32_t __convention("regparm")sub_454dec(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ecx = *arg1
    void* ecx = *arg1
    *(ecx + 0x14) = 0x35
    *(ecx + 0x18) = arg2
    return (**arg1)()
}
