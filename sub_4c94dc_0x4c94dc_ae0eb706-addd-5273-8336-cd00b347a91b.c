// ============================================================
// 函数名称: sub_4c94dc
// 虚拟地址: 0x4c94dc
// WARP GUID: ae0eb706-addd-5273-8336-cd00b347a91b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cb8e8
// [被调用的父级函数]: sub_4c96bc, sub_4dc090, sub_4c9540
// ============================================================

void*sub_4c94dc()
{
    // 第一条实际指令: void* eax_2
    void* eax_2
    
    if (sub_4cb8e8() == 0)
        if (*data_5300d0 != 8)
            *(data_530598 + 0x10) = 0x3f800000
        else
            __builtin_strncpy(data_530598 + 0x10, "fff?", 4)
        
        eax_2 = data_530598
        *(eax_2 + 0x10) = 0x3f59999a
    else
        if (*data_5300d0 != 8)
            void* eax_3 = data_530598
            *(eax_3 + 0x10) = 0x3f75c28f
            return eax_3
        
        eax_2 = data_530598
        *(eax_2 + 0x10) = 0x3f5d70a4
    
    return eax_2
}
