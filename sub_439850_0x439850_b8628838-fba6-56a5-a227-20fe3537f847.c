// ============================================================
// 函数名称: sub_439850
// 虚拟地址: 0x439850
// WARP GUID: b8628838-fba6-56a5-a227-20fe3537f847
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_436954, sub_403260
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_439850(void* arg1)
{
    // 第一条实际指令: if (sub_436954(arg1) != 0)
    if (sub_436954(arg1) != 0)
        int32_t* eax_2 = *(arg1 + 0x10)
        sub_403260(eax_2, &data_436278)
        
        if (eax_2[0x19] == *(*(arg1 + 0x18) + 0x34))
            int32_t result
            result.b = 1
            return result
    
    return 0
}
