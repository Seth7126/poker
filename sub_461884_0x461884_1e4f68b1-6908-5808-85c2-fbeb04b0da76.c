// ============================================================
// 函数名称: sub_461884
// 虚拟地址: 0x461884
// WARP GUID: 1e4f68b1-6908-5808-85c2-fbeb04b0da76
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_461548, sub_461360
// [被调用的父级函数]: sub_461a84
// ============================================================

int32_t* __convention("regparm")sub_461884(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_14 = ecx
    int32_t var_14_1 = 0
    int32_t i = 0
    void* esi = arg1[0xf]
    
    while (i s< arg1[0xd])
        var_14_1 += sub_461360(arg1, *(esi + 0x10))
        i += 1
        esi += 0x54
    
    if (arg1[0x2b] == 0 && *(arg1 + 0xd9) == 0 && arg1[0xc] == 8)
        int32_t ebp = 1
        int32_t i_1 = 0
        void* esi_1 = arg1[0xf]
        
        while (i_1 s< arg1[0xd])
            if (*(esi_1 + 0x14) s> 1 || *(esi_1 + 0x18) s> 1)
                ebp = 0
            
            i_1 += 1
            esi_1 += 0x54
        
        if (var_14_1 != 0 && ebp != 0)
            *(*arg1 + 0x14) = 0x4a
            (*(*arg1 + 4))(var_14_1)
    
    if (arg1[0x2b] != 0)
        return sub_461548(arg1)
    
    *(arg1 + 0xd9)
    return sub_461548(arg1)
}
