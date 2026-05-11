// ============================================================
// 函数名称: sub_4692e4
// 虚拟地址: 0x4692e4
// WARP GUID: b2080514-efc4-5031-9a17-c14681fe7464
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_404138, sub_4042c0, sub_47b5b8, sub_402824, sub_47a7ec, sub_4062e1, sub_404280, sub_405e46, sub_403010, sub_403e1c, sub_403e90, sub_404078, sub_469254, sub_404188, sub_47ab08, sub_4040c4, sub_469f7c, sub_405f4c, sub_4691b4, sub_405f88, sub_4088f0
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_4692e4(void* arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_2 = 0x74
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_2
        i_2 -= 1
    while (i != 1)
    *(esp_2 - 4) = i_2
    int32_t entry_ebx
    *(esp_2 - 8) = entry_ebx
    *(esp_2 - 0xc) = arg2
    *(esp_2 - 0x10) = arg3
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x1c
    *(esp_2 - 0x20) = *(arg1 + 0xa64)
    *(esp_2 - 0x24) = "\data\local\c_"
    *(esp_2 - 0x28) = *(arg1 + 0x1354)
    *(esp_2 - 0x2c) = ".txt"
    void* esp_13 = esp_2 - 0x2c
    char* var_158
    sub_404138(&var_158, 4)
    void var_150
    sub_405e46(&var_150, var_158)
    sub_402824(sub_4062e1())
    
    while (true)
        uint32_t eax_78 = sub_405f88(&ebp_1[-0x53])
        sub_402824(eax_78)
        
        if (eax_78.b != 0)
            sub_402824(sub_405f4c(&ebp_1[-0x53]))
            *(esp_13 + 8)
            fsbase->NtTib.ExceptionList = *esp_13
            *(esp_13 + 8) = sub_4698ee
            sub_403e1c(&ebp_1[-0xe9], 9)
            sub_403e1c(&ebp_1[-0x60], 6)
            return sub_403e1c(&ebp_1[-0x58], 4)
        
        *(esp_13 - 4) = ebp_1
        int32_t eax_5
        void* edx_2
        eax_5, edx_2 = sub_469254()
        *(esp_13 - 4)
        *(esp_13 - 4) = ebp_1
        void* ebp_2 = sub_4691b4(&ebp_1[-0x5b], edx_2)
        *(esp_13 - 4)
        void* edx_4 = sub_4088f0(*(ebp_2 - 0x16c), ebp_2 - 0x158)
        *(esp_13 - 4) = ebp_2
        int32_t edi_2
        ebp_1, edi_2 = sub_4691b4(ebp_2 - 0x170, edx_4)
        *(esp_13 - 4)
        sub_403e90(&ebp_1[-0x57], ebp_1[-0x5c])
        bool o_1 = unimplemented  {imul eax, edi, 0x1038}
        
        if (o_1)
            break
        
        int32_t eax_11 = sx.d(*(*(ebp_1[-0x54] + 0xab0) + edi_2 * 0x81c0 + 0x8130))
        bool cond:1_1 = eax_11 != 0
        
        if (eax_11 s> 0)
            ebp_1[-0x59] = eax_11
            int32_t esi = 1
            int32_t i_1
            
            do
                *(esp_13 - 4) = &ebp_1[-0x5d]
                sub_404280(1, 1, ebp_1[-0x56])
                sub_404188(ebp_1[-0x5d], 0x469928)
                
                if (cond:1_1)
                    bool o_5 = unimplemented  {imul eax, edi, 0x1038}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    bool o_6 = unimplemented  {imul edx, esi, 0x23}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_30
                    eax_30.b = *(*(ebp_1[-0x54] + 0xab0) + edi_2 * 0x81c0 + esi * 0x118 - 0xf8)
                    char temp2_1 = eax_30.b
                    eax_30.b -= 2
                    bool cond:0_1 = temp2_1 != 2
                    bool cond:2_1 = temp2_1 == 2
                    bool cond:4_1 = temp2_1 == 2
                    bool cond:5_1 = temp2_1 != 2
                    bool cond:6_1 = temp2_1 != 2
                    
                    if (temp2_1 u< 2)
                    label_46959f:
                        *(esp_13 - 4) = 0
                        *(esp_13 - 8) = &ebp_1[-0xe1]
                        ebp_1[-0x54]
                        ebp_1 = sub_47a7ec(esi)
                        sub_4088f0(ebp_1[-0xe1], &ebp_1[-0x58])
                    else
                        char temp4_1 = eax_30.b
                        eax_30.b -= 2
                        cond:0_1 = temp4_1 != 2
                        cond:2_1 = temp4_1 == 2
                        cond:4_1 = temp4_1 == 2
                        cond:5_1 = temp4_1 != 2
                        cond:6_1 = temp4_1 != 2
                        
                        if (temp4_1 == 2)
                            goto label_46959f
                        
                        char temp6_1 = eax_30.b
                        eax_30.b -= 6
                        cond:0_1 = temp6_1 != 6
                        cond:2_1 = temp6_1 == 6
                        cond:4_1 = temp6_1 == 6
                        cond:5_1 = temp6_1 != 6
                        cond:6_1 = temp6_1 != 6
                        
                        if (temp6_1 == 6)
                            goto label_46959f
                        
                        char temp8_1 = eax_30.b
                        eax_30.b -= 2
                        cond:0_1 = temp8_1 != 2
                        cond:2_1 = temp8_1 == 2
                        cond:4_1 = temp8_1 == 2
                        cond:5_1 = temp8_1 != 2
                        cond:6_1 = temp8_1 != 2
                        
                        if (temp8_1 == 2)
                            goto label_46959f
                        
                        char temp9_1 = eax_30.b
                        eax_30.b -= 6
                        cond:0_1 = temp9_1 != 6
                        cond:2_1 = temp9_1 == 6
                        cond:4_1 = temp9_1 == 6
                        cond:5_1 = temp9_1 != 6
                        cond:6_1 = temp9_1 != 6
                        
                        if (temp9_1 == 6)
                            goto label_46959f
                    
                    *(esp_13 - 4) = &ebp_1[-0xe2]
                    sub_404280(1, 1, ebp_1[-0x58])
                    sub_404188(ebp_1[-0xe2], 0x469934)
                    
                    if (not(cond:5_1))
                        sub_4042c0(&ebp_1[-0x58], 1, 1)
                    
                    *(esp_13 - 4) = &ebp_1[-0xe3]
                    sub_404280(1, 1, ebp_1[-0x58])
                    sub_404188(ebp_1[-0xe3], 0x469940)
                    
                    if (not(cond:0_1))
                        sub_4042c0(&ebp_1[-0x58], 1, 1)
                    
                    while (true)
                        *(esp_13 - 4) = &ebp_1[-0xe4]
                        sub_404280(1, 1, ebp_1[-0x58])
                        sub_404188(ebp_1[-0xe4], 0x46994c)
                        
                        if (not(cond:2_1))
                            break
                        
                        sub_4042c0(&ebp_1[-0x58], 1, 1)
                    
                    while (true)
                        *(esp_13 - 4) = &ebp_1[-0xe5]
                        sub_404280(1, sub_404078(ebp_1[-0x58]), ebp_1[-0x58])
                        sub_404188(ebp_1[-0xe5], 0x46994c)
                        
                        if (not(cond:4_1))
                            break
                        
                        sub_4042c0(&ebp_1[-0x58], sub_404078(ebp_1[-0x58]), 1)
                    
                    *(esp_13 - 4) = &ebp_1[-0xe6]
                    sub_404280(1, 1, ebp_1[-0x56])
                    esp_13 = esp_13
                    sub_404188(ebp_1[-0xe6], 0x469934)
                    
                    if (not(cond:6_1))
                        sub_4042c0(&ebp_1[-0x56], 1, 1)
                    
                    int32_t ebx_2 = 1
                    int32_t eax_71
                    
                    while (true)
                        eax_71 = sub_404078(ebp_1[-0x58])
                        
                        if (ebx_2 s>= eax_71)
                            sub_404188(ebp_1[-0x58], ebp_1[-0x56])
                            break
                        
                        int32_t temp11_1 = ebx_2
                        ebx_2 += 1
                        bool z_1 = temp11_1 == 0xffffffff
                        
                        if (add_overflow(temp11_1, 1))
                            sub_403010()
                            noreturn
                        
                        *(esp_13 - 4) = &ebp_1[-0xe7]
                        sub_404280(1, ebx_2, ebp_1[-0x58])
                        sub_404188(ebp_1[-0xe7], 0x469958)
                        
                        if (z_1)
                            sub_4042c0(&ebp_1[-0x58], ebx_2, 1)
                            int32_t temp12_1 = ebx_2
                            ebx_2 -= 1
                            z_1 = temp12_1 == 1
                            
                            if (add_overflow(temp12_1, 0xffffffff))
                                sub_403010()
                                noreturn
                        
                        *(esp_13 - 4) = &ebp_1[-0xe8]
                        sub_404280(1, ebx_2, ebp_1[-0x58])
                        sub_404188(ebp_1[-0xe8], 0x469964)
                        
                        if (z_1)
                            sub_4042c0(&ebp_1[-0x58], ebx_2, 1)
                            int32_t temp13_1 = ebx_2
                            ebx_2 -= 1
                            z_1 = temp13_1 == 1
                            
                            if (add_overflow(temp13_1, 0xffffffff))
                                sub_403010()
                                noreturn
                        
                        *(esp_13 - 4) = &ebp_1[-0xe9]
                        sub_404280(1, ebx_2, ebp_1[-0x58])
                        sub_404188(ebp_1[-0xe9], 0x469970)
                        
                        if (z_1)
                            sub_4042c0(&ebp_1[-0x58], ebx_2, 1)
                            int32_t temp14_1 = ebx_2
                            ebx_2 -= 1
                            
                            if (add_overflow(temp14_1, 0xffffffff))
                                sub_403010()
                                noreturn
                    
                    if (ebx_2 == eax_71)
                        sub_404188(ebp_1[-0x57], "Back")
                        
                        if (ebx_2 == eax_71)
                            sub_403e90(&ebp_1[-0x57], 0x46998c)
                        
                        *(esp_13 - 4) = ebp_1[-0x57]
                        int80_t x87_r0
                        sub_47ab08(ebp_1[-0x54], edi_2, esi, x87_r0)
                        break
                else
                    bool o_2 = unimplemented  {imul edx, edi, 0x1038}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_15 = esi * 0x23
                    bool o_3 = unimplemented  {imul eax, esi, 0x23}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_10
                    edx_10.b = *(*(ebp_1[-0x54] + 0xab0) + edi_2 * 0x81c0 + (eax_15 << 3) - 0xf8)
                    edx_10.b -= 0xd
                    char temp3_1 = edx_10.b
                    edx_10.b -= 5
                    
                    if (temp3_1 u< 5)
                        bool o_4 = unimplemented  {imul edx, edi, 0x1038}
                        
                        if (o_4)
                            sub_403010()
                            noreturn
                        
                        int32_t eax_16 =
                            sx.d(*(*(ebp_1[-0x54] + 0xab0) + edi_2 * 0x81c0 + (eax_15 << 3) - 0x14))
                        bool cond:3_1 = eax_16 != 0
                        bool cond:7_1 = eax_16 != 0
                        
                        if (eax_16 s> 0)
                            ebp_1[-0x5a] = eax_16
                            int32_t ebx = 1
                            int32_t j
                            
                            do
                                *(esp_13 - 4) = ebx
                                *(esp_13 - 8) = &ebp_1[-0x5e]
                                ebp_1[-0x54]
                                int32_t ebx_1 = sub_47b5b8(esi, edi_2)
                                sub_4088f0(ebp_1[-0x5e], &ebp_1[-0x58])
                                *(esp_13 - 4) = &ebp_1[-0x5f]
                                sub_404280(1, 1, ebp_1[-0x58])
                                sub_404188(ebp_1[-0x5f], 0x469934)
                                
                                if (not(cond:7_1))
                                    sub_4042c0(&ebp_1[-0x58], 1, 1)
                                
                                sub_4040c4(&ebp_1[-0x60], U"_", ebp_1[-0x58])
                                sub_404188(ebp_1[-0x60], ebp_1[-0x56])
                                
                                if (not(cond:3_1))
                                    *(esp_13 - 4) = esi
                                    *(esp_13 - 8) = ebx_1
                                    *(esp_13 - 0xc) = &ebp_1[-0xa0]
                                    esp_13 -= 0xc
                                    sub_404054(&ebp_1[-0xe0], ebp_1[-0x57], 0xff)
                                    ebp_1 = sub_469f7c(ebp_1[-0x54], &ebp_1[-0xe0], edi_2)
                                
                                ebx = ebx_1 + 1
                                j = ebp_1[-0x5a]
                                ebp_1[-0x5a] -= 1
                                cond:3_1 = j != 1
                                cond:7_1 = j != 1
                            while (j != 1)
                
                esi += 1
                i_1 = ebp_1[-0x59]
                ebp_1[-0x59] -= 1
                cond:1_1 = i_1 != 1
            while (i_1 != 1)
    
    sub_403010()
    noreturn
}
