// ============================================================
// 函数名称: sub_440908
// 虚拟地址: 0x440908
// WARP GUID: 7ca45123-2af8-55cd-a7ca-4f77ae92df98
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: EnableWindow, IsWindowEnabled, IsWindowVisible
// [内部子函数调用]: sub_402754
// [被调用的父级函数]: sub_440958
// ============================================================

int32_t __stdcallsub_440908(HWND arg1)
{
    // 第一条实际指令: if (arg1 != data_52e984 && IsWindowVisible(arg1) != 0 && IsWindowEnabled(arg1) != 0)
    if (arg1 != data_52e984 && IsWindowVisible(arg1) != 0 && IsWindowEnabled(arg1) != 0)
        int32_t* eax_3 = sub_402754(8)
        *eax_3 = data_52e990
        eax_3[1] = arg1
        data_52e990 = eax_3
        EnableWindow(arg1, 0)
    
    return 0xffffffff
}
