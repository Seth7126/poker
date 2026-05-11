// ============================================================
// 函数名称: sub_506f9c
// 虚拟地址: 0x506f9c
// WARP GUID: 623ab6a3-508a-5d2b-a73f-556cd19308df
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_48e980, sub_4cf900, sub_5047f4, sub_48e950, sub_50463c, sub_403010
// [被调用的父级函数]: sub_4d9720, sub_4dad04
// ============================================================

int32_tsub_506f9c()
{
    // 第一条实际指令: sub_48e950(*data_530304, 0xb)
    sub_48e950(*data_530304, 0xb)
    uint32_t eax_2 = GetTickCount()
    int32_t eax_4
    int32_t edx
    edx:eax_4 = sx.q(data_7a7d88)
    int32_t var_38 = sbb.d(0, edx, eax_2 u< eax_4)
    data_7a7d84 = eax_2 - eax_4
    uint32_t eax_6
    int32_t* ecx
    eax_6, ecx = GetTickCount()
    data_7a7d88 = eax_6
    data_7a7d8c = fconvert.s(fconvert.t(1f) / fconvert.t(*(*data_530304 + 0x11cc)) / fconvert.t(10f))
    
    if (*(*data_530304 + 0xcf9) != 0)
        data_7a7d8c = 0x42c80000
    
    if (*(*data_5301f4 + 4) == 7)
        ecx = sub_4cf900(*data_53067c)
    
    if (*(*data_52ffd0 + 0x3d00) != 0)
        void* eax_18 = *data_52ffd0
        *(eax_18 + 0x3d18)
        bool o_1 = unimplemented  {imul eax, dword [eax+0x3d18], 0x2345}
        
        if (o_1)
            sub_403010()
            noreturn
        
        void* edx_4 = *data_52ffd0
        *(edx_4 + 0x3d1c)
        bool o_2 = unimplemented  {imul edx, dword [edx+0x3d1c], 0x35}
        
        if (o_2)
            sub_403010()
            noreturn
        
        *(*data_52ffd0 + 0x3d0c) = fconvert.s(fconvert.t(data_7a7d8c) *
            fconvert.t(*(data_5301b0 + *(eax_18 + 0x3d18) * 0x8d14 + *(edx_4 + 0x3d1c) * 0xd4 - 0x8d84))
            + fconvert.t(*(*data_52ffd0 + 0x3d0c)))
    
    int32_t __saved_ebp
    
    if (*(*data_530304 + 0xcf9) == 0 || *(*data_5301f4 + 0x20095) != 1)
        int32_t i_4 = *data_5300d0
        
        if (i_4 s> 0)
            int32_t i_2 = i_4
            int32_t var_1c_1 = 1
            void* var_24_1 = data_5301b0 + 0x8978
            void* var_28_1 = data_5302e4 + 0x5c
            int32_t i
            
            do
                sub_48e950(*data_530304, 0xc)
                ecx = sub_50463c(var_1c_1)
                void* edx_6 = sub_48e980(*data_530304, 0xc, ecx)
                int32_t j_2 = *var_24_1
                
                if (j_2 s> 0)
                    void* ebx_1 = var_24_1 - 0x891c
                    void* edi_1 = var_28_1
                    int32_t j
                    
                    do
                        int32_t* var_38_1 = &__saved_ebp
                        edx_6 = sub_5047f4(edi_1, sub_5047f4(ebx_1, edx_6))
                        ecx = &__saved_ebp
                        edi_1 += 0xd4
                        ebx_1 += 0xd4
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                
                var_1c_1 += 1
                var_28_1 += 0x8d14
                var_24_1 += 0x8d14
                i = i_2
                i_2 -= 1
            while (i != 1)
    
    int32_t i_5 = *data_5303a0
    
    if (add_overflow(i_5, 0xa))
        sub_403010()
        noreturn
    
    if (i_5 + 0xa s>= 0xb)
        int32_t i_3 = i_5
        int32_t var_1c_2 = 0xb
        void* edi_3 = data_5301b0 + 0x60c40
        int32_t i_1
        
        do
            sub_48e950(*data_530304, 0xc)
            ecx = sub_50463c(var_1c_2)
            void* edx_8 = sub_48e980(*data_530304, 0xc, ecx)
            int32_t j_3 = *edi_3
            
            if (j_3 s> 0)
                void* ebx_2 = edi_3 - 0x891c
                int32_t j_1
                
                do
                    edx_8 = sub_5047f4(ebx_2, edx_8)
                    ecx = &__saved_ebp
                    ebx_2 += 0xd4
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
            
            var_1c_2 += 1
            edi_3 += 0x8d14
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    return sub_48e980(*data_530304, 0xb, ecx)
}
