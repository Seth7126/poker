// ============================================================
// 函数名称: sub_419b60
// 虚拟地址: 0x419b60
// WARP GUID: 36929a32-1259-5948-868c-7b09465ca8e8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SelectObject
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_419bc0, sub_418028
// ============================================================

void __convention("regparm")sub_419b60(int32_t arg1)
{
    // 第一条实际指令: int32_t ebx = arg1
    int32_t ebx = arg1
    HDC hdc = *(ebx + 4)
    
    if (hdc == 0)
        return 
    
    arg1.b = 0xe
    arg1.b = not.d(arg1).b & *(ebx + 8)
    
    if (*(ebx + 8) == arg1.b)
        return 
    
    SelectObject(hdc, data_531660)
    SelectObject(*(ebx + 4), data_531664)
    SelectObject(*(ebx + 4), data_531668)
    HGDIOBJ eax_5
    eax_5.b = 0xe
    arg1.b = not.d(eax_5).b & *(ebx + 8)
    *(ebx + 8) = arg1.b
}
