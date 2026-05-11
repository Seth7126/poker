// ============================================================
// 函数名称: sub_4292f8
// 虚拟地址: 0x4292f8
// WARP GUID: d448429b-7e05-5279-b98d-4e16c266dda7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowRect, PtInRect
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_429364
// ============================================================

int32_t __stdcallsub_4292f8(HWND arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 == arg2[1])
    if (arg1 == arg2[1])
        return 0
    
    if (arg2[2] == 0)
        RECT var_14
        GetWindowRect(arg1, &var_14)
        int32_t var_24_2 = arg2[4]
        
        if (PtInRect(&var_14, arg2[3]) != 0)
            arg2[2] = arg1
    
    int32_t result
    
    if (arg1 != arg2[2])
        if (arg1 != *arg2)
            return 0xffffffff
        
        result = 0xffffffff
        arg2[2] = 0
    else
        result = 0
        arg2[5].b = 1
    
    return result
}
