// ============================================================
// 函数名称: sub_439754
// 虚拟地址: 0x439754
// WARP GUID: b20a60ea-9fd6-5b76-8a03-4bbef2d65a83
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4368f0, sub_43e2f4, sub_403260
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_439754(void* arg1)
{
    // 第一条实际指令: if (sub_4368f0(arg1) != 0)
    if (sub_4368f0(arg1) != 0)
        int32_t* eax_2 = *(arg1 + 0x10)
        sub_403260(eax_2, &data_436278)
        
        if (sub_43e2f4(*(*(arg1 + 0x18) + 0x24), eax_2[0x15]) != 0)
            return 1
    
    return 0
}
