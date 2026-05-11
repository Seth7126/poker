// ============================================================
// 函数名称: sub_43981c
// 虚拟地址: 0x43981c
// WARP GUID: 90e5ca90-fe19-510a-b34b-fe00c4e9f06b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_436940, sub_404188, sub_403260
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43981c(void* arg1)
{
    // 第一条实际指令: char eax_1 = sub_436940(arg1)
    char eax_1 = sub_436940(arg1)
    
    if (eax_1 != 0)
        int32_t* eax_2 = *(arg1 + 0x10)
        sub_403260(eax_2, &data_436278)
        sub_404188(*(*(arg1 + 0x18) + 0x4c), eax_2[0x18])
        
        if (eax_1 == 0)
            int32_t result
            result.b = 1
            return result
    
    return 0
}
