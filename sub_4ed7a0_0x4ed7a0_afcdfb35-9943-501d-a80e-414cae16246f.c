// ============================================================
// 函数名称: sub_4ed7a0
// 虚拟地址: 0x4ed7a0
// WARP GUID: afcdfb35-9943-501d-a80e-414cae16246f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_404054, sub_4748fc, sub_404138, sub_4ed16c, sub_4837ec, sub_4f2e8c, sub_4ec978, sub_4ed4d4, sub_402bdc, sub_403010, sub_4ca008, sub_4d69e8, sub_51cc08, sub_404078, sub_404188, sub_4ee7d8, sub_4d36c4, sub_51dbe0, sub_4ec9b4, sub_47ab08, sub_527230, sub_4ed284, sub_4eca90, sub_4eca48, sub_403df8, sub_4ed638, sub_4ee818, sub_524d14, sub_528320, sub_51f880, sub_408e80
// [被调用的父级函数]: sub_4ed16c, sub_4ee134
// ============================================================

void*sub_4ed7a0()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_130 = ebx
    int32_t esi
    int32_t var_134 = esi
    int32_t edi
    int32_t var_138 = edi
    void* var_12c = nullptr
    char* var_28 = nullptr
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t* var_13c = &var_4
    int32_t (* var_140)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx_1 = (data_7a7644 << 3) + &data_7a6eb8
    int32_t eax
    eax.b = *ebx_1
    struct _EXCEPTION_REGISTRATION_RECORD* var_154
    void* ecx
    
    if (eax.b != 9)
        switch (eax.b)
            case 2
                *(*data_5301f4 + 0x1002c) = sx.d(*(ebx_1 + 1))
                *(*data_5301f4 + 0x10030) = sx.d(*(ebx_1 + 2))
                sub_4ed284(*(ebx_1 + 4))
                esp = &var_8
                long double x87_r0
                
                if (sub_404078(
                        *(sub_47ab08(*data_530304, *data_530894, *data_53093c, x87_r0, var_12c) + 4)) s<= 0xf0)
                    void* eax_146 = data_530894
                    *eax_146
                    bool o_12 = unimplemented  {imul eax, dword [eax], 0x1038}
                    
                    if (o_12)
                        sub_403010()
                        noreturn
                    
                    void* edx_48 = data_53093c
                    *edx_48
                    bool o_13 = unimplemented  {imul edx, dword [edx], 0x23}
                    
                    if (o_13)
                        sub_403010()
                        noreturn
                    
                    *(*(*data_530304 + 0xab0) + *eax_146 * 0x81c0 + *edx_48 * 0x118 - 0xf4) = 6
                else
                    void* eax_143 = data_530894
                    *eax_143
                    bool o_10 = unimplemented  {imul eax, dword [eax], 0x1038}
                    
                    if (o_10)
                        sub_403010()
                        noreturn
                    
                    void* edx_43 = data_53093c
                    *edx_43
                    bool o_11 = unimplemented  {imul edx, dword [edx], 0x23}
                    
                    if (o_11)
                        sub_403010()
                        noreturn
                    
                    *(*(*data_530304 + 0xab0) + *eax_143 * 0x81c0 + *edx_43 * 0x118 - 0xf4) = 0xfffc
                
                sub_4eca48()
                
                if (data_7a7648 s<= 0)
                    sub_4837ec(*data_530304, *data_530894, true)
                else
                    int32_t temp14_1 = data_7a7648
                    data_7a7648 -= 1
                    
                    if (add_overflow(temp14_1, 0xffffffff))
                        sub_403010()
                        noreturn
            case 3
                eax.b = *(ebx_1 + 1)
                
                switch (eax.b)
                    case 1
                        int32_t* var_148_5 = &var_4
                        ebp_1 = sub_4ed4d4(0xb, *(ebx_1 + 4), ecx)
                        esp = &ExceptionList
                    case 2
                        void* eax_69 = *data_5301f4
                        int32_t temp4_1 = *(eax_69 + 0x4584)
                        *(eax_69 + 0x4584) += 1
                        
                        if (add_overflow(temp4_1, 1))
                            sub_403010()
                            noreturn
                        
                        sub_528320(*data_5301f4, *(*data_5301f4 + 4), 1)
                    case 3
                        *(data_5301b0 + 0x60c40) = 0
                        *(data_5301b0 + 0x69954) = 0
                        sub_4ca008()
                        int32_t* var_148_6 = &var_4
                        ebp_1 = sub_4ed638(0xc, *(ebx_1 + 4), nullptr)
                        esp = &ExceptionList
                    case 4
                        sub_528320(*data_5301f4, *(*data_5301f4 + 4), 0)
                        *(*data_5301f4 + 0x200a8) = 0
                        *(*data_5301f4 + 0x202b0) = 0
                        *(*data_5301f4 + 0x208c8) = 0
                        *(*data_5301f4 + 0x20ad0) = 0
                        *(*data_5301f4 + 0x20cd8) = 0
                    case 5
                        int32_t* var_148_7 = &var_4
                        ebp_1 = sub_4ed638(0xc, *(ebx_1 + 4), ecx)
                        esp = &ExceptionList
                    case 6
                        sub_4eca90(*data_530a0c)
            case 4
                sub_4837ec(*data_530304, *data_530894, false)
                *(*data_530304 + 0x9b0) = 0
                int32_t var_148_14 = 0
                int32_t var_14c_10 = 0
                void* const var_150_8 = nullptr
                var_154 = nullptr
                esp = &var_154
                sub_4748fc(*data_530304, *(ebx_1 + 4), "Tutorial  ", var_154, var_150_8, var_14c_10)
                
                if (*data_530144 != 0)
                    void* eax_134
                    eax_134.b = 1
                    ebp_1 = sub_4ed16c(eax_134.b)
            case 5
                sub_404188(*(ebx_1 + 4), 0x4ee020)
                
                if (eax.b != 5)
                    sub_404188(*(ebx_1 + 4), 0x4ee02c)
                    
                    if (eax.b != 5)
                        sub_404188(*(ebx_1 + 4), 0x4ee038)
                        
                        if (eax.b != 5)
                            sub_404188(*(ebx_1 + 4), 0x4ee044)
                            
                            if (eax.b != 5)
                                sub_404188(*(ebx_1 + 4), 0x4ee050)
                                
                                if (eax.b != 5)
                                    sub_404188(*(ebx_1 + 4), 0x4ee05c)
                                    
                                    if (eax.b == 5)
                                        int32_t var_148_13 = sx.d(*(*data_5301f4 + 0x1087a))
                                        int32_t var_14c_9 = 0
                                        int32_t var_150_7 = 0
                                        var_154 = nullptr
                                        sub_527230(1, 2, *data_5301f4, var_154.b, var_150_7, var_14c_9)
                                        esp = &ExceptionList
                                else
                                    int32_t var_148_12 = sx.d(*(*data_5301f4 + 0x10878))
                                    int32_t var_14c_8 = 0
                                    int32_t var_150_6 = 0
                                    var_154 = nullptr
                                    sub_527230(0x3c, 2, *data_5301f4, var_154.b, var_150_6, var_14c_8)
                                    esp = &ExceptionList
                            else
                                int32_t var_148_11 = sx.d(*(*data_5301f4 + 0x10878))
                                int32_t var_14c_7 = 0
                                int32_t var_150_5 = 0
                                var_154 = nullptr
                                sub_527230(0x14, 2, *data_5301f4, var_154.b, var_150_5, var_14c_7)
                                esp = &ExceptionList
                        else
                            int32_t var_148_10 = sx.d(*(*data_5301f4 + 0x10878))
                            int32_t var_14c_6 = 0
                            int32_t var_150_4 = 0
                            var_154 = nullptr
                            sub_527230(0xa, 2, *data_5301f4, var_154.b, var_150_4, var_14c_6)
                            esp = &ExceptionList
                    else
                        int32_t var_148_9 = sx.d(*(*data_5301f4 + 0x10876))
                        int32_t var_14c_5 = 0
                        int32_t var_150_3 = 0
                        var_154 = nullptr
                        sub_527230(0, 2, *data_5301f4, var_154.b, var_150_3, var_14c_5)
                        esp = &ExceptionList
                else
                    int32_t var_148_8 = sx.d(*(*data_5301f4 + 0x10874))
                    int32_t var_14c_4 = 0
                    int32_t var_150_2 = 0
                    var_154 = nullptr
                    sub_527230(0, 2, *data_5301f4, var_154.b, var_150_2, var_14c_4)
                    esp = &ExceptionList
            case 7
                eax.b = *(ebx_1 + 1)
                
                if (eax.b s< 1)
                    *data_5300d0 = sub_408e80(*(ebx_1 + 4))
                    *(*data_5301f4 + 0x456c) = sub_408e80(*(ebx_1 + 4))
                    *(data_5301b0 + 0x60c40) = 0
                    *(data_5301b0 + 0x69954) = 0
                    sub_4ca008()
                    *(*data_5301f4 + 0x10038) = 1
                    
                    for (int32_t i = 1; i != 9; i += 1)
                        bool o_4 = unimplemented  {imul eax, ebx, 0x21}
                        
                        if (o_4)
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + i * 0x21 + 0x10018) = 0
                    
                    int32_t i_5 = *data_5300d0
                    
                    if (i_5 s> 0)
                        int32_t ebx_2 = 1
                        int32_t i_1
                        
                        do
                            bool o_5 = unimplemented  {imul eax, ebx, 0x41}
                            
                            if (o_5)
                                sub_403010()
                                noreturn
                            
                            *(*data_5301f4 + ebx_2 * 0x208 + 0x1fea2) = 0xb
                            ebx_2 += 1
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                    
                    *data_5301f4
                    sub_51dbe0()
                    int32_t i_6 = *data_5300d0
                    
                    if (i_6 s> 0)
                        void* ebx_4 = data_530208 + 4
                        int32_t i_2
                        
                        do
                            uint32_t eax_54 = GetTickCount()
                            void* eax_55 = data_530a74
                            *eax_55
                            bool o_6 = unimplemented  {imul eax, dword [eax], 0x1038}
                            
                            if (o_6)
                                sub_403010()
                                noreturn
                            
                            *ebx_4
                            int32_t edi_1 = *ebx_4 * 0x23
                            bool o_7 = unimplemented  {imul edi, dword [ebx], 0x23}
                            
                            if (o_7)
                                sub_403010()
                                noreturn
                            
                            int32_t eax_59
                            int32_t edx_14
                            edx_14:eax_59 =
                                sx.q(*(*(*data_530304 + 0xab0) + *eax_55 * 0x81c0 + (edi_1 << 3) + 0xc))
                            int32_t var_148_2 = sbb.d(0, edx_14, eax_54 u< eax_59)
                            void* edx_15 = data_530a74
                            *edx_15
                            bool o_8 = unimplemented  {imul edx, dword [edx], 0x1038}
                            
                            if (o_8)
                                sub_403010()
                                noreturn
                            
                            esp = &ExceptionList
                            *(*(*data_530304 + 0xab0) + *edx_15 * 0x81c0 + (edi_1 << 3) + 0x10) =
                                eax_54 - eax_59
                            ebx_4 += 4
                            i_2 = i_6
                            i_6 -= 1
                        while (i_2 != 1)
                else if (eax.b != 9)
                    int32_t* var_148_4 = &var_4
                    ebp_1 = sub_4ed638(sx.d(eax.b), *(ebx_1 + 4), ecx)
                    esp = &ExceptionList
                else
                    *data_5301f4
                    ebp_1 = sub_51cc08(ecx, 1)
                    esp = &var_8
                    sub_4f2e8c(0)
                    int32_t i_7 = *data_5300d0
                    
                    if (i_7 s> 0)
                        int32_t ebx_5 = 1
                        void* edi_3 = data_5301b0 + 0x8980
                        int32_t i_3
                        
                        do
                            if (sub_4ee7d8() != 0)
                                ebx_5, ebp_1 = sub_4ee818(edi_3, ebx_5, &ebp_1[-8], i_7, edi_3)
                                __builtin_memcpy(edi_3, &ebp_1[-8], 0x18)
                                __builtin_memcpy(edi_3 + 0x18, &ebp_1[-8], 0x18)
                                esp = &var_8
                            
                            ebx_5 += 1
                            edi_3 += 0x8d14
                            i_3 = i_7
                            i_7 -= 1
                        while (i_3 != 1)
                    
                    int32_t i_8 = *data_5300d0
                    
                    if (i_8 s> 0)
                        int32_t ebx_6 = 1
                        int32_t i_4
                        
                        do
                            sub_4d36c4(ebx_6, 1, 6)
                            ebx_6 += 1
                            i_4 = i_8
                            i_8 -= 1
                        while (i_4 != 1)
            case 8
                char var_128[0x100]
                sub_404054(&var_128, *(ebx_1 + 4), 0xff)
                bool o_3 = unimplemented  {imul eax, eax, 0x21}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                int32_t ecx_2
                ecx_2.b = 0x20
                sub_402bdc(*data_5301f4 + sx.d(*(ebx_1 + 1)) * 0x21 + 0x10018, &var_128, ecx_2.b)
    else if (*(ebx_1 + 1) != 1)
        void* eax_13 = *data_5301f4
        int32_t temp1_1 = *(eax_13 + 0x4584)
        *(eax_13 + 0x4584) += 1
        
        if (add_overflow(temp1_1, 1))
            sub_403010()
            noreturn
        
        sub_4d69e8(*data_530304, 3)
        *(*data_5301f4 + 0xffec) = 0
        *(*data_5301f4 + 0xfff0) = 0
        *(*data_5301f4 + 0x4584) = 0
        *(*data_5301f4 + 0x10020) = 5
        *(*data_5301f4 + 0x2006c) = 5
        *(*data_5301f4 + 0x2009c) = 8
        *(*data_5301f4 + 0x200a0) = 7
        *(*data_5301f4 + 0x200a8) = 0
        *(*data_5301f4 + 0x204b8) = 0
        *(*data_5301f4 + 0x20ad0) = 0
        *(*data_5301f4 + 0x208c8) = 0
    else
        int32_t temp2_1 = *(ebx_1 + 4)
        
        if (temp2_1 == 0)
            *(data_5304fc + 0x21428) = 0
            *(data_5304fc + 0x1deec) = 3
            void* eax_11 = data_5304fc
            int32_t temp3_1 = *(eax_11 + 0x1a9b0)
            *(eax_11 + 0x1a9b0) -= 3
            
            if (add_overflow(temp3_1, 0xfffffffd))
                sub_403010()
                noreturn
        else
            int32_t var_148_1 = *(*data_530304 + 0xa64)
            void* const var_14c_1 = "\data\help\"
            int32_t var_150_1 = *(ebx_1 + 4)
            sub_404138(&var_28, 3)
            esp = &var_8
            sub_524d14(*data_5301f4, var_28, esi, edi)
            *data_5301f4
            sub_51f880()
            sub_4ec9b4()
            sub_404188(*(ebx_1 + 4), 0x4ee014)
            
            if (temp2_1 == 0)
                sub_4ec978()
            
            ebp_1 = sub_4ed16c(0)
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4edfed
    sub_403df8(&ebp_1[-0x4a])
    sub_403df8(&ebp_1[-9])
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
