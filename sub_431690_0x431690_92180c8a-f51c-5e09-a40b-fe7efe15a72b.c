// ============================================================
// 函数名称: sub_431690
// 虚拟地址: 0x431690
// WARP GUID: 92180c8a-f51c-5e09-a40b-fe7efe15a72b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos
// [内部子函数调用]: sub_4315b8
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_431690(BOOL arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x24)
    void* ebx = *(arg1 + 0x24)
    
    if (ebx == 0)
        HWND hWnd = *(arg1 + 0x14c)
        
        if (hWnd != 0)
            SetWindowPos(hWnd, zx.d(*(((arg2 & 0x7f) << 1) + &data_52e808)), 0, 0, 0, 0, 0x3)
        
        return 
    
    void* const ecx_1
    
    if (arg2.b == 0)
        ecx_1 = nullptr
    else
        ecx_1 = *(*(ebx + 0x180) + 8) - 1
    
    int32_t edx_1 = 0
    void* esi = *(ebx + 0x134)
    
    if (esi != 0)
        edx_1 = *(esi + 8)
    
    sub_4315b8(arg1, ecx_1 + edx_1)
}
