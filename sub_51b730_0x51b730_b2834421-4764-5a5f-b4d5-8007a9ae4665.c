// ============================================================
// 函数名称: sub_51b730
// 虚拟地址: 0x51b730
// WARP GUID: b2834421-4764-5a5f-b4d5-8007a9ae4665
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c9168, sub_47a1c0
// [被调用的父级函数]: sub_5223e8, sub_520a94
// ============================================================

void**sub_51b730()
{
    // 第一条实际指令: int32_t i_1 = *data_5300d0
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t edi_1 = 1
        void* ebx_2 = data_530678 + 4
        int32_t i
        
        do
            if (edi_1 != *(*data_5301f4 + 0x10020))
                sub_47a1c0(*ebx_2, *data_530a74, *data_530304, 0)
            
            edi_1 += 1
            ebx_2 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return sub_4c9168()
}
