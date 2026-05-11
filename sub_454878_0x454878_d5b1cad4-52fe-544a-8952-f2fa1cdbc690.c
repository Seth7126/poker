// ============================================================
// 函数名称: sub_454878
// 虚拟地址: 0x454878
// WARP GUID: d5b1cad4-52fe-544a-8952-f2fa1cdbc690
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetDeviceCaps, ReleaseDC, GetDC
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_466a2c
// ============================================================

int32_tsub_454878()
{
    // 第一条实际指令: HDC eax = GetDC(nullptr)
    HDC eax = GetDC(nullptr)
    
    if (GetDeviceCaps(eax, 0xc) * GetDeviceCaps(eax, 0xe) s> 8)
        data_52eb7b = 0
    else
        data_52eb7b = 1
    
    return ReleaseDC(nullptr, eax)
}
