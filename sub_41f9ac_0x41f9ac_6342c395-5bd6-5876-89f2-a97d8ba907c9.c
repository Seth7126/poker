// ============================================================
// 函数名称: sub_41f9ac
// 虚拟地址: 0x41f9ac
// WARP GUID: 6342c395-5bd6-5876-89f2-a97d8ba907c9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetDeviceCaps, ReleaseDC, GetDC
// [内部子函数调用]: sub_41a478
// [被调用的父级函数]: sub_41feac
// ============================================================

int32_tsub_41f9ac()
{
    // 第一条实际指令: HDC eax = GetDC(nullptr)
    HDC eax = GetDC(nullptr)
    data_53165c = GetDeviceCaps(eax, 0x5a)
    ReleaseDC(nullptr, eax)
    int32_t result = sub_41a478()
    data_531654 = result
    return result
}
