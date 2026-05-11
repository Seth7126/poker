// ============================================================
// 函数名称: sub_42d8a0
// 虚拟地址: 0x42d8a0
// WARP GUID: 7a108678-eb4e-5e01-990a-0430b6968987
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43692c, sub_403260
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42d8a0(void* arg1)
{
    // 第一条实际指令: if (sub_43692c(arg1) != 0)
    if (sub_43692c(arg1) != 0)
        int32_t* eax_2 = *(arg1 + 0x10)
        sub_403260(eax_2, &data_436278)
        
        if (eax_2[0x17] == *(*(arg1 + 0x20) + 0x150))
            int32_t result
            result.b = 1
            return result
    
    return 0
}
