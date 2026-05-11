// ============================================================
// 函数名称: sub_4408d0
// 虚拟地址: 0x4408d0
// WARP GUID: 9a88448e-ebb8-5ee8-8c79-a07d0b668c92
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ShowOwnedPopups
// [内部子函数调用]: sub_415fc8, sub_415f70, sub_4498a0
// [被调用的父级函数]: sub_4493c8
// ============================================================

int32_tsub_4408d0()
{
    // 第一条实际指令: HWND hWnd = *(data_5317d8 + 0x24)
    HWND hWnd = *(data_5317d8 + 0x24)
    
    if (hWnd != 0)
        ShowOwnedPopups(hWnd, 0)
    
    sub_4498a0(data_5317d8, 0)
    sub_415fc8(data_5317d8)
    return sub_415f70(data_5317d8)
}
