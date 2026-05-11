// ============================================================
// 函数名称: sub_440a44
// 虚拟地址: 0x440a44
// WARP GUID: c6e00960-3e49-5a97-8a04-928e058a3481
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IsWindowEnabled, IsWindowVisible, GetWindowLongA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_440aa8
// ============================================================

int32_t __stdcallsub_440a44(HWND arg1)
{
    // 第一条实际指令: if (arg1 != data_52e984 && arg1 != *(data_5317d8 + 0x24) && IsWindowVisible(arg1) != 0 && IsWindowEnabled(arg1) != 0)
    if (arg1 != data_52e984 && arg1 != *(data_5317d8 + 0x24) && IsWindowVisible(arg1) != 0
            && IsWindowEnabled(arg1) != 0)
        if ((GetWindowLongA(arg1, 0xffffffec) & 8) != 0)
            if (data_52e98c == 0)
                data_52e98c = arg1
        else if (data_52e988 == 0)
            data_52e988 = arg1
    
    return 0xffffffff
}
