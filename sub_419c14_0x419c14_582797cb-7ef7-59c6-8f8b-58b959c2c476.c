// ============================================================
// 函数名称: sub_419c14
// 虚拟地址: 0x419c14
// WARP GUID: 582797cb-7ef7-59c6-8f8b-58b959c2c476
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_419cdc, sub_419cb0, sub_419d0c, sub_40b56c
// [被调用的父级函数]: sub_419acc, sub_419868, sub_419af8, sub_41932c, sub_41f620, sub_4197e8, sub_4195ec, sub_419674, sub_419820, sub_41995c, sub_41dd80, sub_41975c, sub_4198d0, sub_419720, sub_419b40, sub_4197bc, sub_419a88, sub_41f1b0
// ============================================================

int32_t __convention("regparm")sub_419c14(int32_t arg1, char arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    var_c.b = arg2
    int32_t* esi = arg1
    int32_t ebx
    ebx.b = esi[2].b
    char ebx_1 = (not.d(ebx)).b & var_c.b
    arg1.b = 0
    
    if (0 != ebx_1)
        if ((ebx_1 & 1) != 0)
            int32_t edx_1
            arg1, edx_1 = (*(*esi + 0x14))(var_c)
            
            if (esi[1] == 0)
                edx_1.b = 1
                sub_40b56c(sub_40eacb+0x7d, edx_1, data_530314)
                sub_403828()
                noreturn
        
        if ((ebx_1 & 2) != 0)
            arg1 = sub_419cb0(esi)
        
        if ((ebx_1 & 4) != 0)
            arg1 = sub_419cdc(esi)
        
        if ((ebx_1 & 8) != 0)
            arg1 = sub_419d0c(esi)
        
        esi[2].b |= ebx_1
    
    return arg1
}
