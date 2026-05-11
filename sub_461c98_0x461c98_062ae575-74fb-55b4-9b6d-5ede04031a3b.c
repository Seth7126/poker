// ============================================================
// 函数名称: sub_461c98
// 虚拟地址: 0x461c98
// WARP GUID: 062ae575-74fb-55b4-9b6d-5ede04031a3b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_462540
// ============================================================

int32_t __convention("regparm")sub_461c98(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[0x28] s<= 0)
    if (arg1[0x28] s<= 0)
        *(*arg1 + 0x14) = 0x11
        *(*arg1 + 0x18) = 0
        (**arg1)()
    
    void* var_a58 = arg1[0x29]
    int32_t i
    int32_t var_a38[0xa]
    int32_t var_a10[0x280]
    
    if (*(var_a58 + 0x14) != 0 || *(var_a58 + 0x18) != 0x3f)
        *(arg1 + 0xd9) = 1
        int32_t (* ebx_1)[0x280] = &var_a10
        
        for (i = 0; i s< arg1[0xd]; i += 1)
            for (int32_t j = 0; j s< 0x40; j += 1)
                *ebx_1 = 0xffffffff
                ebx_1 = &(*ebx_1)[1]
    else
        *(arg1 + 0xd9) = 0
        i = 0
        int32_t (* eax_4)[0xa] = &var_a38
        
        while (i s< arg1[0xd])
            *eax_4 = 0
            i += 1
            eax_4 = &(*eax_4)[1]
    
    int32_t result_1 = 1
    int32_t var_a50
    int32_t var_a48
    int32_t var_a44
    int32_t var_a40
    void* var_a3c
    int32_t result
    
    while (true)
        result = result_1
        
        if (result s> arg1[0x28])
            break
        
        var_a50 = *var_a58
        
        if (var_a50 s<= 0 || var_a50 s> 4)
            void* eax_6 = *arg1
            *(eax_6 + 0x14) = 0x18
            *(eax_6 + 0x18) = var_a50
            *(eax_6 + 0x1c) = 4
            (**arg1)(var_a58, result_1, var_a50, i, var_a48, var_a44, var_a40, var_a3c)
        
        int32_t var_a4c = 0
        void* edi_1 = var_a58 + 4
        
        if (0 s< var_a50)
            do
                int32_t ebx_2 = *edi_1
                
                if (ebx_2 s< 0 || ebx_2 s>= arg1[0xd])
                    void* eax_9 = *arg1
                    *(eax_9 + 0x14) = 0x11
                    *(eax_9 + 0x18) = result_1
                    (**arg1)(var_a58, result_1, var_a50, var_a4c, var_a48, var_a44, var_a40, var_a3c)
                
                if (var_a4c s> 0 && ebx_2 s<= *(edi_1 - 4))
                    void* eax_11 = *arg1
                    *(eax_11 + 0x14) = 0x11
                    *(eax_11 + 0x18) = result_1
                    (**arg1)(var_a58, result_1, var_a50, var_a4c, var_a48, var_a44, var_a40, var_a3c)
                
                var_a4c += 1
                edi_1 += 4
            while (var_a4c s< var_a50)
        
        var_a48 = *(var_a58 + 0x14)
        var_a44 = *(var_a58 + 0x18)
        int32_t ebp_1 = *(var_a58 + 0x1c)
        var_a40 = *(var_a58 + 0x20)
        
        if (*(arg1 + 0xd9) == 0)
            if (var_a48 != 0 || var_a44 != 0x3f || ebp_1 != 0 || var_a40 != 0)
                void* eax_32 = *arg1
                *(eax_32 + 0x14) = 0xf
                *(eax_32 + 0x18) = result_1
                (**arg1)(var_a58, result_1, var_a50, var_a4c, var_a48, var_a44, var_a40, var_a3c)
            
            i = 0
            void* edi_3 = var_a58 + 4
            
            if (0 s< var_a50)
                do
                    int32_t ebx_7 = *edi_3
                    
                    if (var_a38[ebx_7] != 0)
                        void* eax_35 = *arg1
                        *(eax_35 + 0x14) = 0x11
                        *(eax_35 + 0x18) = result_1
                        (**arg1)(var_a58, result_1, var_a50, i, var_a48, var_a44, var_a40, var_a3c)
                    
                    var_a38[ebx_7] = 1
                    i += 1
                    edi_3 += 4
                while (i s< var_a50)
        else
            if (var_a48 s< 0 || var_a48 s>= 0x40 || var_a44 s< var_a48 || var_a44 s>= 0x40 || ebp_1 s< 0
                    || ebp_1 s> 0xd || var_a40 s< 0 || var_a40 s> 0xd)
                void* eax_16 = *arg1
                *(eax_16 + 0x14) = 0xf
                *(eax_16 + 0x18) = result_1
                (**arg1)(var_a58, result_1, var_a50, var_a4c, var_a48, var_a44, var_a40, var_a3c)
            
            if (var_a48 != 0)
                if (var_a50 != 1)
                    void* eax_20 = *arg1
                    *(eax_20 + 0x14) = 0xf
                    *(eax_20 + 0x18) = result_1
                    (**arg1)(var_a58, result_1, var_a50, var_a4c, var_a48, var_a44, var_a40, var_a3c)
            else if (var_a44 != 0)
                void* eax_18 = *arg1
                *(eax_18 + 0x14) = 0xf
                *(eax_18 + 0x18) = result_1
                (**arg1)(var_a58, result_1, var_a50, var_a4c, var_a48, var_a44, var_a40, var_a3c)
            
            i = 0
            var_a3c = var_a58 + 4
            
            if (0 s< var_a50)
                do
                    void* ebx_5 = &var_a10[*var_a3c * 0x40]
                    
                    if (var_a48 != 0 && *ebx_5 s< 0)
                        void* eax_24 = *arg1
                        *(eax_24 + 0x14) = 0xf
                        *(eax_24 + 0x18) = result_1
                        (**arg1)(var_a58, result_1, var_a50, i, var_a48, var_a44, var_a40, var_a3c)
                    
                    int32_t edi_2 = var_a48
                    void* ebx_6 = ebx_5 + (edi_2 << 2)
                    
                    while (edi_2 s<= var_a44)
                        if (*ebx_6 s>= 0)
                            if (ebp_1 != *ebx_6 || ebp_1 - 1 != var_a40)
                                void* eax_29 = *arg1
                                *(eax_29 + 0x14) = 0xf
                                *(eax_29 + 0x18) = result_1
                                (**arg1)(var_a58, result_1, var_a50, i, var_a48, var_a44, var_a40, 
                                    var_a3c)
                        else if (ebp_1 != 0)
                            void* eax_27 = *arg1
                            *(eax_27 + 0x14) = 0xf
                            *(eax_27 + 0x18) = result_1
                            (**arg1)(var_a58, result_1, var_a50, i, var_a48, var_a44, var_a40, var_a3c)
                        
                        edi_2 += 1
                        *ebx_6 = var_a40
                        ebx_6 += 4
                    
                    i += 1
                    var_a3c += 4
                while (i s< var_a50)
        
        var_a58 += 0x24
        result_1 += 1
    
    if (*(arg1 + 0xd9) == 0)
        result = 0
        int32_t (* ebx_9)[0xa] = &var_a38
        int32_t i_1 = 0
        
        while (i_1 s< arg1[0xd])
            if (*ebx_9 == 0)
                *(*arg1 + 0x14) = 0x2c
                result = (**arg1)(var_a58, result_1, var_a50, i_1, var_a48, var_a44, var_a40, var_a3c)
            
            i_1 += 1
            ebx_9 = &(*ebx_9)[1]
    else
        int32_t (* ebx_8)[0x280] = &var_a10
        int32_t i_2 = 0
        
        while (i_2 s< arg1[0xd])
            if (*ebx_8 s< 0)
                *(*arg1 + 0x14) = 0x2c
                result = (**arg1)(var_a58, result_1, var_a50, i_2, var_a48, var_a44, var_a40, var_a3c)
            
            i_2 += 1
            ebx_8 = &(*ebx_8)[0x40]
    
    return result
}
