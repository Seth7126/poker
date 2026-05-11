// ============================================================
// 函数名称: sub_46468c
// 虚拟地址: 0x46468c
// WARP GUID: 341546e4-6638-5870-95bc-dcee07a7445d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_464970
// ============================================================

int32_t __fastcallsub_46468c(void* arg1, void* arg2, void* arg3 @ eax, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: void* eax = *(arg3 + 0x15d)
    void* eax = *(arg3 + 0x15d)
    int32_t ecx = *(eax + 8)
    int32_t* eax_1 = *(eax + (*(arg2 + 0x10) << 2) + 0xc)
    int32_t result = arg6 << 2
    int32_t* var_8_1 = arg1 + result
    int32_t var_14 = 0
    
    if (0 u< arg4)
        do
            void var_120
            void* edx_1 = &var_120
            int32_t* ecx_1 = var_8_1
            
            for (int32_t i = 0; i s< 8; )
                void* eax_4 = *ecx_1
                ecx_1 = &ecx_1[1]
                char* eax_5 = eax_4 + arg5
                i += 1
                *edx_1 = zx.d(*eax_5) - 0x80
                *(edx_1 + 4) = zx.d(eax_5[1]) - 0x80
                *(edx_1 + 8) = zx.d(eax_5[2]) - 0x80
                *(edx_1 + 0xc) = zx.d(eax_5[3]) - 0x80
                *(edx_1 + 0x10) = zx.d(eax_5[4]) - 0x80
                *(edx_1 + 0x14) = zx.d(eax_5[5]) - 0x80
                *(edx_1 + 0x18) = zx.d(eax_5[6]) - 0x80
                *(edx_1 + 0x1c) = zx.d(eax_5[7]) - 0x80
                edx_1 += 0x20
            
            ecx()
            int32_t i_1 = 0
            int32_t result_1 = (var_14 << 7) + arg7
            void* var_1c_1 = &var_120
            int32_t* esi_15 = eax_1
            
            do
                int32_t edi_1 = *esi_15
                int32_t ebx_1 = *var_1c_1
                int16_t ebx_6
                
                if (ebx_1 s>= 0)
                    int32_t ebx_5 = ebx_1 + (edi_1 s>> 1)
                    
                    if (edi_1 s> ebx_5)
                        ebx_6 = 0
                    else
                        ebx_6 = (divs.dp.d(sx.q(ebx_5), edi_1)).w
                else
                    int32_t ebx_3 = neg.d(ebx_1) + (edi_1 s>> 1)
                    int32_t ebx_4
                    
                    if (edi_1 s> ebx_3)
                        ebx_4 = 0
                    else
                        ebx_4 = divs.dp.d(sx.q(ebx_3), edi_1)
                    
                    ebx_6 = (neg.d(ebx_4)).w
                
                result = result_1
                esi_15 = &esi_15[1]
                *result = ebx_6
                i_1 += 1
                result_1 += 2
                var_1c_1 += 4
            while (i_1 s< 0x40)
            
            var_14 += 1
            arg5 += 8
        while (var_14 u< arg4)
    
    return result
}
