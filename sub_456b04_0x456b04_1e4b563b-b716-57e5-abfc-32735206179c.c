// ============================================================
// 函数名称: sub_456b04
// 虚拟地址: 0x456b04
// WARP GUID: 1e4b563b-b716-57e5-abfc-32735206179c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_456b04(int32_t* arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x196)
    void* esi = *(arg1 + 0x196)
    
    if (arg1[4] != 0xcf)
        void* eax = *arg1
        *(eax + 0x14) = 0x12
        *(eax + 0x18) = arg1[4]
        (**arg1)()
    
    if (arg1[0x14] == 0 || arg1[0x19] == 0 || arg1[0x21] == 0)
        *(*arg1 + 0x14) = 0x2d
        return (**arg1)()
    
    *(arg1 + 0x1be) = *(esi + 0x18)
    int32_t result = (*(*(arg1 + 0x1be) + 0xc))()
    *(esi + 8) = 0
    return result
}
