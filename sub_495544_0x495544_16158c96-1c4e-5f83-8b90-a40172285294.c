// ============================================================
// 函数名称: sub_495544
// 虚拟地址: 0x495544
// WARP GUID: 16158c96-1c4e-5f83-8b90-a40172285294
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: PostMessageA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_496d04
// ============================================================

void __convention("regparm")sub_495544(BOOL arg1)
{
    // 第一条实际指令: HWND hWnd = *(arg1 + 0x14)
    HWND hWnd = *(arg1 + 0x14)
    
    if (hWnd != 0)
        PostMessageA(hWnd, 0x402, 0, 0)
}
