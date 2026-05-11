// ============================================================
// 函数名称: sub_428d20
// 虚拟地址: 0x428d20
// WARP GUID: ba00ecbb-5342-5ded-90fe-7454fc3b4e4c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetParent
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: sub_428d48
// ============================================================

HWNDsub_428d20(void* arg1)
{
    // 第一条实际指令: HWND hWnd = sub_4318d0(*(arg1 - 4))
    HWND hWnd = sub_4318d0(*(arg1 - 4))
    HWND result = hWnd
    
    for (; hWnd != 0; hWnd = GetParent(hWnd))
        result = hWnd
    
    return result
}
