// ============================================================
// 函数名称: sub_442f0c
// 虚拟地址: 0x442f0c
// WARP GUID: 42f7db29-0385-5bfb-b8b9-14fe0b785855
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_443bb4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_442f0c(void* arg1)
{
    // 第一条实际指令: if (sub_443bb4(arg1) != 0)
    if (sub_443bb4(arg1) != 0)
        char eax_1 = *(arg1 + 0x211)
        char temp1_1
        
        if (eax_1 != 2)
            temp1_1 = eax_1 - 2
        
        if (eax_1 == 2 || temp1_1 == 3)
            eax_1 = 1
        else
            eax_1 = 0
        
        if (eax_1 != *(arg1 + 0x1f8))
            return 1
    
    return 0
}
