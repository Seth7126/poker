// ============================================================
// 函数名称: sub_41f524
// 虚拟地址: 0x41f524
// WARP GUID: b197007f-d243-5084-9751-5153e0c6488b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DestroyIcon
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41f524(void* arg1)
{
    // 第一条实际指令: HICON hIcon = *(arg1 + 8)
    HICON hIcon = *(arg1 + 8)
    
    if (hIcon != 0)
        DestroyIcon(hIcon)
    
    *(arg1 + 8) = 0
    return 0
}
