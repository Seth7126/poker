// ============================================================
// 函数名称: sub_406477
// 虚拟地址: 0x406477
// WARP GUID: 0cf75a6e-f9aa-50ca-87a0-d5c42c22001c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: j_sub_406190, sub_402844
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_406477(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esp
    void* esp
    
    if (*(arg1 + 4) != 0xd7b2)
        if (arg1 == 0x53121c)
            j_sub_406190()
            esp = &__return_addr
        
        if (arg1 != 0x53121c || *(arg1 + 4) != 0xd7b2)
            return sub_402844(0x69) __tailcall
    
    int32_t eax
    
    while (true)
        int32_t ecx_1 = *(arg1 + 0xc)
        
        if (ecx_1 s< *(arg1 + 8))
            *(ecx_1 + *(arg1 + 0x14)) = arg2.b
            *(arg1 + 0xc) += 1
            return 
        
        *(esp - 4) = arg1
        *(esp - 8) = arg2
        eax = (*(arg1 + 0x1c))()
        
        if (eax != 0)
            break
        
        arg2 = *esp
        arg1 = *(esp + 4)
        esp += 8
    
    sub_402844(eax)
    *esp
    *(esp + 4)
}
