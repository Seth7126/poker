// ============================================================
// 函数名称: sub_51e1c0
// 虚拟地址: 0x51e1c0
// WARP GUID: 829d9f5b-e442-5e9c-8edb-66cef404fb25
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_404054, sub_47a180, sub_51e034, sub_47a1c0, sub_4c1108, sub_4cb50c, sub_40401c, sub_4cc428, sub_4834fc, sub_402bdc, sub_4c0924, sub_51dbe0, sub_50971c, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4c1fb8, sub_5255c0, sub_524d14
// ============================================================

int32_t __fastcallsub_51e1c0(int32_t arg1, char arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t i_5 = 0x38
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_5
        i_5 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    *(esp_2 - 8) = arg3
    *(esp_2 - 0xc) = arg4
    int32_t __saved_eax_1
    int32_t __saved_eax = __saved_eax_1
    void* esi = data_530304
    *(esp_2 - 0x10) = &var_4
    *(esp_2 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x18) = fsbase->NtTib.ExceptionList
    void* esp_8 = esp_2 - 0x18
    fsbase->NtTib.ExceptionList = esp_8
    void* eax_1
    eax_1.b = *(*data_5301f4 + 4)
    
    if (eax_1.b != 3)
        data_5301f4
        
        if (eax_1.b == 4)
            void* eax_7 = data_530658
            *eax_7
            bool o_3 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_3)
                sub_403010()
                noreturn
            
            *(*(*esi + 0xab0) + *eax_7 * 0x81c0 + 2) = 0x17c
            void* eax_9 = data_530658
            *eax_9
            bool o_4 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_4)
                sub_403010()
                noreturn
            
            void* edx_11 = data_5305e4
            *edx_11
            bool o_5 = unimplemented  {imul edx, dword [edx], 0x23}
            
            if (o_5)
                sub_403010()
                noreturn
            
            *(*(*esi + 0xab0) + *eax_9 * 0x81c0 + *edx_11 * 0x118 - 0xf6) = 0xff2e
        else if (eax_1.b - 5 u>= 2)
            data_5301f4
            char temp5_1 = eax_1.b
            eax_1.b -= 7
            
            if (temp5_1 != 7)
                void* eax_29 = data_530658
                *eax_29
                bool o_17 = unimplemented  {imul eax, dword [eax], 0x1038}
                
                if (o_17)
                    sub_403010()
                    noreturn
                
                *(*(*esi + 0xab0) + *eax_29 * 0x81c0 + 2) = 0x122
            else
                sub_4c1108()
                void* eax_18 = data_530658
                *eax_18
                bool o_9 = unimplemented  {imul eax, dword [eax], 0x1038}
                
                if (o_9)
                    sub_403010()
                    noreturn
                
                *(*(*esi + 0xab0) + *eax_18 * 0x81c0 + 6) = 0x1e0
                void* eax_20 = data_530658
                *eax_20
                bool o_10 = unimplemented  {imul eax, dword [eax], 0x1038}
                
                if (o_10)
                    sub_403010()
                    noreturn
                
                *(*(*esi + 0xab0) + *eax_20 * 0x81c0 + 2) = 0xd2
                void* eax_22 = data_530658
                *eax_22
                bool o_11 = unimplemented  {imul eax, dword [eax], 0x1038}
                
                if (o_11)
                    sub_403010()
                    noreturn
                
                *(*(*esi + 0xab0) + *eax_22 * 0x81c0 + 8) = 0x35
                void* eax_24 = data_530658
                *eax_24
                bool o_12 = unimplemented  {imul eax, dword [eax], 0x1038}
                
                if (o_12)
                    sub_403010()
                    noreturn
                
                *(*(*esi + 0xab0) + *eax_24 * 0x81c0 + 4) = 0x222
                void* eax_26 = data_530658
                *eax_26
                bool o_13 = unimplemented  {imul eax, dword [eax], 0x1038}
                
                if (o_13)
                    sub_403010()
                    noreturn
                
                int32_t i_6 = sx.d(*(*(*esi + 0xab0) + *eax_26 * 0x81c0 + 0x8130))
                
                if (i_6 s> 0)
                    int32_t eax_28 = 1
                    int32_t i_1
                    
                    do
                        void* ecx = data_530658
                        *ecx
                        bool o_14 = unimplemented  {imul ecx, dword [ecx], 0x1038}
                        
                        if (o_14)
                            sub_403010()
                            noreturn
                        
                        *(esp_8 - 4) = *(*esi + 0xab0) + *ecx * 0x81c0
                        int32_t edx_31 = eax_28 * 0x23
                        bool o_15 = unimplemented  {imul edx, eax, 0x23}
                        
                        if (o_15)
                            sub_403010()
                            noreturn
                        
                        i_5 = *(esp_8 - 4)
                        
                        if (*(i_5 + (edx_31 << 3) - 0xf4) == 0)
                            void* ecx_3 = data_530658
                            *ecx_3
                            bool o_16 = unimplemented  {imul ecx, dword [ecx], 0x1038}
                            
                            if (o_16)
                                sub_403010()
                                noreturn
                            
                            *(esp_8 - 4) = *(*esi + 0xab0) + *ecx_3 * 0x81c0
                            i_5 = *(esp_8 - 4)
                            *(i_5 + (edx_31 << 3) - 0xf4) = 0xa
                        
                        eax_28 += 1
                        i_1 = i_6
                        i_6 -= 1
                    while (i_1 != 1)
        else
            void* eax_12 = data_530658
            *eax_12
            bool o_6 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_6)
                sub_403010()
                noreturn
            
            *(*(*esi + 0xab0) + *eax_12 * 0x81c0 + 2) = 0x140
    else
        void* eax_2 = data_530658
        *eax_2
        bool o = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o)
            sub_403010()
            noreturn
        
        *(*(*esi + 0xab0) + *eax_2 * 0x81c0 + 2) = 0x14a
        void* eax_4 = data_530658
        *eax_4
        bool o_1 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_1)
            sub_403010()
            noreturn
        
        void* edx_4 = data_5305e4
        *edx_4
        bool o_2 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_2)
            sub_403010()
            noreturn
        
        *(*(*esi + 0xab0) + *eax_4 * 0x81c0 + *edx_4 * 0x118 - 0xf6) = 0xff6a
    
    if (*(*data_5301f4 + 4) != 7)
        void* eax_33 = data_530658
        *eax_33
        bool o_18 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_18)
            sub_403010()
            noreturn
        
        *(*(*esi + 0xab0) + *eax_33 * 0x81c0 + 6) = 0
        void* eax_35 = data_530658
        *eax_35
        bool o_19 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_19)
            sub_403010()
            noreturn
        
        *(*(*esi + 0xab0) + *eax_35 * 0x81c0 + 8) = 0
        void* eax_37 = data_530658
        *eax_37
        bool o_20 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_20)
            sub_403010()
            noreturn
        
        *(*(*esi + 0xab0) + *eax_37 * 0x81c0 + 4) = 0x230
        void* eax_39 = data_530658
        *eax_39
        bool o_21 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_21)
            sub_403010()
            noreturn
        
        int32_t i_7 = sx.d(*(*(*esi + 0xab0) + *eax_39 * 0x81c0 + 0x8130))
        
        if (i_7 s> 0)
            int32_t eax_41 = 1
            int32_t i_2
            
            do
                void* ecx_6 = data_530658
                *ecx_6
                bool o_22 = unimplemented  {imul ecx, dword [ecx], 0x1038}
                
                if (o_22)
                    sub_403010()
                    noreturn
                
                *(esp_8 - 4) = *(*esi + 0xab0) + *ecx_6 * 0x81c0
                int32_t edx_42 = eax_41 * 0x23
                bool o_23 = unimplemented  {imul edx, eax, 0x23}
                
                if (o_23)
                    sub_403010()
                    noreturn
                
                i_5 = *(esp_8 - 4)
                
                if (*(i_5 + (edx_42 << 3) - 0xf4) == 0xa)
                    void* ecx_9 = data_530658
                    *ecx_9
                    bool o_24 = unimplemented  {imul ecx, dword [ecx], 0x1038}
                    
                    if (o_24)
                        sub_403010()
                        noreturn
                    
                    *(esp_8 - 4) = *(*esi + 0xab0) + *ecx_9 * 0x81c0
                    i_5 = *(esp_8 - 4)
                    *(i_5 + (edx_42 << 3) - 0xf4) = 0
                
                eax_41 += 1
                i_2 = i_7
                i_7 -= 1
            while (i_2 != 1)
    
    int32_t var_1c4
    int32_t var_84
    
    if (*(*esi + 0xcf9) != 0)
    label_51f7cc:
        int32_t eax_271 = *(*data_5301f4 + 0x10020)
        bool o_57 = unimplemented  {imul edx, eax, 0xa9}
        
        if (o_57)
            sub_403010()
            noreturn
        
        *(*data_5301f4 + eax_271 * 0x2a4 + 0x2a8)
        *(*data_5301f4 + 0x25b3c) = eax_271
        __builtin_memcpy(*data_5301f4 + 0x10888, *data_5301f4 + 0x1026c, 0x61c)
        *(*data_5301f4 + 0x10160) = 0
    else
        void* eax_44 = *data_5301f4
        *(eax_44 + 0x10020)
        bool o_25 = unimplemented  {imul eax, dword [eax+0x10020], 0xa9}
        
        if (o_25)
            sub_403010()
            noreturn
        
        if (*(*data_5301f4 + *(eax_44 + 0x10020) * 0x2a4 + 0x2a8) != 0
                || *(*data_5301f4 + 0x111f9) != 0)
            goto label_51f7cc
        
        *(*esi + 0x9b4) = *(data_530208 + 4)
        *data_53041c = 1
        
        if (*(*data_5301f4 + 0x1026f) != 0)
            void* edi_8 = *data_5301f4 + 0x1026c
            void* eax_55 = data_530658
            *eax_55
            bool o_26 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_26)
                sub_403010()
                noreturn
            
            int32_t i_8 = sx.d(*(*(*esi + 0xab0) + *eax_55 * 0x81c0 + 0x8130))
            
            if (i_8 s> 0)
                int32_t var_10_1 = 1
                int32_t i_3
                
                do
                    *(esp_8 - 4) = 0
                    i_5 = sub_47a1c0(var_10_1, *data_530658, *esi)
                    var_10_1 += 1
                    i_3 = i_8
                    i_8 -= 1
                while (i_3 != 1)
            
            *(edi_8 + 2)
            
            if (*(edi_8 + 0x618) != 0x62)
                *(esp_8 - 4) = 0
                sub_47a1c0(*data_5309ac, *data_530658, *esi)
                *(esp_8 - 4) = 0
                sub_47a1c0(*data_530710, *data_530658, *esi)
                *(esp_8 - 4) = 0
                sub_47a1c0(*data_5304c8, *data_530658, *esi)
                *(esp_8 - 4) = 0
                sub_47a1c0(*data_5301c4, *data_530658, *esi)
            else
                sub_4cc428(i_5)
            
            int32_t eax_62 = *(edi_8 + 0x10)
            int32_t var_14_1
            int32_t ecx_61
            int32_t ebx_2
            int80_t x87_r0
            
            if (eax_62 == 8)
                *data_530300
                var_14_1 = *data_5302e0
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_530300, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_52feec, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_52ff6c, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_53077c, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_53049c, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_530970, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_53087c, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_40401c(sub_47a1c0(*data_5302e0, *data_530658, *esi), edi_8 + 0x5b6)
                int32_t var_20
                *(esp_8 - 4) = var_20
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_530300, x87_r0), edi_8 + 0x37f)
                int32_t var_24
                void* esp_37
                *esp_37 = var_24
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_52feec, x87_r0), edi_8 + 0x3d0)
                int32_t var_28
                *esp_37 = var_28
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_52ff6c, x87_r0), edi_8 + 0x421)
                int32_t var_2c
                *esp_37 = var_2c
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_53077c, x87_r0), edi_8 + 0x472)
                int32_t var_30
                *esp_37 = var_30
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_53049c, x87_r0), edi_8 + 0x4c3)
                int32_t var_34
                *esp_37 = var_34
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_530970, x87_r0), edi_8 + 0x514)
                int32_t var_38
                *esp_37 = var_38
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_53087c, x87_r0), edi_8 + 0x565)
                int32_t var_3c
                *esp_37 = var_3c
                ecx_61, ebx_2 = sub_47ab08(*esi, *data_530658, *data_5302e0, x87_r0)
                esp_8 = esp_37 + 4
            else if (eax_62 == 7)
                *data_52feec
                var_14_1 = *data_5302e0
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_52feec, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_52ff6c, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_53077c, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_53049c, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_530970, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_53087c, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_40401c(sub_47a1c0(*data_5302e0, *data_530658, *esi), edi_8 + 0x37f)
                int32_t var_40
                *(esp_8 - 4) = var_40
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_52feec, x87_r0), edi_8 + 0x3d0)
                int32_t var_44
                *(esp_8 - 4) = var_44
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_52ff6c, x87_r0), edi_8 + 0x421)
                int32_t var_48
                void* esp_68
                *esp_68 = var_48
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_53077c, x87_r0), edi_8 + 0x472)
                int32_t var_4c
                *esp_68 = var_4c
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_53049c, x87_r0), edi_8 + 0x4c3)
                int32_t var_50
                *esp_68 = var_50
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_530970, x87_r0), edi_8 + 0x514)
                int32_t var_54
                *esp_68 = var_54
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_53087c, x87_r0), edi_8 + 0x565)
                int32_t var_58
                *esp_68 = var_58
                ecx_61, ebx_2 = sub_47ab08(*esi, *data_530658, *data_5302e0, x87_r0)
                esp_8 = esp_68 + 4
            else if (eax_62 == 6)
                *data_530504
                var_14_1 = *data_530260
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_530504, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_53055c, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_53011c, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_530a2c, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_53039c, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_40401c(sub_47a1c0(*data_530260, *data_530658, *esi), edi_8 + 0x37f)
                int32_t var_5c
                *(esp_8 - 4) = var_5c
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_530504, x87_r0), edi_8 + 0x3d0)
                int32_t var_60
                *(esp_8 - 4) = var_60
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_53055c, x87_r0), edi_8 + 0x421)
                int32_t var_64
                *(esp_8 - 4) = var_64
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_53011c, x87_r0), edi_8 + 0x472)
                int32_t var_68
                void* esp_95
                *esp_95 = var_68
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_530a2c, x87_r0), edi_8 + 0x4c3)
                int32_t var_6c
                *esp_95 = var_6c
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_53039c, x87_r0), edi_8 + 0x514)
                int32_t var_70
                *esp_95 = var_70
                ecx_61, ebx_2 = sub_47ab08(*esi, *data_530658, *data_530260, x87_r0)
                esp_8 = esp_95 + 4
            else if (eax_62 == 5)
                *data_530600
                var_14_1 = *data_5304a8
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_530600, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_530664, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_530248, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_52ff34, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_40401c(sub_47a1c0(*data_5304a8, *data_530658, *esi), edi_8 + 0x37f)
                int32_t var_74
                *(esp_8 - 4) = var_74
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_530600, x87_r0), edi_8 + 0x3d0)
                int32_t var_78
                *(esp_8 - 4) = var_78
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_530664, x87_r0), edi_8 + 0x421)
                int32_t var_7c
                *(esp_8 - 4) = var_7c
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_530248, x87_r0), edi_8 + 0x472)
                int32_t var_80
                *(esp_8 - 4) = var_80
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_52ff34, x87_r0), edi_8 + 0x4c3)
                void* esp_118
                *esp_118 = var_84
                ecx_61, ebx_2 = sub_47ab08(*esi, *data_530658, *data_5304a8, x87_r0)
            else if (eax_62 == 4)
                *data_5300b0
                var_14_1 = *data_530648
                *(edi_8 + 2)
                *(edi_8 + 0x618)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_5300b0, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_530110, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_530920, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_530648, *data_530658, *esi)
                int32_t ecx_183
                void* esp_145
                
                if (*(edi_8 + 0x618) != 0x62)
                    *(esp_8 - 4) = 1
                    sub_47a180(*data_5300b0, *data_530658, *esi)
                    *(esp_8 - 4) = 1
                    sub_47a180(*data_530110, *data_530658, *esi)
                    *(esp_8 - 4) = 1
                    sub_47a180(*data_530920, *data_530658, *esi)
                    *(esp_8 - 4) = 1
                    ecx_183 = sub_47a180(*data_530648, *data_530658, *esi)
                    esp_145 = esp_8
                else
                    void* eax_156 = *data_5301f4
                    *(eax_156 + 0x10020)
                    bool o_27 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                    
                    if (o_27)
                        sub_403010()
                        noreturn
                    
                    void* eax_158 = *data_5301f4 + *(eax_156 + 0x10020) * 0x208 + 0x1fea0
                    void* eax_159 = data_530658
                    *eax_159
                    bool o_28 = unimplemented  {imul eax, dword [eax], 0x1038}
                    
                    if (o_28)
                        sub_403010()
                        noreturn
                    
                    void* edx_200 = data_5300b0
                    *edx_200
                    bool o_29 = unimplemented  {imul edx, dword [edx], 0x23}
                    
                    if (o_29)
                        sub_403010()
                        noreturn
                    
                    *(*(*esi + 0xab0) + *eax_159 * 0x81c0 + *edx_200 * 0x118 - 8) = 0x19
                    void* eax_162 = data_530658
                    *eax_162
                    bool o_30 = unimplemented  {imul eax, dword [eax], 0x1038}
                    
                    if (o_30)
                        sub_403010()
                        noreturn
                    
                    void* edx_204 = data_530110
                    *edx_204
                    bool o_31 = unimplemented  {imul edx, dword [edx], 0x23}
                    
                    if (o_31)
                        sub_403010()
                        noreturn
                    
                    *(*(*esi + 0xab0) + *eax_162 * 0x81c0 + *edx_204 * 0x118 - 8) = 0x16
                    void* eax_165 = data_530658
                    *eax_165
                    bool o_32 = unimplemented  {imul eax, dword [eax], 0x1038}
                    
                    if (o_32)
                        sub_403010()
                        noreturn
                    
                    void* edx_208 = data_530920
                    *edx_208
                    bool o_33 = unimplemented  {imul edx, dword [edx], 0x23}
                    
                    if (o_33)
                        sub_403010()
                        noreturn
                    
                    *(*(*esi + 0xab0) + *eax_165 * 0x81c0 + *edx_208 * 0x118 - 8) = 0x15
                    void* eax_168 = data_530658
                    *eax_168
                    bool o_34 = unimplemented  {imul eax, dword [eax], 0x1038}
                    
                    if (o_34)
                        sub_403010()
                        noreturn
                    
                    void* edx_212 = data_530648
                    *edx_212
                    bool o_35 = unimplemented  {imul edx, dword [edx], 0x23}
                    
                    if (o_35)
                        sub_403010()
                        noreturn
                    
                    *(*(*esi + 0xab0) + *eax_168 * 0x81c0 + *edx_212 * 0x118 - 8) = 0x18
                    int32_t eax_170
                    eax_170.b = 3
                    void* var_188
                    sub_4cb50c(eax_170.b, &var_188)
                    char var_184[0x100]
                    sub_404054(&var_184, var_188, 0xff)
                    void* eax_172 = data_530658
                    *eax_172
                    bool o_36 = unimplemented  {imul eax, dword [eax], 0x1038}
                    
                    if (o_36)
                        sub_403010()
                        noreturn
                    
                    *(esp_8 - 4) = *(*esi + 0xab0) + *eax_172 * 0x81c0
                    void* eax_175 = data_5300b0
                    *eax_175
                    bool o_37 = unimplemented  {imul eax, dword [eax], 0x23}
                    
                    if (o_37)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_162
                    ecx_162.b = 0x19
                    sub_402bdc(*(esp_8 - 4) + *eax_175 * 0x118 - 0xd6, &var_184, ecx_162.b)
                    void* eax_178 = data_530658
                    *eax_178
                    bool o_38 = unimplemented  {imul eax, dword [eax], 0x1038}
                    
                    if (o_38)
                        sub_403010()
                        noreturn
                    
                    void* edx_219 = data_530110
                    *edx_219
                    bool o_39 = unimplemented  {imul edx, dword [edx], 0x23}
                    
                    if (o_39)
                        sub_403010()
                        noreturn
                    
                    void* esp_132
                    int32_t eax_180
                    
                    if (*(*(*esi + 0xab0) + *eax_178 * 0x81c0 + *edx_219 * 0x118 - 0xf0) u> 1)
                        eax_180.b = 1
                        void* var_190
                        sub_4cb50c(eax_180.b, &var_190)
                        sub_404054(&var_184, var_190, 0xff)
                        void* eax_189 = data_530658
                        *eax_189
                        bool o_42 = unimplemented  {imul eax, dword [eax], 0x1038}
                        
                        if (o_42)
                            sub_403010()
                            noreturn
                        
                        *(esp_8 - 4) = *(*esi + 0xab0) + *eax_189 * 0x81c0
                        void* eax_192 = data_530110
                        *eax_192
                        bool o_43 = unimplemented  {imul eax, dword [eax], 0x23}
                        
                        if (o_43)
                            sub_403010()
                            noreturn
                        
                        esp_132 = esp_8
                        int32_t ecx_168
                        ecx_168.b = 0x19
                        sub_402bdc(*(esp_8 - 4) + *eax_192 * 0x118 - 0xd6, &var_184, ecx_168.b)
                    else
                        eax_180.b = 2
                        void* var_18c
                        sub_4cb50c(eax_180.b, &var_18c)
                        sub_404054(&var_184, var_18c, 0xff)
                        void* eax_182 = data_530658
                        *eax_182
                        bool o_40 = unimplemented  {imul eax, dword [eax], 0x1038}
                        
                        if (o_40)
                            sub_403010()
                            noreturn
                        
                        *(esp_8 - 4) = *(*esi + 0xab0) + *eax_182 * 0x81c0
                        void* eax_185 = data_530110
                        *eax_185
                        bool o_41 = unimplemented  {imul eax, dword [eax], 0x23}
                        
                        if (o_41)
                            sub_403010()
                            noreturn
                        
                        esp_132 = esp_8
                        int32_t ecx_165
                        ecx_165.b = 0x19
                        sub_402bdc(*(esp_8 - 4) + *eax_185 * 0x118 - 0xd6, &var_184, ecx_165.b)
                    void* var_194
                    sub_4cb50c(0, &var_194)
                    sub_404054(&var_184, var_194, 0xff)
                    void* eax_196 = data_530658
                    *eax_196
                    bool o_44 = unimplemented  {imul eax, dword [eax], 0x1038}
                    
                    if (o_44)
                        sub_403010()
                        noreturn
                    
                    *(esp_132 - 4) = *(*esi + 0xab0) + *eax_196 * 0x81c0
                    void* eax_199 = data_530920
                    *eax_199
                    bool o_45 = unimplemented  {imul eax, dword [eax], 0x23}
                    
                    if (o_45)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_171
                    ecx_171.b = 0x19
                    sub_402bdc(*(esp_132 - 4) + *eax_199 * 0x118 - 0xd6, &var_184, ecx_171.b)
                    void* var_198
                    sub_4cb50c(4, &var_198)
                    sub_404054(&var_184, var_198, 0xff)
                    void* eax_204 = data_530658
                    *eax_204
                    bool o_46 = unimplemented  {imul eax, dword [eax], 0x1038}
                    
                    if (o_46)
                        sub_403010()
                        noreturn
                    
                    *(esp_132 - 4) = *(*esi + 0xab0) + *eax_204 * 0x81c0
                    void* eax_207 = data_530648
                    *eax_207
                    bool o_47 = unimplemented  {imul eax, dword [eax], 0x23}
                    
                    if (o_47)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_174
                    ecx_174.b = 0x19
                    sub_402bdc(*(esp_132 - 4) + *eax_207 * 0x118 - 0xd6, &var_184, ecx_174.b)
                    *(esp_132 - 4) = 1
                    sub_47a180(*data_5300b0, *data_530658, *esi)
                    void* eax_211
                    eax_211.b = *(eax_158 + 0x1dd)
                    *(esp_132 - 4) = eax_211
                    sub_47a180(*data_530110, *data_530658, *esi)
                    void* eax_213
                    eax_213.b = *(eax_158 + 0x1dc)
                    *(esp_132 - 4) = eax_213
                    sub_47a180(*data_530920, *data_530658, *esi)
                    void* eax_215
                    eax_215.b = *(eax_158 + 0x1de)
                    *(esp_132 - 4) = eax_215
                    ecx_183 = sub_47a180(*data_530648, *data_530658, *esi)
                    esp_145 = esp_132
                
                sub_40401c(ecx_183, edi_8 + 0x37f)
                int32_t var_19c
                *(esp_145 - 4) = var_19c
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_5300b0, x87_r0), edi_8 + 0x3d0)
                int32_t var_1a0
                *(esp_145 - 4) = var_1a0
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_530110, x87_r0), edi_8 + 0x421)
                int32_t var_1a4
                *(esp_145 - 4) = var_1a4
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_530920, x87_r0), edi_8 + 0x472)
                int32_t var_1a8
                *(esp_145 - 4) = var_1a8
                ecx_61, ebx_2 = sub_47ab08(*esi, *data_530658, *data_530648, x87_r0)
                esp_8 = esp_145
            else if (eax_62 == 3)
                *data_5303e4
                var_14_1 = *data_530020
                *(esp_8 - 4) = 1
                sub_47a180(*data_5303e4, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a180(*data_530448, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a180(*data_530020, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_5303e4, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_530448, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_40401c(sub_47a1c0(*data_530020, *data_530658, *esi), edi_8 + 0x37f)
                int32_t var_1ac
                *(esp_8 - 4) = var_1ac
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_5303e4, x87_r0), edi_8 + 0x3d0)
                int32_t var_1b0
                *(esp_8 - 4) = var_1b0
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_530448, x87_r0), edi_8 + 0x421)
                int32_t var_1b4
                *(esp_8 - 4) = var_1b4
                ecx_61, ebx_2 = sub_47ab08(*esi, *data_530658, *data_530020, x87_r0)
            else if (eax_62 != 2)
                *data_53075c
                var_14_1 = *data_53075c
                *(esp_8 - 4) = 1
                sub_40401c(sub_47a1c0(*data_53075c, *data_530658, *esi), edi_8 + 0x37f)
                int32_t var_1c0
                *(esp_8 - 4) = var_1c0
                ecx_61, ebx_2 = sub_47ab08(*esi, *data_530658, *data_53075c, x87_r0)
            else
                *data_5307cc
                var_14_1 = *data_530828
                *(esp_8 - 4) = 1
                sub_47a180(*data_5307cc, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a180(*data_530828, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_5307cc, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_40401c(sub_47a1c0(*data_530828, *data_530658, *esi), edi_8 + 0x37f)
                int32_t var_1b8
                *(esp_8 - 4) = var_1b8
                sub_40401c(sub_47ab08(*esi, *data_530658, *data_5307cc, x87_r0), edi_8 + 0x3d0)
                int32_t var_1bc
                *(esp_8 - 4) = var_1bc
                ecx_61, ebx_2 = sub_47ab08(*esi, *data_530658, *data_530828, x87_r0)
            
            if (*(edi_8 + 0x32e) != 0)
                sub_40401c(ecx_61, edi_8 + 0x32e)
                *(esp_8 - 4) = var_1c4
                ebx_2 = sub_47ab08(*esi, *data_530658, *data_5305e4, x87_r0)
                *(esp_8 - 4) = 1
                sub_47a1c0(*data_5305e4, *data_530658, *esi)
                *(esp_8 - 4) = 1
                sub_47a180(*data_5305e4, *data_530658, *esi)
            
            int32_t eax_262 = ebx_2
            
            if (var_14_1 s>= eax_262)
                int32_t i_9 = var_14_1 - eax_262 + 1
                int32_t i_4
                
                do
                    int32_t var_18_1 = 0x3fc00000
                    
                    if (*(*data_5301f4 + 4) == 6)
                        void* ecx_249 = data_530658
                        *ecx_249
                        bool o_48 = unimplemented  {imul ecx, dword [ecx], 0x1038}
                        
                        if (o_48)
                            sub_403010()
                            noreturn
                        
                        *(esp_8 - 4) = *(*esi + 0xab0) + *ecx_249 * 0x81c0
                        int32_t edx_310 = eax_262 * 0x23
                        bool o_49 = unimplemented  {imul edx, eax, 0x23}
                        
                        if (o_49)
                            sub_403010()
                            noreturn
                        
                        if (*(*(esp_8 - 4) + (edx_310 << 3) - 0xf0) u>= 0xc)
                            void* ecx_253 = data_530658
                            *ecx_253
                            bool o_50 = unimplemented  {imul ecx, dword [ecx], 0x1038}
                            
                            if (o_50)
                                sub_403010()
                                noreturn
                            
                            *(esp_8 - 4) = *(*esi + 0xab0) + *ecx_253 * 0x81c0
                            
                            if (*(*(esp_8 - 4) + (edx_310 << 3) - 0x9c) s> 0x64)
                                void* edx_311 = data_530658
                                *edx_311
                                bool o_51 = unimplemented  {imul edx, dword [edx], 0x1038}
                                
                                if (o_51)
                                    sub_403010()
                                    noreturn
                                
                                bool o_52 = unimplemented  {imul ecx, eax, 0x23}
                                
                                if (o_52)
                                    sub_403010()
                                    noreturn
                                
                                if (*(*(*esi + 0xab0) + *edx_311 * 0x81c0 + eax_262 * 0x118 - 0x9c)
                                        s<= 0x6c)
                                    var_18_1 = 0x3f6b851f
                            else
                                __builtin_strncpy(&var_18_1, "q=J?", 4)
                    
                    void* edx_314 = data_530658
                    *edx_314
                    bool o_53 = unimplemented  {imul edx, dword [edx], 0x1038}
                    
                    if (o_53)
                        sub_403010()
                        noreturn
                    
                    bool o_54 = unimplemented  {imul ecx, eax, 0x23}
                    
                    if (o_54)
                        sub_403010()
                        noreturn
                    
                    *(*(*esi + 0xab0) + *edx_314 * 0x81c0 + eax_262 * 0x118 - 0x74) = var_18_1
                    eax_262 += 1
                    i_4 = i_9
                    i_9 -= 1
                while (i_4 != 1)
            
            if (arg2 == 0)
                sub_4834fc(*esi, *data_530658)
                
                if (sub_4c0924() != 0)
                    void* eax_265 = data_530674
                    *eax_265
                    bool o_55 = unimplemented  {imul eax, dword [eax], 0x1038}
                    
                    if (o_55)
                        sub_403010()
                        noreturn
                    
                    if (*(*(*esi + 0xab0) + *eax_265 * 0x81c0 + 1) != 0)
                        sub_50971c()
                        void* eax_267 = data_530674
                        *eax_267
                        bool o_56 = unimplemented  {imul eax, dword [eax], 0x1038}
                        
                        if (o_56)
                            sub_403010()
                            noreturn
                        
                        *(*(*esi + 0xab0) + *eax_267 * 0x81c0 + 0x813a) = (*data_530658).w
    
    sub_51dbe0()
    sub_51e034()
    *(esp_8 + 8)
    fsbase->NtTib.ExceptionList = *esp_8
    *(esp_8 + 8) = sub_51f877
    sub_403e1c(&var_1c4, 0x10)
    return sub_403e1c(&var_84, 0x1a)
}
