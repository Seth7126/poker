// ============================================================
// 函数名称: sub_508998
// 虚拟地址: 0x508998
// WARP GUID: b9ff40e8-ff85-5250-9ef1-4836bb3037c5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_404138, sub_513e4c, sub_403e1c, sub_403010, sub_403e90, sub_51431c, sub_50918c, sub_404080, sub_514cc4, sub_4040c4, sub_469acc, sub_510e38, sub_408e1c, sub_4c92f0, sub_4c2d7c, sub_403df8, sub_4c2f1c, sub_4702a8, sub_50d318, sub_50928c, sub_4c0924
// [被调用的父级函数]: sub_4c96bc
// ============================================================

int32_t __convention("regparm")sub_508998(int32_t arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_1 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_5 = 6
    int32_t i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_5
        i_5 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_1 - 4) = entry_ebx
    *(esp_1 - 8) = arg2
    *(esp_1 - 0xc) = arg3
    void* edi = data_530454
    *(esp_1 - 0x10) = &var_4
    *(esp_1 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x18) = fsbase->NtTib.ExceptionList
    void* esp_7 = esp_1 - 0x18
    fsbase->NtTib.ExceptionList = esp_7
    int32_t ecx = sub_514cc4(*edi, ">in - TRANSFER.")
    int32_t esi
    
    if (*(*data_5301f4 + 0x111fa) == 0)
        esi = 0x118
    else
        esi = 0x1c2
    
    if (arg1 == 1)
        *(*edi + 0x98) = 0
        sub_50918c(ecx, 0)
        GetTickCount()
        *(*edi + 0x1e4) = 1
        int32_t var_c_1 = 0
        char i_1
        
        do
            uint32_t eax_5 = GetTickCount()
            int32_t temp4_1 = ebp_1[-2]
            ebp_1[-2] += 1
            
            if (add_overflow(temp4_1, 1))
                sub_403010()
                noreturn
            
            char eax_6 = sub_4c2f1c(1)
            char eax_7
            
            if (eax_6 == 0)
                eax_7 = sub_4c2d7c(1)
            
            if (eax_6 != 0 || eax_7 == 0)
                *(*edi + 0x9c) = 1
            
            int32_t eax_10
            int32_t edx_1
            
            if (ebp_1[-2] s> 1)
                edx_1:eax_10 = sx.q(ebp_1[-2])
            
            if (ebp_1[-2] s<= 1 || mods.dp.d(edx_1:eax_10, 5) == 0)
                sub_513e4c(*edi, 0)
            
            sub_50928c()
            char j
            
            do
                ebp_1 = sub_4702a8(*data_530304, 1)
                uint32_t eax_15 = GetTickCount()
                *(esp_7 - 4) = 0
                *(esp_7 - 8) = eax_15
                int32_t eax_17
                int32_t edx_4
                edx_4:eax_17 = sx.q(eax_5)
                int32_t temp5_1 = *(esp_7 - 8)
                *(esp_7 - 8) -= eax_17
                *(esp_7 - 4) = sbb.d(*(esp_7 - 4), edx_4, temp5_1 u< eax_17)
                int32_t eax_18 = *(esp_7 - 8)
                *(esp_7 - 4) = *(esp_7 - 4)
                *(esp_7 - 8) = eax_18
                int32_t eax_20
                int32_t edx_6
                edx_6:eax_20 = sx.q(esi)
                int32_t temp6_1 = *(esp_7 - 4)
                
                if (edx_6 != temp6_1)
                    *(esp_7 - 8)
                    *(esp_7 - 4)
                    
                    if (edx_6 s<= temp6_1)
                        break
                else
                    *(esp_7 - 8)
                    *(esp_7 - 4)
                    
                    if (eax_20 u<= *(esp_7 - 8))
                        break
                
                if (*(*edi + 0x98) == 1)
                    break
                
                if (sub_469acc(*data_530304) != 0)
                    break
                
                j = sub_4c0924()
            while (j != 0)
            
            if (*(*edi + 0x98) == 1 && sub_510e38(*edi) == 0)
                break
            
            if (sub_469acc(*data_530304) != 0)
                break
            
            i_1 = sub_4c0924()
        while (i_1 != 0)
        *(*edi + 0x1e4) = 0
        sub_403e90(&ebp_1[-3], 0x508d8c)
        sub_403e90(&ebp_1[-4], 0x508d8c)
        sub_403e90(&ebp_1[-5], 0x508d8c)
        sub_403df8(&ebp_1[-6])
        
        for (int32_t i_2 = 1; i_2 != 9; i_2 += 1)
            *(esp_7 - 4) = ebp_1[-6]
            bool o_2 = unimplemented  {imul eax, ebx, 0xe9}
            
            if (o_2)
                sub_403010()
                noreturn
            
            sub_408e1c(*(*edi + i_2 * 0x3a4 + 0x188), &ebp_1[-8])
            *(esp_7 - 8) = ebp_1[-8]
            *(esp_7 - 0xc) = &data_508d98
            sub_404138(&ebp_1[-6], 3)
        
        if (sub_510e38(*edi) != 0)
            sub_403e90(&ebp_1[-3], 0x508da4)
        
        if (sub_469acc(*data_530304) != 0)
            sub_403e90(&ebp_1[-4], 0x508da4)
        
        if (sub_4c0924() != 0)
            sub_403e90(&ebp_1[-5], 0x508da4)
        
        *(esp_7 - 4) = ">out - TRANSFER syncs:"
        sub_408e1c(*(*edi + 0x98), &ebp_1[-0xa])
        *(esp_7 - 8) = ebp_1[-0xa]
        *(esp_7 - 0xc) = ", recon:"
        *(esp_7 - 0x10) = ebp_1[-3]
        *(esp_7 - 0x14) = ", clos:"
        *(esp_7 - 0x18) = ebp_1[-4]
        *(esp_7 - 0x1c) = ", pknet:"
        *(esp_7 - 0x20) = ebp_1[-5]
        *(esp_7 - 0x24) = ", syncs:"
        *(esp_7 - 0x28) = ebp_1[-6]
        sub_404138(&ebp_1[-9], 0xa)
        esp_7 -= 0x1c
        sub_514cc4(*edi, ebp_1[-9])
        sub_403df8(&ebp_1[-7])
        
        for (int32_t i_3 = 1; i_3 != 9; i_3 += 1)
            if (i_3 s> 1)
                sub_404080(&ebp_1[-7], U",")
            
            if (sub_4c2d7c(i_3) == 0)
                sub_404080(&ebp_1[-7], U"0")
            else
                sub_404080(&ebp_1[-7], U"1")
        
        sub_4040c4(&ebp_1[-0xb], ".pplives: ", ebp_1[-7])
        sub_514cc4(*edi, ebp_1[-0xb])
        sub_403df8(&ebp_1[-7])
        
        for (int32_t i_4 = 1; i_4 != 9; i_4 += 1)
            if (i_4 s> 1)
                sub_404080(&ebp_1[-7], U",")
            
            if (sub_4c2f1c(i_4) == 0)
                sub_404080(&ebp_1[-7], U"0")
            else
                sub_404080(&ebp_1[-7], U"1")
        
        sub_4040c4(&ebp_1[-0xc], ".spielerraus: ", ebp_1[-7])
        sub_514cc4(*edi, ebp_1[-0xc])
        
        if (sub_4c0924() != 0)
            if (sub_50d318(*edi) == 0)
                *(*edi + 0x9c) = 0
                *(*edi + 0x98) = 0
                sub_513e4c(*edi, 0)
            else
                sub_4c92f0()
                sub_51431c(*edi, 0xb)
                sub_513e4c(*edi, 1)
            
            *(*edi + 0x9c) = 0
            *(*edi + 0x98) = 0
    
    *(esp_7 + 8)
    fsbase->NtTib.ExceptionList = *esp_7
    *(esp_7 + 8) = sub_508d62
    return sub_403e1c(&ebp_1[-0xc], 0xa)
}
