// ============================================================
// 函数名称: sub_46002c
// 虚拟地址: 0x46002c
// WARP GUID: 946f09a1-0e9a-543e-be40-327908784854
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45fb84
// [被调用的父级函数]: sub_4601e8
// ============================================================

int32_t __convention("regparm")sub_46002c(int32_t* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x192) == 0 && sub_45fb84(arg1) == 0)
    if (*(arg1 + 0x192) == 0 && sub_45fb84(arg1) == 0)
        return 0
    
    if (*(*(arg1 + 0x1aa) + 0x58) + 0xd0 != *(arg1 + 0x192))
        *(*(arg1 + 0x1aa) + 0x58)
        
        if ((*(arg1[5] + 0x14))() == 0)
            return 0
    else
        void* eax_3 = *arg1
        *(eax_3 + 0x14) = 0x61
        *(eax_3 + 0x18) = *(*(arg1 + 0x1aa) + 0x58)
        (*(*arg1 + 4))()
        *(arg1 + 0x192) = 0
    
    void* eax_8 = *(arg1 + 0x1aa)
    *(eax_8 + 0x58) = (*(eax_8 + 0x58) + 1) & 7
    return 1
}
