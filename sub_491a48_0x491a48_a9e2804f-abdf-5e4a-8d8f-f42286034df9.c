// ============================================================
// 函数名称: sub_491a48
// 虚拟地址: 0x491a48
// WARP GUID: a9e2804f-abdf-5e4a-8d8f-f42286034df9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LoadBitmapA
// [内部子函数调用]: sub_41ec48, sub_40fa94, sub_409a78, sub_41dae0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_491a48(void* arg1)
{
    // 第一条实际指令: int32_t var_28
    int32_t var_28
    sub_40fa94(0, 0, &var_28)
    *(arg1 + 0x2a8) = var_28
    int32_t var_24
    *(arg1 + 0x2ac) = var_24
    char i = 0
    char const (** ebp)[0x7] = &data_52f5a8
    int32_t result
    
    do
        int32_t ebx_1 = 0
        char const (** edi_1)[0x3] = &data_52f59c
        
        do
            int32_t edx
            edx.b = 1
            int32_t edx_1
            edx_1.b = ebx_1.b
            int32_t ecx_1
            ecx_1.b = i
            *(arg1 + ecx_1 * 0x10 + (edx_1 << 2) + 0x1fc) = sub_41dae0(sub_41799a+0xe2, edx)
            char const (* var_20)[0x3] = *edi_1
            char var_1c_1 = 6
            char const (* var_18_1)[0x7] = *ebp
            char var_14_1 = 6
            void bitmapName
            sub_409a78(&var_20, sub_491bad+3, &bitmapName, 1)
            HBITMAP eax_7 = LoadBitmapA(data_5314dc, &bitmapName)
            int32_t eax_8
            eax_8.b = ebx_1.b
            int32_t ecx_5
            ecx_5.b = i
            sub_41ec48(*(arg1 + ecx_5 * 0x10 + (eax_8 << 2) + 0x1fc), eax_7)
            int32_t eax_10
            eax_10.b = ebx_1.b
            int32_t edx_3
            edx_3.b = i
            
            if ((*(**(arg1 + edx_3 * 0x10 + (eax_10 << 2) + 0x1fc) + 0x2c))(i) s> *(arg1 + 0x2a8))
                int32_t eax_13
                eax_13.b = ebx_1.b
                int32_t edx_7
                edx_7.b = i
                *(arg1 + 0x2a8) = (*(**(arg1 + edx_7 * 0x10 + (eax_13 << 2) + 0x1fc) + 0x2c))()
            
            int32_t eax_16
            eax_16.b = ebx_1.b
            int32_t edx_11
            edx_11.b = i
            result, edx = (*(**(arg1 + edx_11 * 0x10 + (eax_16 << 2) + 0x1fc) + 0x20))()
            
            if (result s> *(arg1 + 0x2ac))
                int32_t eax_18
                eax_18.b = ebx_1.b
                int32_t edx_15
                edx_15.b = i
                result, edx = (*(**(arg1 + edx_15 * 0x10 + (eax_18 << 2) + 0x1fc) + 0x20))()
                *(arg1 + 0x2ac) = result
            
            ebx_1 += 1
            edi_1 = &edi_1[1]
        while (ebx_1.b != 3)
        
        i += 1
        ebp = &ebp[1]
    while (i != 9)
    
    *(arg1 + 0x2a8) += 8
    *(arg1 + 0x2ac) += 4
    return result
}
