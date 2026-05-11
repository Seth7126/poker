// ============================================================
// 函数名称: sub_42aebc
// 虚拟地址: 0x42aebc
// WARP GUID: acdd287c-078e-5027-9b98-f6191286b4a8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_431bcc
// [被调用的父级函数]: sub_42d480, sub_42c7f8, sub_42ae24, sub_42abd0, sub_431344, sub_42eda0, sub_42b644, sub_431bd8
// ============================================================

void __convention("regparm")sub_42aebc(void* arg1)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    
    if (*(esi + 0x52) != 0 || (*(esi + 0x20) & 1) != 0)
        return 
    
    int32_t ebx
    ebx.b = *(esi + 0x51)
    arg1.b = 3
    
    if (3 == ebx.b)
        return 
    
    if ((ebx.b & 4) == 0)
        int32_t eax_2 = *(esi + 0x38)
        int32_t eax_3 = eax_2 s>> 1
        bool c_1 = unimplemented  {sar eax, 0x1}
        
        if (eax_2 s>> 1 s< 0)
            eax_3 = adc.d(eax_3, 0, c_1)
        
        *(esi + 0x78) = eax_3 + *(esi + 0x30)
    else if ((ebx.b & 1) == 0)
        *(esi + 0x78) = *(esi + 0x30)
    else
        *(esi + 0x78) = *(esi + 0x38)
    
    if ((ebx.b & 8) == 0)
        int32_t eax_5 = *(esi + 0x3c)
        int32_t eax_6 = eax_5 s>> 1
        bool c_2 = unimplemented  {sar eax, 0x1}
        
        if (eax_5 s>> 1 s< 0)
            eax_6 = adc.d(eax_6, 0, c_2)
        
        *(esi + 0x7c) = eax_6 + *(esi + 0x34)
    else if ((ebx.b & 2) == 0)
        *(esi + 0x7c) = *(esi + 0x34)
    else
        *(esi + 0x7c) = *(esi + 0x3c)
    
    void* ebx_1 = *(esi + 0x24)
    
    if (ebx_1 == 0 || (*(ebx_1 + 0x20) & 2) != 0)
        return 
    
    if (sub_431bcc(ebx_1) == 0)
        *(esi + 0x80) = *(*(esi + 0x24) + 0x38)
        *(esi + 0x84) = *(*(esi + 0x24) + 0x3c)
    else
        (*(**(esi + 0x24) + 0x40))()
        int32_t var_10
        *(esi + 0x80) = var_10
        void* var_c
        *(esi + 0x84) = var_c
}
