// ============================================================
// 函数名称: sub_41316c
// 虚拟地址: 0x41316c
// WARP GUID: bf272ebd-1e93-5811-981f-1244824b4a2e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4042c0, sub_403ee0
// [被调用的父级函数]: sub_4138b8
// ============================================================

void* __convention("regparm")sub_41316c(void* arg1)
{
    // 第一条实际指令: void* result = nullptr
    void* result = nullptr
    char* esi = *(arg1 + 0x14)
    char* ebx = esi
    
    while (true)
        char edx = *ebx
        
        if (edx == 0)
            break
        
        if (edx == 0x2e)
            break
        
        ebx = &ebx[1]
    
    if (*ebx != 0)
        void* ebp_2 = ebx - esi
        sub_403ee0(arg1 + 0x10, esi, ebp_2)
        sub_4042c0(arg1 + 0x14, 1, ebp_2 + 1)
        result.b = 1
    
    return result
}
