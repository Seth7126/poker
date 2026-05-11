// ============================================================
// 函数名称: sub_4059ac
// 虚拟地址: 0x4059ac
// WARP GUID: 8cf3531d-ae1e-5268-96fd-6e00ac39f771
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40276c
// [被调用的父级函数]: sub_405984
// ============================================================

void __convention("regparm")sub_4059ac(int32_t arg1)
{
    // 第一条实际指令: int32_t* i_1 = data_52e020
    int32_t* i_1 = data_52e020
    
    if (i_1 != 0 && i_1[1] == arg1)
        data_52e020 = *data_52e020
        sub_40276c(i_1)
        return 
    
    for (int32_t* i = i_1; i != 0; i = *i)
        int32_t* ecx_1 = *i
        
        if (ecx_1 != 0 && ecx_1[1] == arg1)
            *i = *ecx_1
            sub_40276c(ecx_1)
            break
}
