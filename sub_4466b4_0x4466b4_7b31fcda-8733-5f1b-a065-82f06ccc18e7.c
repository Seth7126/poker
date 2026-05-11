// ============================================================
// 函数名称: sub_4466b4
// 虚拟地址: 0x4466b4
// WARP GUID: 7b31fcda-8733-5f1b-a065-82f06ccc18e7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b974, sub_446644, sub_43b964
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4466b4(int32_t* arg1)
{
    // 第一条实际指令: if ((arg1[8].b & 0x10) != 0 || arg1[0x5a].b == 0)
    if ((arg1[8].b & 0x10) != 0 || arg1[0x5a].b == 0)
        return 
    
    int32_t edx_2 = (*(*arg1 + 0x70))()
    void* esi_1 = arg1[0x8c]
    
    if (esi_1 != 0)
        int32_t i_2
        i_2, edx_2 = sub_43b964(*(esi_1 + 0x28))
        
        if (i_2 - 1 s>= 0)
            int32_t i_1 = i_2
            int32_t edi_1 = 0
            int32_t i
            
            do
                edx_2 = edi_1
                int32_t* eax_6 = sub_43b974(*(arg1[0x8c] + 0x28), edx_2)
                
                if (*(eax_6 + 0x32) != 0)
                    edx_2 = (*(*eax_6 + 0x3c))()
                
                edi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    int32_t __saved_ebp
    int32_t* var_14_1 = &__saved_ebp
    sub_446644(arg1, edx_2)
}
