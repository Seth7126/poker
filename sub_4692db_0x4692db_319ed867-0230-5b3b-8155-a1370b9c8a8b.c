// ============================================================
// 函数名称: sub_4692db
// 虚拟地址: 0x4692db
// WARP GUID: 319ed867-0230-5b3b-8155-a1370b9c8a8b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_404138, sub_4042c0, sub_47b5b8, sub_402824, sub_47a7ec, sub_4062e1, sub_404280, sub_405e46, sub_403010, sub_403e1c, sub_403e90, sub_404078, sub_469254, sub_404188, sub_47ab08, sub_4040c4, sub_469f7c, sub_405f4c, sub_4691b4, sub_405f88, sub_4088f0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4692db(char* arg1, char* arg2, int32_t* arg3, void* arg4 @ ebp, int32_t arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg2 += arg3.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    int32_t i_2 = 0x74
    int32_t esp
    int32_t i
    
    do
        *(esp - 4) = 0
        *(esp - 8) = 0
        esp -= 8
        i = i_2
        i_2 -= 1
    while (i != 1)
    *(esp - 4) = i_2
    int32_t entry_ebx
    *(esp - 8) = entry_ebx
    *(esp - 0xc) = arg5
    *(esp - 0x10) = arg6
    *(arg4 - 0x150) = arg1
    *(esp - 0x14) = arg4
    *(esp - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp - 0x1c) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp - 0x1c
    *(esp - 0x20) = *(*(arg4 - 0x150) + 0xa64)
    *(esp - 0x24) = "\data\local\c_"
    *(esp - 0x28) = *(*(arg4 - 0x150) + 0x1354)
    *(esp - 0x2c) = ".txt"
    int32_t* esp_12 = esp - 0x2c
    sub_404138(arg4 - 0x154, 4)
    sub_405e46(arg4 - 0x14c, *(arg4 - 0x154))
    sub_402824(sub_4062e1())
    
    while (true)
        uint32_t eax_79 = sub_405f88(arg4 - 0x14c)
        sub_402824(eax_79)
        
        if (eax_79.b != 0)
            sub_402824(sub_405f4c(arg4 - 0x14c))
            esp_12[2]
            fsbase->NtTib.ExceptionList = *esp_12
            esp_12[2] = sub_4698ee
            sub_403e1c(arg4 - 0x3a4, 9)
            sub_403e1c(arg4 - 0x180, 6)
            return sub_403e1c(arg4 - 0x160, 4)
        
        *(esp_12 - 4) = arg4
        int32_t eax_6
        void* edx_2
        eax_6, edx_2 = sub_469254()
        *(esp_12 - 4)
        *(esp_12 - 4) = arg4
        void* ebp = sub_4691b4(arg4 - 0x16c, edx_2)
        *(esp_12 - 4)
        void* edx_4 = sub_4088f0(*(ebp - 0x16c), ebp - 0x158)
        *(esp_12 - 4) = ebp
        int32_t edi_2
        arg4, edi_2 = sub_4691b4(ebp - 0x170, edx_4)
        *(esp_12 - 4)
        sub_403e90(arg4 - 0x15c, *(arg4 - 0x170))
        bool o_1 = unimplemented  {imul eax, edi, 0x1038}
        
        if (o_1)
            break
        
        int32_t eax_12 = sx.d(*(*(*(arg4 - 0x150) + 0xab0) + edi_2 * 0x81c0 + 0x8130))
        bool cond:1_1 = eax_12 != 0
        
        if (eax_12 s> 0)
            *(arg4 - 0x164) = eax_12
            int32_t esi = 1
            int32_t i_1
            
            do
                *(esp_12 - 4) = arg4 - 0x174
                sub_404280(1, 1, *(arg4 - 0x158))
                sub_404188(*(arg4 - 0x174), 0x469928)
                
                if (cond:1_1)
                    bool o_5 = unimplemented  {imul eax, edi, 0x1038}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    bool o_6 = unimplemented  {imul edx, esi, 0x23}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_31
                    eax_31.b = *(*(*(arg4 - 0x150) + 0xab0) + edi_2 * 0x81c0 + esi * 0x118 - 0xf8)
                    char temp2_1 = eax_31.b
                    eax_31.b -= 2
                    bool cond:0_1 = temp2_1 != 2
                    bool cond:2_1 = temp2_1 == 2
                    bool cond:4_1 = temp2_1 == 2
                    bool cond:5_1 = temp2_1 != 2
                    bool cond:6_1 = temp2_1 != 2
                    
                    if (temp2_1 u< 2)
                    label_46959f:
                        *(esp_12 - 4) = 0
                        *(esp_12 - 8) = arg4 - 0x384
                        *(arg4 - 0x150)
                        arg4 = sub_47a7ec(esi)
                        sub_4088f0(*(arg4 - 0x384), arg4 - 0x160)
                    else
                        char temp4_1 = eax_31.b
                        eax_31.b -= 2
                        cond:0_1 = temp4_1 != 2
                        cond:2_1 = temp4_1 == 2
                        cond:4_1 = temp4_1 == 2
                        cond:5_1 = temp4_1 != 2
                        cond:6_1 = temp4_1 != 2
                        
                        if (temp4_1 == 2)
                            goto label_46959f
                        
                        char temp6_1 = eax_31.b
                        eax_31.b -= 6
                        cond:0_1 = temp6_1 != 6
                        cond:2_1 = temp6_1 == 6
                        cond:4_1 = temp6_1 == 6
                        cond:5_1 = temp6_1 != 6
                        cond:6_1 = temp6_1 != 6
                        
                        if (temp6_1 == 6)
                            goto label_46959f
                        
                        char temp8_1 = eax_31.b
                        eax_31.b -= 2
                        cond:0_1 = temp8_1 != 2
                        cond:2_1 = temp8_1 == 2
                        cond:4_1 = temp8_1 == 2
                        cond:5_1 = temp8_1 != 2
                        cond:6_1 = temp8_1 != 2
                        
                        if (temp8_1 == 2)
                            goto label_46959f
                        
                        char temp9_1 = eax_31.b
                        eax_31.b -= 6
                        cond:0_1 = temp9_1 != 6
                        cond:2_1 = temp9_1 == 6
                        cond:4_1 = temp9_1 == 6
                        cond:5_1 = temp9_1 != 6
                        cond:6_1 = temp9_1 != 6
                        
                        if (temp9_1 == 6)
                            goto label_46959f
                    
                    *(esp_12 - 4) = arg4 - 0x388
                    sub_404280(1, 1, *(arg4 - 0x160))
                    sub_404188(*(arg4 - 0x388), 0x469934)
                    
                    if (not(cond:5_1))
                        sub_4042c0(arg4 - 0x160, 1, 1)
                    
                    *(esp_12 - 4) = arg4 - 0x38c
                    sub_404280(1, 1, *(arg4 - 0x160))
                    void* esp_30 = esp_12
                    sub_404188(*(arg4 - 0x38c), 0x469940)
                    
                    if (not(cond:0_1))
                        sub_4042c0(arg4 - 0x160, 1, 1)
                    
                    while (true)
                        *(esp_30 - 4) = arg4 - 0x390
                        sub_404280(1, 1, *(arg4 - 0x160))
                        sub_404188(*(arg4 - 0x390), 0x46994c)
                        
                        if (not(cond:2_1))
                            break
                        
                        sub_4042c0(arg4 - 0x160, 1, 1)
                    
                    while (true)
                        *(esp_30 - 4) = arg4 - 0x394
                        sub_404280(1, sub_404078(*(arg4 - 0x160)), *(arg4 - 0x160))
                        sub_404188(*(arg4 - 0x394), 0x46994c)
                        
                        if (not(cond:4_1))
                            break
                        
                        sub_4042c0(arg4 - 0x160, sub_404078(*(arg4 - 0x160)), 1)
                    
                    *(esp_30 - 4) = arg4 - 0x398
                    sub_404280(1, 1, *(arg4 - 0x158))
                    esp_12 = esp_30
                    sub_404188(*(arg4 - 0x398), 0x469934)
                    
                    if (not(cond:6_1))
                        sub_4042c0(arg4 - 0x158, 1, 1)
                    
                    int32_t ebx_2 = 1
                    int32_t eax_72
                    
                    while (true)
                        eax_72 = sub_404078(*(arg4 - 0x160))
                        
                        if (ebx_2 s>= eax_72)
                            sub_404188(*(arg4 - 0x160), *(arg4 - 0x158))
                            break
                        
                        int32_t temp11_1 = ebx_2
                        ebx_2 += 1
                        bool z_1 = temp11_1 == 0xffffffff
                        
                        if (add_overflow(temp11_1, 1))
                            sub_403010()
                            noreturn
                        
                        *(esp_12 - 4) = arg4 - 0x39c
                        sub_404280(1, ebx_2, *(arg4 - 0x160))
                        sub_404188(*(arg4 - 0x39c), 0x469958)
                        
                        if (z_1)
                            sub_4042c0(arg4 - 0x160, ebx_2, 1)
                            int32_t temp12_1 = ebx_2
                            ebx_2 -= 1
                            z_1 = temp12_1 == 1
                            
                            if (add_overflow(temp12_1, 0xffffffff))
                                sub_403010()
                                noreturn
                        
                        *(esp_12 - 4) = arg4 - 0x3a0
                        sub_404280(1, ebx_2, *(arg4 - 0x160))
                        sub_404188(*(arg4 - 0x3a0), 0x469964)
                        
                        if (z_1)
                            sub_4042c0(arg4 - 0x160, ebx_2, 1)
                            int32_t temp13_1 = ebx_2
                            ebx_2 -= 1
                            z_1 = temp13_1 == 1
                            
                            if (add_overflow(temp13_1, 0xffffffff))
                                sub_403010()
                                noreturn
                        
                        *(esp_12 - 4) = arg4 - 0x3a4
                        sub_404280(1, ebx_2, *(arg4 - 0x160))
                        sub_404188(*(arg4 - 0x3a4), 0x469970)
                        
                        if (z_1)
                            sub_4042c0(arg4 - 0x160, ebx_2, 1)
                            int32_t temp14_1 = ebx_2
                            ebx_2 -= 1
                            
                            if (add_overflow(temp14_1, 0xffffffff))
                                sub_403010()
                                noreturn
                    
                    if (ebx_2 == eax_72)
                        sub_404188(*(arg4 - 0x15c), "Back")
                        
                        if (ebx_2 == eax_72)
                            sub_403e90(arg4 - 0x15c, 0x46998c)
                        
                        *(esp_12 - 4) = *(arg4 - 0x15c)
                        int80_t x87_r0
                        sub_47ab08(*(arg4 - 0x150), edi_2, esi, x87_r0)
                        break
                else
                    bool o_2 = unimplemented  {imul edx, edi, 0x1038}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_16 = esi * 0x23
                    bool o_3 = unimplemented  {imul eax, esi, 0x23}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_10
                    edx_10.b = *(*(*(arg4 - 0x150) + 0xab0) + edi_2 * 0x81c0 + (eax_16 << 3) - 0xf8)
                    edx_10.b -= 0xd
                    char temp3_1 = edx_10.b
                    edx_10.b -= 5
                    
                    if (temp3_1 u< 5)
                        bool o_4 = unimplemented  {imul edx, edi, 0x1038}
                        
                        if (o_4)
                            sub_403010()
                            noreturn
                        
                        int32_t eax_17 =
                            sx.d(*(*(*(arg4 - 0x150) + 0xab0) + edi_2 * 0x81c0 + (eax_16 << 3) - 0x14))
                        bool cond:3_1 = eax_17 != 0
                        bool cond:7_1 = eax_17 != 0
                        
                        if (eax_17 s> 0)
                            *(arg4 - 0x168) = eax_17
                            int32_t ebx = 1
                            int32_t j
                            
                            do
                                *(esp_12 - 4) = ebx
                                *(esp_12 - 8) = arg4 - 0x178
                                *(arg4 - 0x150)
                                int32_t ebx_1 = sub_47b5b8(esi, edi_2)
                                sub_4088f0(*(arg4 - 0x178), arg4 - 0x160)
                                *(esp_12 - 4) = arg4 - 0x17c
                                sub_404280(1, 1, *(arg4 - 0x160))
                                sub_404188(*(arg4 - 0x17c), 0x469934)
                                
                                if (not(cond:7_1))
                                    sub_4042c0(arg4 - 0x160, 1, 1)
                                
                                sub_4040c4(arg4 - 0x180, U"_", *(arg4 - 0x160))
                                sub_404188(*(arg4 - 0x180), *(arg4 - 0x158))
                                
                                if (not(cond:3_1))
                                    *(esp_12 - 4) = esi
                                    *(esp_12 - 8) = ebx_1
                                    *(esp_12 - 0xc) = arg4 - 0x280
                                    esp_12 -= 0xc
                                    sub_404054(arg4 - 0x380, *(arg4 - 0x15c), 0xff)
                                    arg4 = sub_469f7c(*(arg4 - 0x150), arg4 - 0x380, edi_2)
                                
                                ebx = ebx_1 + 1
                                j = *(arg4 - 0x168)
                                *(arg4 - 0x168) -= 1
                                cond:3_1 = j != 1
                                cond:7_1 = j != 1
                            while (j != 1)
                
                esi += 1
                i_1 = *(arg4 - 0x164)
                *(arg4 - 0x164) -= 1
                cond:1_1 = i_1 != 1
            while (i_1 != 1)
    
    sub_403010()
    noreturn
}
