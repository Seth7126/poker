// ============================================================
// 函数名称: sub_46f698
// 虚拟地址: 0x46f698
// WARP GUID: 21f92d65-b4c3-57ed-ae22-a32afa2446d2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_409040, sub_46accc, sub_404138, sub_402824, sub_40401c, sub_402bdc, sub_4062e1, sub_46f644, sub_405e46, sub_403e1c, sub_403010, sub_404188, sub_46f5a0, sub_402bc0, sub_40422c, sub_4040c4, sub_469f7c, sub_408e1c, sub_402b90, sub_403df8, sub_405f4c, sub_405f88, sub_408e80
// [被调用的父级函数]: sub_4e6659, sub_46dce0, sub_46d9ac, sub_46d99f, sub_4e649b
// ============================================================

void* __fastcallsub_46f698(char* arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    char* i_4 = arg1
    int32_t* esp_1 = &i_4
    char* i_2 = 0x7d
    char* i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_2
        i_2 -= 1
    while (i != 1)
    char* i_5 = i_4
    i_4 = i_2
    int32_t entry_ebx
    *(esp_1 - 4) = entry_ebx
    *(esp_1 - 8) = arg2
    *(esp_1 - 0xc) = arg3
    int32_t edx
    int32_t var_158 = edx
    int32_t eax
    int32_t var_154 = eax
    sub_40422c(i_5)
    *(esp_1 - 0x10) = &var_4
    *(esp_1 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x18) = fsbase->NtTib.ExceptionList
    void* esp_8 = esp_1 - 0x18
    fsbase->NtTib.ExceptionList = esp_8
    
    if (sub_409040(i_5) != 0)
        void var_150
        sub_405e46(&var_150, i_5)
        sub_402824(sub_4062e1())
        
        while (true)
            ebp_1[-0x54]
            void* ecx_1 = sub_46accc()
            *(esp_8 - 4) = ebp_1
            void* ebp_2 = sub_46f5a0(0x3e, &ebp_1[-0x58], ecx_1)
            void* ecx_2 = *(esp_8 - 4)
            *(esp_8 - 4) = ebp_2
            int32_t ebx_1
            ebx_1, ebp_1 = sub_46f5a0(0x7c, ebp_2 - 0x164, ecx_2)
            *(esp_8 - 4)
            int32_t ebx_2 = ebx_1 + 1
            
            if (add_overflow(ebx_1, 1))
                sub_403010()
                noreturn
            
            ebp_1[-0x55]
            bool o_2 = unimplemented  {imul eax, dword [ebp-0x154], 0x1038}
            
            if (o_2)
                sub_403010()
                noreturn
            
            if (ebx_2 s<= sx.d(*(*(ebp_1[-0x54] + 0xab0) + ebp_1[-0x55] * 0x81c0 + 0x8130)))
                *(ebp_1[-0x54] + 0xab0)
                bool o_3 = unimplemented  {imul edx, ebx, 0x23}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                *(esp_8 - 4) = ".dco: !read "
                sub_408e1c(ebp_1[-0x55], &ebp_1[-0x5b])
                *(esp_8 - 8) = ebp_1[-0x5b]
                *(esp_8 - 0xc) = &data_46fc5c
                sub_408e1c(ebx_2, &ebp_1[-0x5c])
                *(esp_8 - 0x10) = ebp_1[-0x5c]
                sub_404138(&ebp_1[-0x5a], 4)
                ebp_1[-0x5a]
                ebp_1[-0x54]
                void* ecx_4 = sub_46accc()
                *(esp_8 - 4) = ebp_1
                int32_t ebx_3
                void* ebp_3
                ebx_3, ebp_3 = sub_46f5a0(0x7c, &ebp_1[-0x5d], ecx_4)
                *(esp_8 - 4)
                *(ebp_3 - 0x150)
                void* edx_17 = sub_46accc()
                *(esp_8 - 4) = ebp_3
                char eax_16 = sub_46f644(ebx_3, edx_17)
                void* ecx_6 = *(esp_8 - 4)
                int32_t ebx_4
                void* esp_22
                void* ebp_4
                
                if (eax_16 == 0)
                    *(esp_8 - 4) = ebp_3
                    ebx_4, ebp_4 = sub_46f5a0(0x7c, ebp_3 - 0x17c, ecx_6)
                    *(esp_8 - 4)
                    esp_22 = esp_8
                else
                    *(esp_8 - 4) = ebp_3
                    void* esi_1
                    ebx_4, ebp_4, esi_1 = sub_46f5a0(0x7c, ebp_3 - 0x178, ecx_6)
                    *(esp_8 - 4)
                    esp_22 = esp_8
                    sub_404188(*(ebp_4 - 0x178), 0x46fc84)
                    *(esi_1 + 6) = eax_16 == 0
                
                *(ebp_4 - 0x150)
                void* edx_21 = sub_46accc()
                *(esp_22 - 4) = ebp_4
                char eax_21 = sub_46f644(ebx_4, edx_21)
                void* ecx_9 = *(esp_22 - 4)
                int32_t ebx_5
                void* esp_27
                void* ebp_5
                char* esi_2
                
                if (eax_21 == 0)
                    *(esp_22 - 4) = ebp_4
                    ebx_5, ebp_5, esi_2 = sub_46f5a0(0x7c, ebp_4 - 0x184, ecx_9)
                    *(esp_22 - 4)
                    esp_27 = esp_22
                else
                    *(esp_22 - 4) = ebp_4
                    ebx_5, ebp_5, esi_2 = sub_46f5a0(0x7c, ebp_4 - 0x180, ecx_9)
                    *(esp_22 - 4)
                    esp_27 = esp_22
                    sub_404188(*(ebp_5 - 0x180), 0x46fc84)
                    esi_2[7] = eax_21 == 0
                
                *(ebp_5 - 0x150)
                void* edx_25 = sub_46accc()
                *(esp_27 - 4) = ebp_5
                char eax_26 = sub_46f644(ebx_5, edx_25)
                void* ecx_12 = *(esp_27 - 4)
                int32_t ebx_6
                void* esp_32
                void* ebp_6
                void* esi_3
                
                if (eax_26 == 0)
                    *(esp_27 - 4) = ebp_5
                    ebx_6, ebp_6, esi_3 = sub_46f5a0(0x7c, ebp_5 - 0x290, ecx_12)
                    *(esp_27 - 4)
                    esp_32 = esp_27
                else if (*esi_2 != 0xc)
                    *(esp_27 - 4) = ebp_5
                    ebx_6, ebp_6, esi_3 = sub_46f5a0(0x7c, ebp_5 - 0x28c, ecx_12)
                    *(esp_27 - 4)
                    esp_32 = esp_27
                else
                    *(esp_27 - 4) = ebp_5
                    ebx_6, ebp_6, esi_3 = sub_46f5a0(0x7c, ebp_5 - 0x288, ecx_12)
                    esp_32 = esp_27
                    sub_404054(ebp_6 - 0x284, *(ebp_6 - 0x288), 0xff)
                    sub_402bdc(esi_3 + 8, ebp_6 - 0x284, 0x19)
                
                sub_402bc0(ebp_6 - 0x2b8, "\n.dco: ok, ")
                sub_40401c(sub_402b90(ebp_6 - 0x2b8, esi_3 + 8, 0x23), ebp_6 - 0x2b8)
                *(ebp_6 - 0x294)
                *(ebp_6 - 0x150)
                sub_46accc()
                *(ebp_6 - 0x150)
                void* edx_35 = sub_46accc()
                *(esp_32 - 4) = ebp_6
                char eax_35 = sub_46f644(ebx_6, edx_35)
                void* ecx_18 = *(esp_32 - 4)
                void* ecx_20
                void* esp_38
                void* ebp_7
                
                if (eax_35 == 0)
                    *(esp_32 - 4) = ebp_6
                    ebp_7 = sub_46f5a0(0x7c, ebp_6 - 0x2c0, ecx_18)
                    ecx_20 = *(esp_32 - 4)
                    esp_38 = esp_32
                else
                    *(esp_32 - 4) = ebp_6
                    void* esi_4
                    ebp_7, esi_4 = sub_46f5a0(0x7c, ebp_6 - 0x2bc, ecx_18)
                    *(esp_32 - 4)
                    esp_38 = esp_32
                    ecx_20 = sub_404188(*(ebp_7 - 0x2bc), 0x46fc84)
                    *(esi_4 + 0x70) = eax_35 == 0
                
                *(esp_38 - 4) = ebp_7
                int32_t ebx_7
                void* ebp_8
                ebx_7, ebp_8 = sub_46f5a0(true, ebp_7 - 0x2c4, ecx_20)
                *(esp_38 - 4)
                *(ebp_8 - 0x150)
                void* edx_40 = sub_46accc()
                *(esp_38 - 4) = ebp_8
                char eax_40 = sub_46f644(ebx_7, edx_40)
                void* ecx_22 = *(esp_38 - 4)
                int32_t ebx_8
                void* esp_45
                void* ebp_9
                
                if (eax_40 == 0)
                    *(esp_38 - 4) = ebp_8
                    ebx_8, ebp_9 = sub_46f5a0(0x7c, ebp_8 - 0x2cc, ecx_22)
                    *(esp_38 - 4)
                    esp_45 = esp_38
                else
                    *(esp_38 - 4) = ebp_8
                    void* esi_5
                    ebx_8, ebp_9, esi_5 = sub_46f5a0(0x7c, ebp_8 - 0x2c8, ecx_22)
                    *(esp_38 - 4)
                    esp_45 = esp_38
                    *(esi_5 + 0x72) = sub_408e80(*(ebp_9 - 0x2c8))
                
                *(ebp_9 - 0x150)
                void* edx_44 = sub_46accc()
                *(esp_45 - 4) = ebp_9
                char eax_45 = sub_46f644(ebx_8, edx_44)
                void* ecx_25 = *(esp_45 - 4)
                void* esp_50
                void* ebp_10
                
                if (eax_45 == 0)
                    *(esp_45 - 4) = ebp_9
                    ebp_10 = sub_46f5a0(0x7c, ebp_9 - 0x2d4, ecx_25)
                    *(esp_45 - 4)
                    esp_50 = esp_45
                else
                    *(esp_45 - 4) = ebp_9
                    void* esi_6
                    ebp_10, esi_6 = sub_46f5a0(0x7c, ebp_9 - 0x2d0, ecx_25)
                    *(esp_45 - 4)
                    esp_50 = esp_45
                    *(esi_6 + 0x74) = sub_408e80(*(ebp_10 - 0x2d0))
                
                *(ebp_10 - 0x150)
                void* ecx_28 = sub_46accc()
                *(esp_50 - 4) = ebp_10
                int32_t ebx_9
                void* ebp_11
                char* esi_7
                ebx_9, ebp_11, esi_7 = sub_46f5a0(0x7c, ebp_10 - 0x2d8, ecx_28)
                *(esp_50 - 4)
                void* esp_53 = esp_50
                int32_t i_3 = sub_408e80(*(ebp_11 - 0x2d8))
                sub_408e1c(sx.d(*(esi_7 + 0xe4)), ebp_11 - 0x2e0)
                sub_4040c4(ebp_11 - 0x2dc, ".dco: Set Strings to ", *(ebp_11 - 0x2e0))
                *(ebp_11 - 0x2dc)
                *(ebp_11 - 0x150)
                void* ecx_31
                void* edx_51
                ecx_31, edx_51 = sub_46accc()
                
                if (i_3 s> 0)
                    *(ebp_11 - 0x15c) = 1
                    int32_t i_1
                    
                    do
                        *(esp_53 - 4) = ebp_11
                        char eax_56 = sub_46f644(ebx_9, edx_51)
                        void* ecx_32 = *(esp_53 - 4)
                        
                        if (eax_56 == 0 || *esi_7 == 0xe)
                            *(esp_53 - 4) = ebp_11
                            edx_51, ebx_9, ebp_11, esi_7 = sub_46f5a0(0x3c, ebp_11 - 0x3e8, ecx_32)
                            ecx_31 = *(esp_53 - 4)
                        else
                            *(esp_53 - 4) = ebx_9
                            *(esp_53 - 8) = *(ebp_11 - 0x15c)
                            *(esp_53 - 0xc) = ebp_11 - 0x284
                            *(esp_53 - 0x10) = ebp_11
                            void* eax_58
                            eax_58.b = 0x3c
                            void* ebp_12
                            ebx_9, ebp_12, esi_7 = sub_46f5a0(eax_58.b, ebp_11 - 0x3e4, ecx_32)
                            esp_53 -= 0xc
                            sub_404054(ebp_12 - 0x3e0, *(ebp_12 - 0x3e4), 0xff)
                            ecx_31, edx_51, ebp_11 =
                                sub_469f7c(*(ebp_12 - 0x150), ebp_12 - 0x3e0, *(ebp_12 - 0x154))
                        
                        *(ebp_11 - 0x15c) += 1
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                
                *(esp_53 - 4) = ebp_11
                ebx_2, ebp_1 = sub_46f5a0(0x7c, ebp_11 - 0x3ec, ecx_31)
                *(esp_53 - 4)
                esp_8 = esp_53
            
            uint32_t eax_62 = sub_405f88(&ebp_1[-0x53])
            sub_402824(eax_62)
            
            if (eax_62.b == 0)
                ebp_1[-0x55]
                bool o_4 = unimplemented  {imul eax, dword [ebp-0x154], 0x1038}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                if (ebx_2 s< sx.d(*(*(ebp_1[-0x54] + 0xab0) + ebp_1[-0x55] * 0x81c0 + 0x8130)))
                    continue
            
            sub_402824(sub_405f4c(&ebp_1[-0x53]))
            ebp_1[-0x54]
            sub_46accc()
            break
    
    *(esp_8 + 8)
    fsbase->NtTib.ExceptionList = *esp_8
    *(esp_8 + 8) = sub_46fc17
    sub_403e1c(&ebp_1[-0xfb], 3)
    sub_403e1c(&ebp_1[-0xb8], 0xa)
    sub_403e1c(&ebp_1[-0xa5], 4)
    sub_403e1c(&ebp_1[-0x61], 0xa)
    sub_403df8(&ebp_1[-0x56])
    return &ebp_1[-0x56]
}
