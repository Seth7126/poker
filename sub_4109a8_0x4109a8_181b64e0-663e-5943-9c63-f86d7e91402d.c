// ============================================================
// 函数名称: sub_4109a8
// 虚拟地址: 0x4109a8
// WARP GUID: 181b64e0-663e-5943-9c63-f86d7e91402d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410984, sub_402d00, sub_402980, sub_402754, sub_41099c, sub_40276c
// [被调用的父级函数]: sub_410a4c, sub_410954
// ============================================================

void __convention("regparm")sub_4109a8(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_14 = ecx
    
    if (arg2 == *(arg1 + 4))
        return 
    
    if (arg2 s< 0)
        sub_410984()
        noreturn
    
    int32_t eax_2 = arg2 + 0x1f
    
    if (eax_2 s< 0)
        eax_2 += 0x1f
    
    int32_t edi_2 = eax_2 s>> 5 << 2
    int32_t eax_6 = *(arg1 + 4) + 0x1f
    
    if (eax_6 s< 0)
        eax_6 += 0x1f
    
    int32_t ebp_2 = eax_6 s>> 5 << 2
    
    if (ebp_2 != edi_2)
        var_14 = 0
        
        if (edi_2 != 0)
            var_14 = sub_402754(edi_2)
            sub_402d00(var_14, edi_2, 0)
        
        if (ebp_2 != 0)
            if (var_14 != 0)
                int32_t eax_11 = sub_41099c(ebp_2, edi_2)
                sub_402980(*(arg1 + 8), var_14, eax_11)
            
            sub_40276c(*(arg1 + 8))
        
        *(arg1 + 8) = var_14
    
    *(arg1 + 4) = arg2
}
