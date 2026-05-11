// ============================================================
// 函数名称: sub_460be4
// 虚拟地址: 0x460be4
// WARP GUID: 11d5d5b0-2efa-5caa-8d37-5d0faaa11ca7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_460b5c, sub_460b34, sub_460b98
// [被调用的父级函数]: sub_453acc
// ============================================================

void* __convention("regparm")sub_460be4(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi = arg1[0xd]
    int32_t esi = arg1[0xd]
    
    if (arg1[4] != 0x64)
        void* eax = *arg1
        *(eax + 0x14) = 0x12
        *(eax + 0x18) = arg1[4]
        (**arg1)(arg3)
    
    int32_t var_10_1
    
    if (esi == 3 && arg1[0xe] == 3)
        var_10_1 = 0xa
    else if (esi s<= 4)
        var_10_1 = (esi << 2) + 2
    else
        var_10_1 = esi * 6
    
    int32_t* eax_6 = (*arg1[1])(var_10_1)
    arg1[0x29] = eax_6
    arg1[0x28] = var_10_1
    
    if (esi != 3 || arg1[0xe] != 3)
        return sub_460b5c(1, esi, 
            sub_460b98(1, esi, 
                sub_460b5c(1, esi, 
                    sub_460b5c(6, esi, sub_460b5c(1, esi, sub_460b98(0, esi, eax_6, 1), 2, 0, 5), 2, 0, 
                        0x3f), 
                    1, 2, 0x3f), 
                0), 
            0, 1, 0x3f)
    
    void* eax_17 = sub_460b34(6, 0, 
        sub_460b34(1, 1, 
            sub_460b34(1, 2, sub_460b34(1, 0, sub_460b98(0, esi, eax_6, 1), 2, 0, 5), 1, 0, 0x3f), 1, 
            0, 0x3f), 
        2, 0, 0x3f)
    return sub_460b34(1, 0, 
        sub_460b34(1, 1, 
            sub_460b34(1, 2, sub_460b98(1, esi, sub_460b34(1, 0, eax_17, 1, 2, 0x3f), 0), 0, 1, 0x3f), 
            0, 1, 0x3f), 
        0, 1, 0x3f)
}
