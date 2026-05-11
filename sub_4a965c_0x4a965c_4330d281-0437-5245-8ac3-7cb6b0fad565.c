// ============================================================
// 函数名称: sub_4a965c
// 虚拟地址: 0x4a965c
// WARP GUID: 4330d281-0437-5245-8ac3-7cb6b0fad565
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_494050, sub_494048, sub_40cc98, sub_49e5d4
// [被调用的父级函数]: sub_4a96a4
// ============================================================

voidsub_4a965c()
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_8 = ebx
    
    while (data_5325bc != 0)
        sub_494048(data_5325bc)
        ebx.b = data_5325c0 == 0
        sub_494050(data_5325bc)
        
        if (ebx.b == 0)
            sub_49e5d4(0x1388)
        else
            sub_40cc98(&data_5325bc)
}
