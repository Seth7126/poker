// ============================================================
// 函数名称: sub_45faf0
// 虚拟地址: 0x45faf0
// WARP GUID: cc41143f-2769-5271-b036-35eff55a977e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45fd34, sub_4601e8
// ============================================================

int32_t __convention("regparm")sub_45faf0(void** arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* ebx = arg1[5]
    int32_t* ebx = arg1[5]
    int32_t ebp = ebx[1]
    char* edi = *ebx
    
    if (ebp == 0)
        if (ebx[3](arg3) == 0)
            return 0
        
        edi = *ebx
        ebp = ebx[1]
    
    int32_t ebp_1 = ebp - 1
    int32_t eax_3
    eax_3.b = *edi
    void* edi_1 = &edi[1]
    int32_t var_14 = eax_3 << 8
    
    if (ebp_1 == 0)
        if (ebx[3](var_14) == 0)
            return 0
        
        edi_1 = *ebx
        ebp_1 = ebx[1]
    
    int32_t eax_7
    eax_7.b = *edi_1
    var_14 += eax_7
    void* eax_8 = *arg1
    *(eax_8 + 0x14) = 0x5a
    *(eax_8 + 0x18) = *(arg1 + 0x192)
    *(eax_8 + 0x1c) = var_14
    (*(*arg1 + 4))(var_14)
    *ebx = edi_1 + 1
    ebx[1] = ebp_1 - 1
    (*(arg1[5] + 0x10))()
    return 1
}
