// ============================================================
// 函数名称: sub_449118
// 虚拟地址: 0x449118
// WARP GUID: b8fa83c4-fda4-5920-8851-605e5636827a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IsWindowEnabled
// [内部子函数调用]: sub_4032ac, sub_4318d0
// [被调用的父级函数]: sub_448668
// ============================================================

void* const __convention("regparm")sub_449118(void* const arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_14 = ecx
    var_14.b = 0
    
    if (*(arg1 + 0x102) != 0)
        *(arg1 + 0x104)
        (*(arg1 + 0x100))(var_14)
    
    int32_t* edi_1 = *(arg1 + 0x38)
    
    if (edi_1 == 0)
        arg1 = nullptr
    else if (IsWindowEnabled(sub_4318d0(edi_1)) == 0)
        arg1 = nullptr
    else
        int32_t ebx
        ebx.w = 0xffaf
        
        if (sub_4032ac(*(arg1 + 0x38), arg2).b != 0)
            arg1.b = 1
        else
            arg1 = nullptr
    
    var_14.b = arg1.b
    arg1.b = var_14.b
    return arg1
}
