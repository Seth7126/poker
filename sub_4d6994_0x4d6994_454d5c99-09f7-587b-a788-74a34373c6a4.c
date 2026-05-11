// ============================================================
// 函数名称: sub_4d6994
// 虚拟地址: 0x4d6994
// WARP GUID: 454d5c99-09f7-587b-a788-74a34373c6a4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4836b0, sub_4c2418
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

void __convention("regparm")sub_4d6994(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != 1)
    if (arg2 != 1)
        if (arg2 == 2)
            sub_4836b0(arg1, data_61caec)
        
        return 
    
    if (*(data_780c58 + 0x25b40) == 7)
        sub_4c2418()
    
    sub_4836b0(arg1, *((zx.d(*(data_780c58 + 0x25b40)) << 2) + &data_61cac8))
}
