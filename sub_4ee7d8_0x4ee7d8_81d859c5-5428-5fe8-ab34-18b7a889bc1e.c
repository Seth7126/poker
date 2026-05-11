// ============================================================
// 函数名称: sub_4ee7d8
// 虚拟地址: 0x4ee7d8
// WARP GUID: 81d859c5-5428-5fe8-ab34-18b7a889bc1e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_516e1c, sub_4c4bec
// [被调用的父级函数]: sub_4ed7a0, sub_4fc3f8, sub_4fc834, sub_4fb48c, sub_4fef20, sub_503538, sub_4f9658, sub_51f880
// ============================================================

int32_tsub_4ee7d8()
{
    // 第一条实际指令: void* edx_1
    void* edx_1
    edx_1.b = *(*data_5301f4 + 4)
    int32_t result
    int32_t eax
    
    if (edx_1.b != 1)
        data_5301f4
        
        if (edx_1.b != 7)
            result = 0
        else
            result = sub_4c4bec(eax)
    else
        result = sub_516e1c(eax)
    
    if (*data_530364 != 2)
        return result
    
    return 0
}
