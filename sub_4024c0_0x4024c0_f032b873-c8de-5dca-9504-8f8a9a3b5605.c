// ============================================================
// 函数名称: sub_4024c0
// 虚拟地址: 0x4024c0
// WARP GUID: f032b873-c8de-5dca-9504-8f8a9a3b5605
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_401eb4, sub_401d28, sub_401f3c, sub_402040, sub_401c64
// [被调用的父级函数]: sub_402690
// ============================================================

int32_t __convention("regparm")sub_4024c0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi_2 = (arg2 + 7) & 0xfffffffc
    void* esi_2 = (arg2 + 7) & 0xfffffffc
    
    if (esi_2 s< 0xc)
        esi_2 = 0xc
    
    void* edi_1 = *(arg1 - 4) & 0x7ffffffc
    void* eax_1 = arg1 - 4 + edi_1
    void* ebx = eax_1
    int32_t result
    void* var_18
    
    if (edi_1 s< esi_2)
        while (true)
            void* var_14 = esi_2 - edi_1
            
            if (ebx == data_53148c)
                if (data_531488 s>= var_14)
                    data_531488 -= var_14
                    data_53148c += var_14
                    
                    if (data_531488 s< 0xc)
                        data_53148c += data_531488
                        esi_2 += data_531488
                        data_531488 = 0
                    
                    data_531428 += esi_2 - edi_1
                    *(arg1 - 4) = esi_2 | (*(arg1 - 4) & 0x80000003)
                    result.b = 1
                    break
                
                sub_401f3c()
                ebx = arg1 - 4 + edi_1
            
            if ((*ebx & 2) == 0)
                var_18 = *(ebx + 8)
                
                if (var_18 s>= var_14)
                    sub_401c64(ebx)
                    var_18 -= var_14
                    
                    if (var_18 s< 0xc)
                        esi_2 += var_18
                        void* ebx_6 = arg1 - 4 + esi_2
                        *ebx_6 &= 0xfffffffe
                    else
                        sub_401eb4(arg1 - 4 + esi_2, var_18)
                    
                    goto label_402673
                
                ebx += var_18
                var_14 -= var_18
            
            int32_t eax_25 = *ebx
            char eax_29
            
            if ((eax_25 & 0x80000000) != 0)
                eax_29 = sub_402040((eax_25 & 0x7ffffffc) + ebx, var_14)
            
            if ((eax_25 & 0x80000000) == 0 || eax_29 == 0)
                return 0
            
            ebx = arg1 - 4 + edi_1
    else
        var_18 = edi_1 - esi_2
        
        if (ebx != data_53148c)
            if ((*eax_1 & 2) == 0)
                var_18 += *(eax_1 + 8)
                sub_401c64(eax_1)
            
            if (var_18 s< 0xc)
                esi_2 = edi_1
            else
                void* ebx_3 = arg1 - 4 + esi_2
                *ebx_3 = var_18 | 2
                sub_401d28(ebx_3 + 4)
        else
            data_53148c -= var_18
            data_531488 += var_18
            
            if (data_531488 s< 0xc)
                data_53148c += var_18
                data_531488 -= var_18
                esi_2 = edi_1
        
    label_402673:
        data_531428 += esi_2 - edi_1
        *(arg1 - 4) = esi_2 | (*(arg1 - 4) & 0x80000003)
        result.b = 1
    return result
}
