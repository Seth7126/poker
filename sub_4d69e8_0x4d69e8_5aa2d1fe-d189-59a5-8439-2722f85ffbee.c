// ============================================================
// 函数名称: sub_4d69e8
// 虚拟地址: 0x4d69e8
// WARP GUID: 5aa2d1fe-d189-59a5-8439-2722f85ffbee
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4837d0, sub_4c0ff8, sub_4dc3b8, sub_528320
// [被调用的父级函数]: sub_4e6659, sub_4ed7a0, sub_4ecb3c, sub_4e649b
// ============================================================

void __convention("regparm")sub_4d69e8(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi
    int32_t esi
    int32_t edi
    
    if (arg2 == 1)
        sub_4dc3b8(0, 0, esi, edi)
        sub_4837d0(arg1, *((zx.d(*(data_780c58 + 0x25b40)) << 2) + &data_61cac8))
        data_77e23c = 1
        sub_528320(data_780c58, *(data_780c58 + 4), 0)
        return 
    
    if (arg2 == 2)
        sub_4dc3b8(0, 0, esi, edi)
        sub_4c0ff8()
        sub_4837d0(arg1, data_61caec)
        data_77e23c = 1
        sub_528320(data_780c58, *(data_780c58 + 4), 0)
    else if (arg2 == 3)
        sub_4dc3b8(0, 0, esi, edi)
        sub_4837d0(arg1, *((zx.d(*(data_780c58 + 0x25b40)) << 2) + &data_61cac8))
        data_77e23c = 1
        sub_528320(data_780c58, *(data_780c58 + 4), 0)
}
