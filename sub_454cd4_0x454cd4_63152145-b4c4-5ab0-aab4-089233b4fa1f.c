// ============================================================
// 函数名称: sub_454cd4
// 虚拟地址: 0x454cd4
// WARP GUID: 63152145-b4c4-5ab0-aab4-089233b4fa1f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_454cd4(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = arg1[4]
    int32_t eax = arg1[4]
    
    if (eax s< 0xc8 || eax s> 0xd2)
        void* eax_1 = *arg1
        *(eax_1 + 0x14) = 0x12
        *(eax_1 + 0x18) = arg1[4]
        (**arg1)()
    
    return *(*(arg1 + 0x1a6) + 0x14)
}
