// ============================================================
// 函数名称: sub_4d9a28
// 虚拟地址: 0x4d9a28
// WARP GUID: 4572b7e4-7fa9-50a6-8b50-91b543d30367
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41bac4, sub_4030d0, sub_409040, sub_41efec, sub_404138, sub_408e1c, sub_4804e4, sub_480534, sub_48be98, sub_4535a8, sub_402b4c, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4dc3b8, sub_4c9540
// ============================================================

int32_t __fastcallsub_4d9a28(int32_t arg1, char arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    char* i_3 = 0xe
    char* i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_3
        i_3 -= 1
    while (i != 1)
    *(esp_2 - 4) = i_3
    int32_t entry_ebx
    *(esp_2 - 8) = entry_ebx
    *(esp_2 - 0xc) = arg3
    *(esp_2 - 0x10) = arg4
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    void* esp_9 = esp_2 - 0x1c
    fsbase->NtTib.ExceptionList = esp_9
    char** eax
    
    if (arg2 == 0)
        eax, i_3, ebp_1 = sub_4804e4(data_61c8c8, sub_4d9eef+5, i_3)
    
    ebp_1[-2] = 1
    ebp_1[-4] = 0x61cfd4
    ebp_1[-5] = 0x61d4e8
    ebp_1[-6] = &data_61d4bc
    
    do
        if (*(ebp_1 - 1) == 0)
            ebp_1[-2]
            int32_t edx_2 = ebp_1[-2] * 5
            bool o_4 = unimplemented  {imul edx, dword [ebp-0x8], 0x5}
            
            if (o_4)
                sub_403010()
                noreturn
            
            if (add_overflow(edx_2, 0x32))
                sub_403010()
                noreturn
            
            i_3.b = 1
            sub_480534(data_61c8c8, edx_2 + 0x32, i_3.b)
        else
            eax.b = data_77e23c
            eax.b -= 2
            i_3.b = eax.b u< 1
            i_3.b ^= 1
            ebp_1[-2]
            bool o_1 = unimplemented  {imul eax, dword [ebp-0x8], 0x5}
            
            if (o_1)
                sub_403010()
                noreturn
            
            int32_t edx = ebp_1[-2] * 0x14
            bool o_2 = unimplemented  {imul edx, eax, 0x4}
            
            if (o_2)
                sub_403010()
                noreturn
            
            if (add_overflow(edx, 0))
                sub_403010()
                noreturn
            
            sub_480534(data_61c8c8, edx, i_3.b)
        
        int32_t i_1 = 1
        int32_t* edi = ebp_1[-4]
        char** esi = ebp_1[-5]
        ebp_1[-7] = ebp_1[-6]
        ebp_1[-8] = 0x61d4e8
        
        do
            if (*(ebp_1 - 1) == 0 || i_1 - 4 u< 2)
                if (i_1 != 0xe || ebp_1[-2] == 1)
                    if (*(ebp_1 - 1) == 0)
                        ebp_1[-9] = i_1
                        int32_t eax_10
                        int32_t edx_4
                        eax_10, edx_4 = sub_402b4c(float.t(ebp_1[-9]) / fconvert.t(3f))
                        *(esp_9 - 4) = edx_4
                        *(esp_9 - 8) = eax_10
                        ebp_1[-2]
                        int32_t eax_11 = ebp_1[-2] * 5
                        bool o_6 = unimplemented  {imul eax, dword [ebp-0x8], 0x5}
                        
                        if (o_6)
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(eax_11, 0x32))
                            sub_403010()
                            noreturn
                        
                        int32_t eax_13
                        int32_t edx_5
                        edx_5:eax_13 = sx.q(eax_11 + 0x32)
                        *(esp_9 - 8)
                        *(esp_9 - 4)
                        bool o_8 = unimplemented  {adc edx, dword [esp+0x4]}
                        
                        if (o_8)
                            sub_403010()
                            noreturn
                        
                        i_3.b = 1
                        sub_480534(data_61c8c8, eax_13 + *(esp_9 - 8), i_3.b)
                    
                    sub_41efec(sub_41bac4(*(*edi + 0x128)), 6)
                    int32_t edx_9
                    edx_9.b = 1
                    ebp_1[-3] = sub_4535a8(sub_4532a0+0xa4, edx_9)
                    sub_41bac4(*(*edi + 0x128))
                    (*(*ebp_1[-3] + 8))()
                    *(esp_9 - 4) = *(data_61c8c8 + 0xa64)
                    *(esp_9 - 8) = &data_4d9f18
                    sub_408e1c(ebp_1[-2], &ebp_1[-0xb])
                    *(esp_9 - 0xc) = ebp_1[-0xb]
                    sub_408e1c(i_1, &ebp_1[-0xc])
                    *(esp_9 - 0x10) = ebp_1[-0xc]
                    *(esp_9 - 0x14) = ".jpg"
                    sub_404138(&ebp_1[-0xa], 5)
                    ebp_1[-0xa]
                    (*(*ebp_1[-3] + 0x4c))()
                    sub_4030d0(ebp_1[-3])
                    *(esp_9 - 4) = 0
                    *(esp_9 - 8) = *(data_61c8c8 + 0xa64)
                    *(esp_9 - 0xc) = &data_4d9f18
                    sub_408e1c(ebp_1[-2], &ebp_1[-0xe])
                    *(esp_9 - 0x10) = ebp_1[-0xe]
                    sub_408e1c(i_1, &ebp_1[-0xf])
                    *(esp_9 - 0x14) = ebp_1[-0xf]
                    *(esp_9 - 0x18) = ".jpg"
                    sub_404138(&ebp_1[-0xd], 5)
                    esp_9 -= 4
                    char* eax_35
                    eax_35, i_3, esi = sub_48be98(data_61c8c8, ebp_1[-0xd], 0)
                    *esi = eax_35
                    
                    if (i_1 - 4 u< 2)
                        if (*(ebp_1 - 1) == 0)
                            *ebp_1[-7] = *esi
                        else
                            *ebp_1[-7] = *esi
                else
                    *esi = *ebp_1[-8]
            
            i_1 += 1
            ebp_1[-8] += 4
            ebp_1[-7] += 4
            esi = &esi[1]
            edi = &edi[1]
        while (i_1 != 0xf)
        
        ebp_1[-2] += 1
        ebp_1[-6] += 8
        ebp_1[-5] += 0x80
        ebp_1[-4] += 0x38
    while (ebp_1[-2] != 5)
    
    if (*(ebp_1 - 1) == 0)
        *(esp_9 - 4) = 0
        *(esp_9 - 8) = *(data_61c8c8 + 0xa64)
        *(esp_9 - 0xc) = "\data\bilder\"
        sub_408e1c(*(data_61c8c8 + 0xdbc), &ebp_1[-0x11])
        *(esp_9 - 0x10) = ebp_1[-0x11]
        *(esp_9 - 0x14) = "\s0.jpg"
        sub_404138(&ebp_1[-0x10], 4)
        data_61ce94 = sub_48be98(data_61c8c8, ebp_1[-0x10], 0)
        int32_t i_2 = 1
        void* edi_1 = &data_61d6ea
        void* esi_1 = &data_61d6fe
        
        do
            *(esp_9 - 4) = *(data_61c8c8 + 0xa64)
            *(esp_9 - 8) = "\data\bilder\"
            sub_408e1c(*(data_61c8c8 + 0xdbc), &ebp_1[-0x13])
            *(esp_9 - 0xc) = ebp_1[-0x13]
            *(esp_9 - 0x10) = &data_4d9f5c
            
            if (add_overflow(i_2, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_408e1c(i_2 - 1, &ebp_1[-0x14])
            *(esp_9 - 0x14) = ebp_1[-0x14]
            *(esp_9 - 0x18) = ".jpg"
            sub_404138(&ebp_1[-0x12], 6)
            void* esp_35 = esp_9 - 4
            
            if (sub_409040(ebp_1[-0x12]) != 0)
                *(esp_35 - 4) = 0
                *(esp_35 - 8) = *(data_61c8c8 + 0xa64)
                *(esp_35 - 0xc) = "\data\bilder\"
                sub_408e1c(*(data_61c8c8 + 0xdbc), &ebp_1[-0x16])
                *(esp_35 - 0x10) = ebp_1[-0x16]
                *(esp_35 - 0x14) = &data_4d9f5c
                
                if (add_overflow(i_2, 0xffffffff))
                    sub_403010()
                    noreturn
                
                sub_408e1c(i_2 - 1, &ebp_1[-0x17])
                *(esp_35 - 0x18) = ebp_1[-0x17]
                *(esp_35 - 0x1c) = ".jpg"
                sub_404138(&ebp_1[-0x15], 6)
                esp_35 -= 8
                int16_t eax_60
                eax_60, esi_1 = sub_48be98(data_61c8c8, ebp_1[-0x15], 0)
                *edi_1 = eax_60
            
            *(esp_35 - 4) = *(data_61c8c8 + 0xa64)
            *(esp_35 - 8) = "\data\bilder\"
            sub_408e1c(*(data_61c8c8 + 0xdbc), &ebp_1[-0x19])
            *(esp_35 - 0xc) = ebp_1[-0x19]
            *(esp_35 - 0x10) = &data_4d9f68
            
            if (add_overflow(i_2, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_408e1c(i_2 - 1, &ebp_1[-0x1a])
            *(esp_35 - 0x14) = ebp_1[-0x1a]
            *(esp_35 - 0x18) = ".jpg"
            sub_404138(&ebp_1[-0x18], 6)
            esp_9 = esp_35 - 4
            
            if (sub_409040(ebp_1[-0x18]) == 0)
                *esi_1 = 0
            else
                *(esp_9 - 4) = 0
                *(esp_9 - 8) = *(data_61c8c8 + 0xa64)
                *(esp_9 - 0xc) = "\data\bilder\"
                sub_408e1c(*(data_61c8c8 + 0xdbc), &ebp_1[-0x1c])
                *(esp_9 - 0x10) = ebp_1[-0x1c]
                *(esp_9 - 0x14) = &data_4d9f68
                
                if (add_overflow(i_2, 0xffffffff))
                    sub_403010()
                    noreturn
                
                sub_408e1c(i_2 - 1, &ebp_1[-0x1d])
                *(esp_9 - 0x18) = ebp_1[-0x1d]
                *(esp_9 - 0x1c) = ".jpg"
                sub_404138(&ebp_1[-0x1b], 6)
                esp_9 -= 8
                int16_t eax_76
                eax_76, esi_1 = sub_48be98(data_61c8c8, ebp_1[-0x1b], 0)
                *esi_1 = eax_76
            
            i_2 += 1
            esi_1 += 2
            edi_1 += 2
        while (i_2 != 0xa)
        
        data_61d710 = sx.d(*((data_61d104 << 1) + &data_61d6e8))
    
    *(esp_9 + 8)
    fsbase->NtTib.ExceptionList = *esp_9
    *(esp_9 + 8) = sub_4d9ee4
    return sub_403e1c(&ebp_1[-0x1d], 0x14)
}
