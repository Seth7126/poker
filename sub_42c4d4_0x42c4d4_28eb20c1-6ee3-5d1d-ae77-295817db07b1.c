// ============================================================
// 函数名称: sub_42c4d4
// 虚拟地址: 0x42c4d4
// WARP GUID: 28eb20c1-6ee3-5d1d-ae77-295817db07b1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_42b220, sub_42b1dc, sub_40faac, sub_42d14c
// [被调用的父级函数]: sub_42c2ec
// ============================================================

int32_t* __convention("regparm")sub_42c4d4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    void var_2c
    __builtin_memcpy(&var_2c, arg2, 0x10)
    int32_t* esi_1 = arg1
    int32_t* edi = esi_1[0x24]
    
    if (edi != 0)
        ebx.w = 0xffc2
        arg1 = sub_4032ac(edi, 0, esi_1)
    
    if (edi == 0 || arg1.b != 0)
        arg1.b = 1
    else
        arg1 = nullptr
    
    char var_30 = arg1.b
    
    if (var_30 != 0)
        int32_t* eax_2 = sub_42d14c(esi_1, &var_2c)
        
        if (eax_2 == 0)
            ebx.w = 0xffd1
            sub_4032ac(esi_1, eax_2, &var_2c, var_30)
        else
            int32_t eax_4 = sub_42b220(eax_2)
            void var_1c
            sub_40faac(sub_42b1dc(eax_2), 0, 0, &var_1c, eax_4)
            ebx.w = 0xffd1
            sub_4032ac(esi_1, eax_2, &var_1c, var_30)
    
    arg1.b = var_30
    return arg1
}
