// ============================================================
// 函数名称: sub_40b6b0
// 虚拟地址: 0x40b6b0
// WARP GUID: d4c0426e-e6a9-5063-9279-416928dc02e5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402968, sub_40b4b0, sub_40b5a8
// [被调用的父级函数]: sub_40b694, sub_40b714
// ============================================================

int32_t*sub_40b6b0()
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t esi = sub_402968()
    
    for (; i s<= 6; i += 1)
        if (esi == *((i << 3) + &data_52e210))
            break
    
    int32_t* result
    
    if (i s> 6)
        int32_t var_10 = esi
        char var_c = 0
        result, esi = sub_40b5a8(0x407e98, 1, data_530140, 0, &var_10)
    else
        result = sub_40b4b0(0x407e98, 1, *((i << 3) + &data_52e214))
    
    result[3] = esi
    return result
}
