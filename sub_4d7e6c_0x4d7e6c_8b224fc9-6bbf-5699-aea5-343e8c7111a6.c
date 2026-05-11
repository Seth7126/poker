// ============================================================
// 函数名称: sub_4d7e6c
// 虚拟地址: 0x4d7e6c
// WARP GUID: 8b224fc9-6bbf-5699-aea5-343e8c7111a6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_51f90c, sub_4e6659, sub_51f880, sub_4d7f8c, sub_4dc3b8, sub_4e649b
// ============================================================

int32_t*sub_4d7e6c()
{
    // 第一条实际指令: int32_t* result = &data_780c58
    int32_t* result = &data_780c58
    data_61d108 = 3
    *(data_780c58 + 0x457c) = 0x3f800000
    
    if (data_61d108 == 1)
        __builtin_strncpy(data_780c58 + 0x457c, "333?", 4)
    
    if (data_61d108 == 2)
        *(data_780c58 + 0x457c) = 0x3f59999a
    
    if (*(data_780c58 + 4) == 7)
        *(data_780c58 + 0x457c) = fconvert.s(data_4d7f50 * fconvert.t(*(data_780c58 + 0x457c)))
    
    if (*(data_780c58 + 4) == 4)
        *(data_780c58 + 0x457c) = fconvert.s(data_4d7f5c * fconvert.t(*(data_780c58 + 0x457c)))
    
    if (*(data_780c58 + 4) == 3)
        *(data_780c58 + 0x457c) = fconvert.s(data_4d7f68 * fconvert.t(*(data_780c58 + 0x457c)))
    
    if (*(data_780c58 + 4) == 5)
        *(data_780c58 + 0x457c) = fconvert.s(data_4d7f74 * fconvert.t(*(data_780c58 + 0x457c)))
    
    if (*(data_780c58 + 4) == 6)
        result = data_780c58
        result[0x115f] = fconvert.s(data_4d7f80 * fconvert.t(*(data_780c58 + 0x457c)))
    
    return result
}
