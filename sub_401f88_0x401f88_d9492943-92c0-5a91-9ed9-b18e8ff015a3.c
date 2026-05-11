// ============================================================
// 函数名称: sub_401f88
// 虚拟地址: 0x401f88
// WARP GUID: d9492943-92c0-5a91-9ed9-b18e8ff015a3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_401cf8, sub_401d74, sub_4014d4, sub_401f3c, sub_401de4
// [被调用的父级函数]: sub_402014, sub_402040
// ============================================================

int32_t __convention("regparm")sub_401f88(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_1c = *arg1
    int32_t var_1c = *arg1
    int32_t var_18 = arg1[1]
    sub_401f3c()
    int32_t var_14
    sub_4014d4(&data_531494, &var_1c, &var_14)
    int32_t ebx = var_14
    
    if (ebx == 0)
        return 0
    
    int32_t eax = var_1c
    
    if (ebx u< eax)
        int32_t eax_1 = sub_401d74(eax)
        var_1c -= eax_1
        var_18 += eax_1
    
    int32_t* eax_3 = var_1c + var_18
    int32_t var_10
    int32_t esi_4 = ebx + var_10
    
    if (eax_3 u< esi_4)
        int32_t eax_4 = sub_401de4(eax_3)
        var_18 += eax_4
    
    int32_t eax_6 = var_1c + var_18
    
    if (esi_4 == eax_6)
        sub_401cf8(eax_6 - 4, 4)
        var_18 -= 4
    
    data_53148c = var_1c
    data_531488 = var_18
    int32_t result
    result.b = 1
    return result
}
