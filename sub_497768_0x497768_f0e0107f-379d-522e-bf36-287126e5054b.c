// ============================================================
// 函数名称: sub_497768
// 虚拟地址: 0x497768
// WARP GUID: f0e0107f-379d-522e-bf36-287126e5054b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_497768(void* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg2 u< 1)
    if (arg2 u< 1)
        void* eax = *(arg1 + 0x80)
        *arg3 = *(eax + 0xa0)
        arg3[1] = *(eax + 0xa4)
        return 
    
    if (arg2 == 1)
        void* eax_1 = *(arg1 + 0x80)
        *arg3 = *(eax_1 + 0xa8)
        arg3[1] = *(eax_1 + 0xac)
        return 
    
    if (arg2 == 2)
        void* eax_2 = *(arg1 + 0x80)
        *arg3 = *(eax_2 + 0x90)
        arg3[1] = *(eax_2 + 0x94)
        return 
    
    if (arg2 != 3)
        return 
    
    arg1 = *(arg1 + 0x80)
    *arg3 = *(arg1 + 0x98)
    arg3[1] = *(arg1 + 0x9c)
}
