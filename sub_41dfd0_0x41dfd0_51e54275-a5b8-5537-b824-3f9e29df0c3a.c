// ============================================================
// 函数名称: sub_41dfd0
// 虚拟地址: 0x41dfd0
// WARP GUID: 51e54275-a5b8-5537-b824-3f9e29df0c3a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteObject
// [内部子函数调用]: sub_41dc74, sub_41e2f0, sub_419e90
// [被调用的父级函数]: sub_41dd34
// ============================================================

int32_t __convention("regparm")sub_41dfd0(int32_t arg1)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x20)
    void* ebx = *(arg1 + 0x20)
    
    if (*(ebx + 4) s> 1)
        sub_41e2f0(arg1)
        HPALETTE eax_1
        
        if (*(ebx + 0x71) == 0)
            eax_1 = *(ebx + 0x10)
        else
            eax_1 = nullptr
        
        return sub_41dc74(eax_1, *(ebx + 8), arg1, ebx + 0x18)
    
    int32_t result = *(ebx + 8)
    
    if (result != 0 && result != *(ebx + 0x14))
        HGDIOBJ ho = *(ebx + 0x14)
        
        if (ho != 0 && DeleteObject(ho) == 0)
            sub_419e90()
            noreturn
        
        *(ebx + 0x14) = 0
        result = 0
        *(ebx + 0x2c) = 0
    
    return result
}
