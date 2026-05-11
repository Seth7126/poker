// ============================================================
// 函数名称: sub_4bc450
// 虚拟地址: 0x4bc450
// WARP GUID: ba8049c4-b90f-556d-abea-bd9eacc8f929
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_517f20, sub_5179dc
// [被调用的父级函数]: sub_4c92f0, sub_4c02cc, sub_4bdac0
// ============================================================

int32_t __convention("regparm")sub_4bc450(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0x100) = 0
    *(arg1 + 0x100) = 0
    int32_t result
    
    for (int32_t i = 1; i != 5; i += 1)
        for (int32_t j = 9; j != 0xe; j += 1)
            sub_5179dc(arg1, sub_517f20(j.b, i.b))
        
        for (int32_t j_1 = 1; j_1 != 4; j_1 += 1)
            sub_5179dc(arg1, sub_517f20(j_1.b, i.b))
        
        for (int32_t j_2 = 7; j_2 != 8; j_2 += 1)
            result = sub_5179dc(arg1, sub_517f20(j_2.b, i.b))
        
        for (int32_t j_3 = 4; j_3 != 9; j_3 += 1)
            if (j_3 != 7)
                result = sub_5179dc(arg1, sub_517f20(j_3.b, i.b))
    
    return result
}
