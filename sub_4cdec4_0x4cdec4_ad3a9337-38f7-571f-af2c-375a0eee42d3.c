// ============================================================
// 函数名称: sub_4cdec4
// 虚拟地址: 0x4cdec4
// WARP GUID: ad3a9337-38f7-571f-af2c-375a0eee42d3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d5ba0, sub_4d3e30, sub_4ceed4, sub_4746a0, sub_408e1c, sub_4cc200, sub_4cc6a0, sub_4d5b64, sub_4d5b1c, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4c62e8
// ============================================================

int32_tsub_4cdec4()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_2a4 = ebx
    int32_t esi
    int32_t var_2a8 = esi
    int32_t edi
    int32_t var_2ac = edi
    int32_t var_29c = 0
    void* var_2a0 = nullptr
    int32_t* var_2b0 = &var_4
    int32_t (* var_2b4)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i_4 = 0xa
    void var_298
    void* var_34 = &var_298
    void var_158
    void* esi_1 = &var_158
    int32_t i
    
    do
        *var_34 = 0
        ebx.b = 7
        void* eax_2 = esi_1
        char j
        
        do
            *eax_2 = 0
            eax_2 += 4
            j = ebx.b
            ebx.b -= 1
        while (j != 1)
        esi_1 += 0x1c
        var_34 += 4
        i = i_4
        i_4 -= 1
    while (i != 1)
    char i_1 = 0
    int32_t edi_2 = *data_5300d0
    
    if (edi_2 s>= 0)
        int32_t edi_3 = edi_2 + 1
        int32_t var_10_1 = 0
        
        while (i_1 == 0)
            int32_t var_28_1
            int32_t var_14
            
            if (var_10_1 != 0)
                var_14 = var_10_1
                var_28_1 = 0x1c
            else
                var_14 = 0xa
                var_28_1 = 0x54
            
            if (var_14 == 0xa)
            label_4cdf99:
                int32_t var_18_1 = 0
                int32_t ebx_1 = 0
                void* esi_2 = &data_5f0b40
                void* var_38_1 = &var_158
                
                do
                    if (*(*data_5301f4 + 0xffec) == 4 && *(*data_5301f4 + 0xfff0) s> 0
                            && *esi_2 s> 0x78)
                        *esi_2 = 0x78
                    
                    if (var_18_1 != 0)
                    label_4ce021:
                        
                        if (var_14 == 0xa || var_18_1 != 0)
                        label_4ce084:
                            
                            if (sub_4cc200(var_14, ebx_1.b) != 0)
                                bool o_8 = unimplemented  {imul eax, dword [ebp-0x10], 0x2e9c}
                                
                                if (o_8)
                                    sub_403010()
                                    noreturn
                                
                                if (*(esi_2 + var_14 * 0x174e0 - 0xd1be0) s> 0 && var_18_1 == 0xa)
                                    int32_t eax_26 = sub_4cc200(var_14, ebx_1.b)
                                    bool o_9 = unimplemented  {imul edx, dword [ebp-0x10], 0x7}
                                    
                                    if (o_9)
                                        sub_403010()
                                        noreturn
                                    
                                    *(var_38_1 + var_14 * 0x1c - 0x1c) = eax_26
                                    break
                            else
                                var_18_1 = 0xa
                        else
                            if (sub_4cc200(var_14, ebx_1.b) s>= 5)
                                goto label_4ce084
                            
                            if (sub_4cc6a0(var_14, ebx_1.b) == 0)
                                goto label_4ce084
                            
                            int32_t eax_20 = sub_4cc200(var_14, ebx_1.b)
                            
                            if (add_overflow(0xa, neg.d(eax_20)))
                                sub_403010()
                                noreturn
                            
                            if (neg.d(0xa - eax_20) == 0x80000000)
                                sub_403010()
                                noreturn
                            
                            bool o_7 = unimplemented  {imul eax, dword [ebp-0x10], 0x7}
                            
                            if (o_7)
                                sub_403010()
                                noreturn
                            
                            *(var_38_1 + var_14 * 0x1c - 0x1c) = neg.d(0xa - eax_20)
                    else
                        if (sub_4cc200(var_14, ebx_1.b) s<= var_28_1)
                            goto label_4ce021
                        
                        int32_t eax_12 = sub_4cc200(var_14, ebx_1.b)
                        int32_t eax_13 = eax_12 - var_28_1
                        
                        if (add_overflow(eax_12, neg.d(var_28_1)))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(eax_13, 5))
                            sub_403010()
                            noreturn
                        
                        bool o_4 = unimplemented  {imul edx, dword [ebp-0x10], 0x7}
                        
                        if (o_4)
                            sub_403010()
                            noreturn
                        
                        *(var_38_1 + var_14 * 0x1c - 0x1c) = eax_13 + 5
                    
                    ebx_1 += 1
                    var_38_1 += 4
                    esi_2 += 0x353c
                while (ebx_1.b != 4)
            else
                bool o_1 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + var_14 * 0x208 + 0x1fea0) != 0)
                    goto label_4cdf99
            
            var_10_1 += 1
            int32_t temp6_1 = edi_3
            edi_3 -= 1
            
            if (temp6_1 == 1)
                break
    
    int32_t i_2 = 1
    void* esi_3 = &var_298
    void* var_34_1 = &var_158
    int32_t var_38_2 = 0x54a450
    
    do
        *esi_3 = 0
        int32_t ebx_2 = 0
        void* edi_4 = var_34_1
        
        do
            int32_t eax_31 = sub_4d5ba0(ebx_2.b) * *edi_4
            bool o_10 = unimplemented  {imul dword [ebp-0x14]}
            
            if (o_10)
                sub_403010()
                noreturn
            
            int32_t temp4_1 = *esi_3
            *esi_3 += eax_31
            
            if (add_overflow(temp4_1, eax_31))
                sub_403010()
                noreturn
            
            ebx_2 += 1
            edi_4 += 4
        while (ebx_2.b != 7)
        
        if (*esi_3 != 0)
            ebx_2.b = 4
            char var_2d_1 = 1
            
            while (*esi_3 != 0)
                if (var_2d_1 == 0)
                    if (ebx_2.b == 0)
                        sub_408e1c(*esi_3, &var_29c)
                        int32_t var_2bc_1 = var_29c
                        int32_t var_2c0_1 = 0x4ce3f0
                        int32_t var_2c4_1 = 0x4ce3f0
                        sub_408e1c(i_2, &var_2a0)
                        sub_4746a0(var_2a0, 0x16, *data_530304, sub_4ce3ef+1, sub_4ce3ef+1)
                        esp_1 = &ExceptionList
                        int32_t j_4 = 0xa
                        void* edi_5 = &var_298
                        void* var_3c_1 = &var_158
                        int32_t j_1
                        
                        do
                            *edi_5 = 0
                            char k_1 = 7
                            void* ecx_5 = var_3c_1
                            char k
                            
                            do
                                *ecx_5 = 0
                                ecx_5 += 4
                                k = k_1
                                k_1 -= 1
                            while (k != 1)
                            var_3c_1 += 0x1c
                            edi_5 += 4
                            j_1 = j_4
                            j_4 -= 1
                        while (j_1 != 1)
                        break
                    
                    int32_t eax_38 = sub_4d5b1c(ebx_2.b)
                    
                    if (add_overflow(eax_38, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    ebx_2 = sub_4d5b64(eax_38 - 1)
                
                var_2d_1 = 0
                
                if (*esi_3 s<= 0)
                    int32_t eax_47 = sub_4d5ba0(ebx_2.b)
                    int32_t edx_17 = *esi_3
                    
                    if (neg.d(edx_17) == 0x80000000)
                        sub_403010()
                        noreturn
                    
                    if (eax_47 s<= neg.d(edx_17))
                        int32_t edi_7 = ebx_2 & 0x7f
                        bool o_16 = unimplemented  {imul eax, edi, 0xd4f}
                        
                        if (o_16)
                            sub_403010()
                            noreturn
                        
                        int32_t eax_49 = *(var_38_2 + edi_7 * 0x353c - 0x14010)
                        
                        if (add_overflow(eax_49, neg.d(*(var_34_1 + (edi_7 << 2)))))
                            sub_403010()
                            noreturn
                        
                        if (eax_49 - *(var_34_1 + (edi_7 << 2)) s>= 1)
                            int32_t eax_52
                            eax_52.b = ebx_2.b
                            int32_t temp31_1 = *(var_34_1 + (eax_52 << 2))
                            *(var_34_1 + (eax_52 << 2)) += 1
                            
                            if (add_overflow(temp31_1, 1))
                                sub_403010()
                                noreturn
                            
                            int32_t eax_54 = sub_4d5ba0(ebx_2.b)
                            int32_t temp32_1 = *esi_3
                            *esi_3 += eax_54
                            
                            if (add_overflow(temp32_1, eax_54))
                                sub_403010()
                                noreturn
                            
                            var_2d_1 = 1
                else if (sub_4d5ba0(ebx_2.b) s<= *esi_3)
                    int32_t eax_43
                    eax_43.b = ebx_2.b
                    int32_t temp16_1 = *(var_34_1 + (eax_43 << 2))
                    *(var_34_1 + (eax_43 << 2)) -= 1
                    
                    if (add_overflow(temp16_1, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    int32_t eax_45 = sub_4d5ba0(ebx_2.b)
                    int32_t temp19_1 = *esi_3
                    *esi_3 -= eax_45
                    
                    if (add_overflow(temp19_1, neg.d(eax_45)))
                        sub_403010()
                        noreturn
                    
                    var_2d_1 = 1
        
        i_2 += 1
        var_38_2 += 0x174e0
        var_34_1 += 0x1c
        esi_3 += 4
    while (i_2 != 0xb)
    
    char var_2d_2 = 0
    int32_t i_3 = 1
    void* var_38_3 = &var_298
    void* var_34_2 = &var_158
    
    do
        *var_38_3 = 0
        int32_t ebx_3 = 0
        void* esi_4 = var_34_2
        void* var_40_1 = &data_5f0b40
        
        do
            int32_t j_7 = *esi_4
            int32_t eax
            
            if (j_7 s< 0)
                var_2d_2 = 1
                int32_t j_8 = neg.d(j_7)
                
                if (neg.d(j_7) == 0x80000000)
                    sub_403010()
                    noreturn
                
                int32_t eax_58 = *var_40_1
                int32_t eax_59 = eax_58 - j_8
                
                if (add_overflow(eax_58, neg.d(j_8)))
                    sub_403010()
                    noreturn
                
                if (eax_59 s< 0)
                    *(esp_1 - 4) = 0xffffffff
                    
                    if (neg.d(eax_59) == 0x80000000)
                        sub_403010()
                        noreturn
                    
                    sub_4d3e30(neg.d(eax_59), ebx_3, 9)
                
                int32_t j_5 = j_8
                
                if (j_5 s> 0)
                    int32_t j_2
                    
                    do
                        *(esp_1 - 4) = sub_4d5ba0(ebx_3.b)
                        *(esp_1 - 8) = 1
                        *(esp_1 - 0xc) = 4
                        *(esp_1 - 0x10) = 1
                        esp_1 -= 0x10
                        sub_4ceed4(eax, 9, i_3)
                        j_2 = j_5
                        j_5 -= 1
                    while (j_2 != 1)
            else if (j_7 s> 0)
                var_2d_2 = 1
                int32_t j_6 = j_7
                
                if (j_6 s> 0)
                    int32_t j_3
                    
                    do
                        *(esp_1 - 4) = sub_4d5ba0(ebx_3.b)
                        *(esp_1 - 8) = 1
                        *(esp_1 - 0xc) = 4
                        *(esp_1 - 0x10) = 1
                        esp_1 -= 0x10
                        sub_4ceed4(eax, i_3, 9)
                        j_3 = j_6
                        j_6 -= 1
                    while (j_3 != 1)
            ebx_3 += 1
            var_40_1 += 0x353c
            esi_4 += 4
        while (ebx_3.b != 7)
        
        if (var_2d_2 != 0)
            break
        
        i_3 += 1
        var_34_2 += 0x1c
        var_38_3 += 4
    while (i_3 != 0xb)
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_4ce3e5
    return sub_403e1c(&var_2a0, 2)
}
