// ============================================================
// 函数名称: sub_4c39c8
// 虚拟地址: 0x4c39c8
// WARP GUID: 85ce93dd-2585-5333-ae2e-9dfb53bf4a59
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cc6dc, sub_4b742c, sub_404138, sub_4c2d7c, sub_404080, sub_5207dc, sub_4b7504, sub_4cda5c, sub_403df8, sub_403e1c, sub_46910c, sub_403010
// [被调用的父级函数]: sub_525ab8, sub_4c62e8, sub_4c55c8, sub_4c4150
// ============================================================

int32_t __fastcallsub_4c39c8(int32_t arg1, int32_t* arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_5 = 7
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_5
        i_5 -= 1
    while (i != 1)
    *(esp_2 - 4) = i_5
    int32_t entry_ebx
    *(esp_2 - 8) = entry_ebx
    *(esp_2 - 0xc) = arg3
    *(esp_2 - 0x10) = arg4
    int32_t* edi = arg2
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    void* esp_9 = esp_2 - 0x1c
    fsbase->NtTib.ExceptionList = esp_9
    sub_403df8(edi)
    int32_t i_6 = *data_5300d0
    
    if (i_6 s> 0)
        int32_t ebx_1 = 1
        int32_t i_1
        
        do
            bool o_2 = unimplemented  {imul eax, ebx, 0x41}
            
            if (o_2)
                sub_403010()
                noreturn
            
            if (*(*data_5301f4 + ebx_1 * 0x208 + 0x20085) != 0)
                sub_4b7504(*data_530380, ebx_1, 0)
            else if (*(*data_530380 + 0xc3d21) != 0)
                sub_4b742c(*data_530380, ebx_1)
            
            ebx_1 += 1
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
    
    void var_14
    sub_403df8(&var_14)
    int32_t i_7 = *data_5300d0
    
    if (i_7 s> 0)
        int32_t ebx_2 = 1
        int32_t i_2
        
        do
            bool o_3 = unimplemented  {imul eax, ebx, 0x41}
            
            if (o_3)
                sub_403010()
                noreturn
            
            if (*(*data_5301f4 + ebx_2 * 0x208 + 0x1fea0) == 1)
                bool o_4 = unimplemented  {imul eax, ebx, 0x41}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + ebx_2 * 0x208 + 0x20085) != 0)
                    bool o_5 = unimplemented  {imul eax, ebx, 0x41}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_5301f4 + ebx_2 * 0x208 + 0x20088) == 1)
                        if (ebp_1[-4] != 0)
                            sub_404080(&ebp_1[-4], ", ")
                        
                        *(esp_9 - 4) = ebp_1[-4]
                        *(esp_9 - 8) = 0
                        *(esp_9 - 0xc) = &ebp_1[-7]
                        sub_5207dc(*data_5301f4, ebx_2, 0)
                        *(esp_9 - 8) = ebp_1[-7]
                        *(esp_9 - 0xc) = &data_4c3f08
                        sub_404138(&ebp_1[-4], 3)
                        bool o_6 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_6)
                            sub_403010()
                            noreturn
                        
                        ebp_1[-1] = *(*data_5301f4 + ebx_2 * 0x208 + 0x2008c)
                        *(esp_9 - 4) = ebp_1[-4]
                        *(esp_9 - 8) = &data_4c3f14
                        ebp_1, edi = sub_4cda5c(ebp_1[-1], 0, &ebp_1[-8])
                        *(esp_9 - 0xc) = ebp_1[-8]
                        *(esp_9 - 0x10) = &data_4c3f20
                        sub_404138(&ebp_1[-4], 4)
                        esp_9 -= 4
            
            ebx_2 += 1
            i_2 = i_7
            i_7 -= 1
        while (i_2 != 1)
    
    sub_403df8(&ebp_1[-5])
    int32_t i_8 = *data_5300d0
    
    if (i_8 s> 0)
        int32_t ebx_3 = 1
        int32_t i_3
        
        do
            bool o_7 = unimplemented  {imul eax, ebx, 0x41}
            
            if (o_7)
                sub_403010()
                noreturn
            
            if (*(*data_5301f4 + ebx_3 * 0x208 + 0x1fea0) == 1)
                bool o_8 = unimplemented  {imul eax, ebx, 0x41}
                
                if (o_8)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + ebx_3 * 0x208 + 0x20085) != 0)
                    bool o_9 = unimplemented  {imul eax, ebx, 0x41}
                    
                    if (o_9)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_5301f4 + ebx_3 * 0x208 + 0x20088) s> 1)
                        if (ebp_1[-5] != 0)
                            sub_404080(&ebp_1[-5], ", ")
                        
                        *(esp_9 - 4) = ebp_1[-5]
                        *(esp_9 - 8) = 0
                        *(esp_9 - 0xc) = &ebp_1[-9]
                        sub_5207dc(*data_5301f4, ebx_3, 0)
                        *(esp_9 - 8) = ebp_1[-9]
                        *(esp_9 - 0xc) = &data_4c3f08
                        sub_404138(&ebp_1[-5], 3)
                        bool o_10 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_10)
                            sub_403010()
                            noreturn
                        
                        ebp_1[-1] = *(*data_5301f4 + ebx_3 * 0x208 + 0x2008c)
                        *(esp_9 - 4) = ebp_1[-5]
                        *(esp_9 - 8) = &data_4c3f14
                        ebp_1, edi = sub_4cda5c(ebp_1[-1], 0, &ebp_1[-0xa])
                        *(esp_9 - 0xc) = ebp_1[-0xa]
                        *(esp_9 - 0x10) = &data_4c3f20
                        sub_404138(&ebp_1[-5], 4)
                        esp_9 -= 4
            
            ebx_3 += 1
            i_3 = i_8
            i_8 -= 1
        while (i_3 != 1)
    
    sub_403df8(edi)
    
    if (ebp_1[-4] != 0)
        *(esp_9 - 4) = *edi
        ebp_1 = sub_46910c(*data_530304, "f_potgeht", &ebp_1[-0xb])
        *(esp_9 - 8) = ebp_1[-0xb]
        *(esp_9 - 0xc) = ebp_1[-4]
        sub_404138(edi, 3)
    
    if (ebp_1[-5] != 0)
        *(esp_9 - 4) = *edi
        *(esp_9 - 8) = &data_4c3f40
        *(esp_9 - 0xc) = "Sidepot: "
        *(esp_9 - 0x10) = ebp_1[-5]
        sub_404138(edi, 4)
        esp_9 -= 4
    
    sub_4b7504(*data_530380, 0, 1)
    ebp_1[-2] = 0
    int32_t i_9 = *data_5300d0
    
    if (i_9 s> 0)
        int32_t ebx_4 = 1
        int32_t i_4
        
        do
            bool o_11 = unimplemented  {imul eax, ebx, 0x41}
            
            if (o_11)
                sub_403010()
                noreturn
            
            *(*data_5301f4 + ebx_4 * 0x208 + 0x20086) = 0
            
            if (sub_4cc6dc(ebx_4) s< *(*data_5301f4 + 0x21108) && sub_4c2d7c(ebx_4) != 0)
                int32_t temp8_1 = ebp_1[-2]
                ebp_1[-2] += 1
                
                if (add_overflow(temp8_1, 1))
                    sub_403010()
                    noreturn
                
                bool o_13 = unimplemented  {imul eax, ebx, 0x41}
                
                if (o_13)
                    sub_403010()
                    noreturn
                
                *(*data_5301f4 + ebx_4 * 0x208 + 0x20086) = 1
                
                if (ebp_1[-2] != 1)
                    *(esp_9 - 4) = *edi
                    *(esp_9 - 8) = &data_4c3efc
                    *(esp_9 - 0xc) = 0
                    *(esp_9 - 0x10) = &ebp_1[-0xd]
                    sub_5207dc(*data_5301f4, ebx_4, 0)
                    *(esp_9 - 0xc) = ebp_1[-0xd]
                    sub_404138(edi, 3)
                else
                    *(esp_9 - 4) = *edi
                    *(esp_9 - 8) = &data_4c3f60
                    *(esp_9 - 0xc) = 0
                    *(esp_9 - 0x10) = &ebp_1[-0xc]
                    sub_5207dc(*data_5301f4, ebx_4, 0)
                    *(esp_9 - 0xc) = ebp_1[-0xc]
                    sub_404138(edi, 3)
            
            ebx_4 += 1
            i_4 = i_9
            i_9 -= 1
        while (i_4 != 1)
    
    if (ebp_1[-2] == 1)
        ebp_1 = sub_46910c(*data_530304, "f_istraus", &ebp_1[-0xe])
        sub_404080(edi, ebp_1[-0xe])
    
    if (ebp_1[-2] s> 1)
        ebp_1 = sub_46910c(*data_530304, "f_sindraus", &ebp_1[-0xf])
        sub_404080(edi, ebp_1[-0xf])
    
    *(esp_9 + 8)
    fsbase->NtTib.ExceptionList = *esp_9
    *(esp_9 + 8) = sub_4c3ed6
    return sub_403e1c(&ebp_1[-0xf], 0xc)
}
