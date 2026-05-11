// ============================================================
// 函数名称: sub_46f000
// 虚拟地址: 0x46f000
// WARP GUID: 54f88b9b-a4e0-5f11-90c3-48ca37f7d248
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_46ef88, sub_40422c, sub_4040c4, sub_404138, sub_408e1c, sub_404080, sub_469d58, sub_405f4c, sub_402824, sub_40401c, sub_403df8, sub_402bc0, sub_46abfc, sub_403e1c, sub_402b90, sub_4062f8, sub_405e46, sub_403010
// [被调用的父级函数]: sub_46d884, sub_46db80
// ============================================================

void* __convention("regparm")sub_46f000(void* arg1, int32_t arg2, void* arg3, int32_t arg4 @ esi, int32_t arg5 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* i_3 = arg3
    int32_t* esp_1 = &i_3
    void* i_2 = 0x74
    void* i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_2
        i_2 -= 1
    while (i != 1)
    *(esp_1 - 4) = i_2
    void* i_4 = i_3
    i_3 = i_2
    int32_t entry_ebx
    *(esp_1 - 8) = entry_ebx
    *(esp_1 - 0xc) = arg4
    *(esp_1 - 0x10) = arg5
    sub_40422c(i_4)
    *(esp_1 - 0x14) = &var_4
    *(esp_1 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x1c) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0x1c
    *(esp_1 - 0x20) = i_4
    *(esp_1 - 0x24) = " <= "
    bool o = unimplemented  {imul ebx, dword [ebp-0x154], 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    sub_40401c(i_4, *(arg1 + 0xab0) + arg2 * 0x81c0 + 0x813c)
    int32_t var_26c
    *(esp_1 - 0x28) = var_26c
    char* var_268
    sub_404138(&var_268, 3)
    *(esp_1 - 0x20) = var_268
    char* var_270
    sub_4040c4(&var_270, *(arg1 + 0xa64), "\data\settings\indexes.txt")
    int32_t ebx_1
    void* ebp_1
    ebx_1, ebp_1 = sub_46abfc(arg1, var_270, *(esp_1 - 0x20))
    sub_405e46(ebp_1 - 0x14c, *(ebp_1 - 0x158))
    int32_t eax_8
    int32_t ecx_2
    int32_t edx_7
    eax_8, ecx_2, edx_7 = sub_4062f8()
    sub_402824(eax_8)
    esp_1[1] = ebp_1
    void* ebp_2 = sub_46ef88(&data_46f414, edx_7, ecx_2)
    esp_1[1]
    esp_1[1] = ebp_2
    sub_408e1c(*(ebp_2 - 0x154), ebp_2 - 0x270)
    int32_t ecx_4
    int32_t edx_9
    ecx_4, edx_9 = sub_404080(ebp_2 - 0x270, U"|")
    void* ebp_3 = sub_46ef88(*(ebp_2 - 0x270), edx_9, ecx_4)
    esp_1[1]
    void* esp_20 = &esp_1[2]
    *(ebp_3 - 0x15c) = *(*(ebp_3 - 0x150) + 0xab0) + (ebx_1 << 3)
    int32_t eax_17 = sx.d(*(*(ebp_3 - 0x15c) + 0x8130))
    
    if (eax_17 s> 0)
        *(ebp_3 - 0x160) = eax_17
        int32_t edi = 1
        int32_t i_1
        
        do
            bool o_1 = unimplemented  {imul eax, edi, 0x23}
            
            if (o_1)
                sub_403010()
                noreturn
            
            void* ebx_2 = *(ebp_3 - 0x15c) + edi * 0x118 - 0xf8
            *(esp_20 - 4) = ebp_3
            *(esp_20 - 8) = &data_46f42c
            sub_408e1c(edi, ebp_3 - 0x278)
            *(esp_20 - 0xc) = *(ebp_3 - 0x278)
            *(esp_20 - 0x10) = &data_46f420
            int32_t ecx_6
            int32_t edx_12
            ecx_6, edx_12 = sub_404138(ebp_3 - 0x274, 3)
            int32_t edx_13
            int32_t ebp_4
            edx_13, ebp_4 = sub_46ef88(*(ebp_3 - 0x274), edx_12, ecx_6)
            int32_t ecx_7 = *(esp_20 - 4)
            int32_t ecx_8
            int32_t edx_14
            void* esp_28
            int32_t ebp_5
            
            if (*(ebx_2 + 6) == 0)
                *(esp_20 - 4) = ebp_4
                edx_14, ebp_5 = sub_46ef88(&data_46f444, edx_13, ecx_7)
                ecx_8 = *(esp_20 - 4)
                esp_28 = esp_20
            else
                *(esp_20 - 4) = ebp_4
                edx_14, ebp_5 = sub_46ef88(&data_46f438, edx_13, ecx_7)
                ecx_8 = *(esp_20 - 4)
                esp_28 = esp_20
            
            void* esp_31
            void* ebp_6
            
            if (*(ebx_2 + 7) == 0)
                *(esp_28 - 4) = ebp_5
                ebp_6 = sub_46ef88(&data_46f444, edx_14, ecx_8)
                *(esp_28 - 4)
                esp_31 = esp_28
            else
                *(esp_28 - 4) = ebp_5
                ebp_6 = sub_46ef88(&data_46f438, edx_14, ecx_8)
                *(esp_28 - 4)
                esp_31 = esp_28
            
            *(esp_31 - 4) = ebp_6
            sub_402bc0(ebp_6 - 0x298, ebx_2 + 8)
            int32_t ecx_13
            int32_t edx_17
            ecx_13, edx_17 = sub_40401c(sub_402b90(ebp_6 - 0x298, 0x46f448, 0x1a), ebp_6 - 0x298)
            int32_t edx_18
            int32_t ebp_7
            edx_18, ebp_7 = sub_46ef88(*(ebp_6 - 0x27c), edx_17, ecx_13)
            int32_t ecx_14 = *(esp_31 - 4)
            int32_t ecx_15
            int32_t edx_19
            void* esp_36
            int32_t ebp_8
            
            if (*(ebx_2 + 0x70) == 0)
                *(esp_31 - 4) = ebp_7
                edx_19, ebp_8 = sub_46ef88(&data_46f444, edx_18, ecx_14)
                ecx_15 = *(esp_31 - 4)
                esp_36 = esp_31
            else
                *(esp_31 - 4) = ebp_7
                edx_19, ebp_8 = sub_46ef88(&data_46f438, edx_18, ecx_14)
                ecx_15 = *(esp_31 - 4)
                esp_36 = esp_31
            
            void* esp_39
            void* ebp_9
            
            if (*(ebx_2 + 0x71) == 0)
                *(esp_36 - 4) = ebp_8
                ebp_9 = sub_46ef88(&data_46f444, edx_19, ecx_15)
                *(esp_36 - 4)
                esp_39 = esp_36
            else
                *(esp_36 - 4) = ebp_8
                ebp_9 = sub_46ef88(&data_46f438, edx_19, ecx_15)
                *(esp_36 - 4)
                esp_39 = esp_36
            
            *(esp_39 - 4) = ebp_9
            sub_408e1c(sx.d(*(ebx_2 + 0x72)), ebp_9 - 0x29c)
            int32_t ecx_18
            int32_t edx_21
            ecx_18, edx_21 = sub_404080(ebp_9 - 0x29c, U"|")
            void* ebp_10 = sub_46ef88(*(ebp_9 - 0x29c), edx_21, ecx_18)
            *(esp_39 - 4)
            *(esp_39 - 4) = ebp_10
            sub_408e1c(sx.d(*(ebx_2 + 0x74)), ebp_10 - 0x2a0)
            int32_t ecx_20
            int32_t edx_23
            ecx_20, edx_23 = sub_404080(ebp_10 - 0x2a0, U"|")
            void* ebp_11 = sub_46ef88(*(ebp_10 - 0x2a0), edx_23, ecx_20)
            *(esp_39 - 4)
            *(esp_39 - 4) = ebp_11
            sub_408e1c(sx.d(*(ebx_2 + 0xe4)), ebp_11 - 0x2a4)
            int32_t ecx_22
            int32_t edx_25
            ecx_22, edx_25 = sub_404080(ebp_11 - 0x2a4, U"|")
            int32_t edx_26
            void* ebp_12
            edx_26, ebp_12 = sub_46ef88(*(ebp_11 - 0x2a4), edx_25, ecx_22)
            int32_t ecx_23 = *(esp_39 - 4)
            
            if (sx.d(*(ebx_2 + 0xe4)) s> 0)
                int32_t esi = 1
                int32_t j
                
                do
                    *(esp_39 - 4) = *(ebp_12 - 0x154)
                    *(esp_39 - 8) = edi
                    *(esp_39 - 0xc) = esi
                    *(esp_39 - 0x10) = ebp_12 - 0x3a4
                    int32_t ecx_25
                    void* ebp_13
                    ecx_25, j, ebp_13 = sub_469d58(*(ebp_12 - 0x150), ebp_12 - 0x260, 0xff)
                    *(esp_39 - 4) = ebp_13
                    sub_40401c(ecx_25, ebp_13 - 0x260)
                    int32_t ecx_26
                    int32_t edx_29
                    ecx_26, edx_29 = sub_404080(ebp_13 - 0x3a8, U"<")
                    edx_26, ebp_12 = sub_46ef88(*(ebp_13 - 0x3a8), edx_29, ecx_26)
                    ecx_23 = *(esp_39 - 4)
                    esi += 1
                while (j != 1)
            
            *(esp_39 - 4) = ebp_12
            ebp_3 = sub_46ef88(&data_46f420, edx_26, ecx_23)
            *(esp_39 - 4)
            esp_20 = esp_39
            edi += 1
            i_1 = *(ebp_3 - 0x160)
            *(ebp_3 - 0x160) -= 1
        while (i_1 != 1)
    
    sub_402824(sub_405f4c(ebp_3 - 0x14c))
    *(esp_20 + 8)
    fsbase->NtTib.ExceptionList = *esp_20
    *(esp_20 + 8) = sub_46f3d0
    sub_403df8(ebp_3 - 0x3a8)
    sub_403e1c(ebp_3 - 0x2a4, 3)
    sub_403e1c(ebp_3 - 0x27c, 7)
    sub_403df8(ebp_3 - 0x158)
    return ebp_3 - 0x158
}
