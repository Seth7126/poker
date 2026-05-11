// ============================================================
// 函数名称: sub_44bc5c
// 虚拟地址: 0x44bc5c
// WARP GUID: bd7598c2-b6b5-5cff-8e8d-edbab6795610
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41bffc, sub_41bfe4, sub_403248, sub_44ba00
// [被调用的父级函数]: sub_44bc44, sub_44bc04, sub_44bc2c, sub_44b7c0
// ============================================================

int32_t __convention("regparm")sub_44bc5c(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[0x13].b != 0 && sub_41bfe4(arg1[0x4a]) s> 0 && sub_41bffc(arg1[0x4a]) s> 0)
    if (arg1[0x13].b != 0 && sub_41bfe4(arg1[0x4a]) s> 0 && sub_41bffc(arg1[0x4a]) s> 0)
        int32_t eax_5 = sub_41bfe4(arg1[0x4a])
        int32_t eax_7 = sub_41bffc(arg1[0x4a])
        arg1[0xd]
        arg1[0xc]
        (*(*arg1 + 0x7c))(eax_7, eax_5)
    
    int32_t* esi_2 = *(arg1[0x4a] + 4)
    int32_t result
    
    if (esi_2 == 0)
        result = 0xffffffbf & arg1[0x10]
        arg1[0x10] = result
    else
        if (sub_403248(esi_2, &data_417940) == 0 && sub_403248(esi_2, 0x417bbc) == 0)
            int32_t edx_2
            edx_2.b = *(arg1 + 0x13b)
            (*(*esi_2 + 0x3c))()
        
        if ((*(*esi_2 + 0x28))() != 0)
            arg1[0x10] &= 0xffffffbf
        else if (arg1[0x4e].b != 0)
            arg1[0x10] |= 0x40
        else if ((*(*esi_2 + 0x2c))() s< arg1[0xe])
            arg1[0x10] &= 0xffffffbf
        else if ((*(*esi_2 + 0x20))() s< arg1[0xf])
            arg1[0x10] &= 0xffffffbf
        else
            arg1[0x10] |= 0x40
        
        result = sub_44ba00(arg1)
        
        if (result.b != 0 && arg1[0x4f].b != 0)
            result = (*(*arg1 + 0x80))()
    
    if (arg1[0x4f].b != 0)
        return result
    
    return (*(*arg1 + 0x74))()
}
