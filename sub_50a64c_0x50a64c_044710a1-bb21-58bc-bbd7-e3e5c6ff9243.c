// ============================================================
// 函数名称: sub_50a64c
// 虚拟地址: 0x50a64c
// WARP GUID: 044710a1-bb21-58bc-bbd7-e3e5c6ff9243
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_4040c4, sub_4d6cdc, sub_408e1c, sub_47a9a0, sub_402bdc, sub_403e1c, sub_50a4e0, sub_403010
// [被调用的父级函数]: sub_50a598
// ============================================================

int32_tsub_50a64c()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_120 = ebx
    int32_t esi
    int32_t var_124 = esi
    int32_t edi
    int32_t var_128 = edi
    int32_t var_118 = 0
    int32_t var_11c = 0
    int32_t* var_12c = &var_4
    int32_t (* var_130)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx_1 = *data_5301f4 + 0x2006c
    sub_47a9a0(*data_53054c, *data_530438, *data_530304, ebx_1 + 0x24)
    int32_t var_c
    sub_47a9a0(*data_53084c, *data_530438, *data_530304, &var_c)
    
    if (var_c == 1)
        *(ebx_1 + 4) = 0x64
    else if (var_c != 2)
        *(ebx_1 + 4) = 0x1f4
    else
        *(ebx_1 + 4) = 0xc8
    
    sub_47a9a0(*data_52ffe4, *data_530438, *data_530304, &var_c)
    
    if (var_c == 1)
        *(ebx_1 + 8) = 2
    else if (var_c != 2)
        *(ebx_1 + 8) = 0xa
    else
        *(ebx_1 + 8) = 4
    
    sub_47a9a0(*data_5309f8, *data_530438, *data_530304, &var_c)
    
    if (var_c == 1)
        *(ebx_1 + 0xc) = 0x186a0
    else if (var_c == 2)
        *(ebx_1 + 0xc) = 7
    else if (var_c == 3)
        *(ebx_1 + 0xc) = 0xa
    else if (var_c == 4)
        *(ebx_1 + 0xc) = 0xf
    else if (var_c == 5)
        *(ebx_1 + 0xc) = 0x14
    else if (var_c != 6)
        *(ebx_1 + 0xc) = 0x1e
    else
        *(ebx_1 + 0xc) = 0x19
    
    sub_47a9a0(*data_530164, *data_530438, *data_530304, &var_c)
    *(ebx_1 + 0x10) = 0
    *(ebx_1 + 0x11) = 0
    
    if (var_c == 1)
        *(ebx_1 + 0x11) = 1
    
    if (var_c == 2)
        *(ebx_1 + 0x10) = 1
    
    sub_47a9a0(*data_5309f0, *data_530438, *data_530304, &var_c)
    *(*data_5301f4 + 0x20068) = var_c
    void* ebp_1 = sub_4d6cdc(*data_530304)
    int32_t eax_21 = *(*data_5301f4 + 0x20074)
    *(*data_5301f4 + 0x21108) = eax_21
    *(*data_5301f4 + 0x210f8) = eax_21
    *(*data_5301f4 + 0x210f0) = *(*data_5301f4 + 0x21108)
    *(*data_5301f4 + 0x210f4) = *(*data_5301f4 + 0x21108)
    
    if (*(ebx_1 + 0x11) != 0)
        void* eax_29 = *data_5301f4
        *(eax_29 + 0x21108)
        bool o_1 = unimplemented  {imul eax, dword [eax+0x21108], 0x2}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(*data_5301f4 + 0x210f4) = *(eax_29 + 0x21108) * 2
    
    int32_t eax_32 = 8
    int32_t i_3 = *(*data_530454 + 0x348)
    
    if (i_3 s> 0)
        int32_t ebx_2 = 1
        int32_t i
        
        do
            bool o_2 = unimplemented  {imul edx, ebx, 0xe9}
            
            if (o_2)
                sub_403010()
                noreturn
            
            if (*(*data_530454 + ebx_2 * 0x3a4 - 0x50) == 5)
                eax_32 = ebx_2 - 1
                
                if (not(add_overflow(ebx_2, 0xffffffff)))
                    break
                
                sub_403010()
                noreturn
            
            ebx_2 += 1
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    *data_5300d0 = eax_32
    *(*data_5301f4 + 0x456c) = *data_5300d0
    *(*data_5301f4 + 0x2006c) = sub_50a4e0(1)
    *(*data_5301f4 + 0x2009c) = sub_50a4e0(1)
    *(ebp_1 - 0xc) = 0
    int32_t i_4 = *data_5300d0
    
    if (i_4 s> 0)
        int32_t ebx_3 = 1
        *(ebp_1 - 0x10) = data_5304d8
        int32_t i_1
        
        do
            int32_t eax_39 = sub_50a4e0(ebx_3)
            bool o_4 = unimplemented  {imul eax, ebx, 0xe9}
            
            if (o_4)
                sub_403010()
                noreturn
            
            int32_t eax_40
            eax_40.b = *(*data_530454 + ebx_3 * 0x3a4 - 0x50)
            
            if (eax_40.b - 1 u>= 2)
                bool o_8 = unimplemented  {imul edx, ebx, 0xe9}
                
                if (o_8)
                    sub_403010()
                    noreturn
                
                *data_530454
                char edx_44 = eax_40.b
                char temp6_1
                
                if (edx_44 != 3)
                    temp6_1 = edx_44 - 3
                
                if (edx_44 != 3 && temp6_1 != 2)
                    bool o_11 = unimplemented  {imul edx, ebx, 0xe9}
                    
                    if (o_11)
                        sub_403010()
                        noreturn
                    
                    *data_530454
                    
                    if (eax_40.b == 0)
                        int32_t temp8_1 = *(ebp_1 - 0xc)
                        *(ebp_1 - 0xc) += 1
                        
                        if (add_overflow(temp8_1, 1))
                            sub_403010()
                            noreturn
                        
                        sub_408e1c(*(ebp_1 - 0xc), ebp_1 - 0x118)
                        sub_4040c4(ebp_1 - 0x114, "Computer ", *(ebp_1 - 0x118))
                        sub_404054(ebp_1 - 0x110, *(ebp_1 - 0x114), 0xff)
                        bool o_13 = unimplemented  {imul eax, ebx, 0xe9}
                        
                        if (o_13)
                            sub_403010()
                            noreturn
                        
                        int32_t ecx_20
                        ecx_20.b = 0x14
                        sub_402bdc(*data_530454 + ebx_3 * 0x3a4 - 0x4f, ebp_1 - 0x110, ecx_20.b)
                        bool o_14 = unimplemented  {imul eax, ebx, 0xe9}
                        
                        if (o_14)
                            sub_403010()
                            noreturn
                        
                        sub_47a9a0(**(ebp_1 - 0x10), *data_530438, *data_530304, 
                            *data_530454 + ebx_3 * 0x3a4 + 0x180)
                        bool o_15 = unimplemented  {imul eax, edi, 0xa9}
                        
                        if (o_15)
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + eax_39 * 0x2a4 + 0x2a8) = 1
                        bool o_16 = unimplemented  {imul eax, edi, 0x41}
                        
                        if (o_16)
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + eax_39 * 0x208 + 0x1fea0) = 1
                else
                    bool o_9 = unimplemented  {imul eax, edi, 0xa9}
                    
                    if (o_9)
                        sub_403010()
                        noreturn
                    
                    *(*data_5301f4 + eax_39 * 0x2a4 + 0x2a8) = 1
                    bool o_10 = unimplemented  {imul eax, edi, 0x41}
                    
                    if (o_10)
                        sub_403010()
                        noreturn
                    
                    *(*data_5301f4 + eax_39 * 0x208 + 0x1fea0) = 0
            else
                if (ebx_3 != *(*data_530454 + 0x350))
                    bool o_6 = unimplemented  {imul eax, edi, 0xa9}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    *(*data_5301f4 + eax_39 * 0x2a4 + 0x2a8) = 2
                else
                    bool o_5 = unimplemented  {imul eax, edi, 0xa9}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    *(*data_5301f4 + eax_39 * 0x2a4 + 0x2a8) = 0
                
                bool o_7 = unimplemented  {imul eax, edi, 0x41}
                
                if (o_7)
                    sub_403010()
                    noreturn
                
                *(*data_5301f4 + eax_39 * 0x208 + 0x1fea0) = 1
            
            ebx_3 += 1
            *(ebp_1 - 0x10) += 4
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    int32_t i_5 = *data_5300d0
    
    if (i_5 s> 0)
        int32_t ebx_4 = 1
        int32_t i_2
        
        do
            int32_t eax_62 = sub_50a4e0(ebx_4) * 0x65
            bool o_17 = unimplemented  {imul eax, edi, 0x65}
            
            if (o_17)
                sub_403010()
                noreturn
            
            bool o_18 = unimplemented  {imul edx, ebx, 0xe9}
            
            if (o_18)
                sub_403010()
                noreturn
            
            int32_t ecx_23
            ecx_23.b = 0x64
            sub_402bdc(*data_5301f4 + eax_62 + 0x10e43, *data_530454 + ebx_4 * 0x3a4 - 0x4f, ecx_23.b)
            ebx_4 += 1
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
    
    *(data_530598 + 0x20) = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_12c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_50abcc
    return sub_403e1c(ebp_1 - 0x118, 2)
}
