// ============================================================
// 函数名称: sub_49ffc4
// 虚拟地址: 0x49ffc4
// WARP GUID: 3a97e0db-a6c6-59cc-af11-ba68860f31b1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408e4c, sub_404138, sub_4043ac, sub_406807, sub_403e1c, sub_403010, sub_403828, sub_4128c0, sub_404078, sub_404248, sub_408e1c, sub_4a048c, sub_40b4b0, sub_403df8, sub_4128a4, sub_402980, sub_402b58, sub_403d58, sub_405ae8, sub_4128f8
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_49ffc4(void* arg1, int32_t* arg2, void* arg3, int32_t arg4 @ esi, int32_t arg5 @ edi, int32_t* arg6)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* i_2 = arg3
    int32_t* esp_1 = &i_2
    void* i_1 = 8
    void* i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    void* i_3 = i_2
    i_2 = i_1
    int32_t entry_ebx
    *(esp_1 - 4) = entry_ebx
    *(esp_1 - 8) = arg4
    *(esp_1 - 0xc) = arg5
    i_2 = arg1
    *(esp_1 - 0x10) = &var_4
    *(esp_1 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x18) = fsbase->NtTib.ExceptionList
    void* esp_8 = esp_1 - 0x18
    fsbase->NtTib.ExceptionList = esp_8
    sub_403df8(arg6)
    char var_15 = 0
    
    if (i_3 != 0x7fffffff && mods.dp.d(sx.q(i_3), 3) s> 0)
        char* var_20
        sub_405ae8(data_52ff3c, &var_20)
        int32_t edx_3
        edx_3.b = 1
        sub_40b4b0(0x4988ec, edx_3, var_20)
        sub_403828()
        noreturn
    
    int32_t eax_6 = sub_4128c0(arg2)
    int32_t eax_8 = sub_4128a4(arg2)
    void* i_4 = eax_6 - eax_8
    
    if (add_overflow(eax_6, neg.d(eax_8)))
        sub_403010()
        noreturn
    
    if (i_3 s< i_4)
        i_4 = i_3
    
    int32_t var_48
    int32_t var_28
    int32_t var_10
    
    if (i_4 != 0)
        if (add_overflow(i_4, 2))
            sub_403010()
            noreturn
        
        bool o_2 = unimplemented  {imul edx, eax, 0x4}
        
        if (o_2)
            sub_403010()
            noreturn
        
        sub_4043ac(arg6, divs.dp.d(sx.q(i_4 + 2), 3) * 4)
        int32_t edi = 0
        sub_4043ac(&var_10, i_4)
        int32_t ecx_3
        void* edx_8
        ecx_3, edx_8 = sub_4128f8(arg2, sub_404248(&var_10), i_4)
        int32_t ebx_1 = 1
        int16_t x87control
        
        if (i_4 s>= 1)
            do
                edx_8.b = *(var_10 + ebx_1 - 1)
                int32_t temp6_1 = ebx_1
                ebx_1 += 1
                
                if (add_overflow(temp6_1, 1))
                    sub_403010()
                    noreturn
                
                int32_t var_14_1
                int32_t eax_19
                
                if (i_4 s< ebx_1)
                    eax_19 = 0
                    var_14_1 = 1
                else
                    eax_19.b = *(var_10 + ebx_1 - 1)
                    int32_t temp10_1 = ebx_1
                    ebx_1 += 1
                    
                    if (add_overflow(temp10_1, 1))
                        sub_403010()
                        noreturn
                    
                    if (i_4 s< ebx_1)
                        var_15 = 0
                        var_14_1 = 2
                    else
                        ecx_3.b = *(var_10 + ebx_1 - 1)
                        var_15 = ecx_3.b
                        int32_t temp13_1 = ebx_1
                        ebx_1 += 1
                        
                        if (add_overflow(temp13_1, 1))
                            sub_403010()
                            noreturn
                        
                        var_14_1 = 3
                
                ecx_3.b = var_15
                *(esp_8 - 4) = ecx_3
                void var_1c
                *(esp_8 - 8) = &var_1c
                sub_4a048c(eax_19, edx_8, i_2)
                int32_t eax_23 = sub_404078(*arg6)
                
                if (add_overflow(edi, 4))
                    sub_403010()
                    noreturn
                
                if (eax_23 s< edi + 4)
                    *(esp_8 - 4) = "TIdEncoder3to4.Encode: Calculated length exceeded (expected "
                    
                    if (add_overflow(i_4, 2))
                        sub_403010()
                        noreturn
                    
                    int32_t eax_26
                    int32_t ecx_5
                    int32_t edx_11
                    eax_26, ecx_5, edx_11, x87control =
                        sub_402b58(x87control, float.t(i_4 + 2) / fconvert.t(3f))
                    *(esp_8 - 8) = edx_11
                    *(esp_8 - 0xc) = eax_26
                    int32_t eax_28
                    int32_t edx_13
                    eax_28, edx_13 = sub_406807(ecx_5, 0, 4)
                    *(esp_8 - 8) = edx_13
                    *(esp_8 - 0xc) = eax_28
                    sub_408e4c()
                    *(esp_8 - 8) = var_28
                    *(esp_8 - 0xc) = ", about to go "
                    
                    if (add_overflow(edi, 4))
                        sub_403010()
                        noreturn
                    
                    int32_t var_30
                    sub_408e1c(edi + 4, &var_30)
                    *(esp_8 - 0x10) = var_30
                    *(esp_8 - 0x14) = " at offset "
                    int32_t var_34
                    sub_408e1c(ebx_1, &var_34)
                    *(esp_8 - 0x18) = var_34
                    *(esp_8 - 0x1c) = " of "
                    int32_t var_38
                    sub_408e1c(i_4, &var_38)
                    *(esp_8 - 0x20) = var_38
                    char* var_24
                    sub_404138(&var_24, 8)
                    esp_8 -= 8
                    sub_403d58()
                
                sub_402980(&var_1c, sub_404248(arg6) + edi, 4)
                int32_t temp16_1 = edi
                edi += 4
                
                if (add_overflow(temp16_1, 4))
                    sub_403010()
                    noreturn
                
                if (var_14_1 s< 3)
                    void* eax_39
                    eax_39, ecx_3 = sub_404248(arg6)
                    edx_8.b = *(i_2 + 0x28)
                    *(eax_39 + edi - 1) = edx_8.b
                    
                    if (var_14_1 == 1)
                        void* eax_41
                        eax_41, ecx_3 = sub_404248(arg6)
                        edx_8.b = *(i_2 + 0x28)
                        *(eax_41 + edi - 2) = edx_8.b
            while (i_4 s>= ebx_1)
        
        if (add_overflow(i_4, 2))
            sub_403010()
            noreturn
        
        int32_t eax_44
        int32_t ecx_7
        int32_t edx_18
        int16_t x87control_1
        eax_44, ecx_7, edx_18, x87control_1 = sub_402b58(x87control, float.t(i_4 + 2) / fconvert.t(3f))
        *(esp_8 - 4) = edx_18
        *(esp_8 - 8) = eax_44
        int32_t eax_46
        int32_t edx_20
        eax_46, edx_20 = sub_406807(ecx_7, 0, 4)
        *(esp_8 - 4) = edx_20
        *(esp_8 - 8) = eax_46
        int32_t eax_48
        int32_t edx_21
        edx_21:eax_48 = sx.q(edi)
        int32_t temp9_1 = *(esp_8 - 4)
        bool cond:0_1 = edx_21 == temp9_1
        
        if (edx_21 == temp9_1)
            cond:0_1 = eax_48 == *(esp_8 - 8)
        
        *(esp_8 - 8)
        *(esp_8 - 4)
        
        if (not(cond:0_1))
            *(esp_8 - 4) = "TIdEncoder3to4.Encode: Calculated length not met (expected "
            
            if (add_overflow(i_4, 2))
                sub_403010()
                noreturn
            
            int32_t eax_52
            int32_t ecx_8
            int32_t edx_23
            eax_52, ecx_8, edx_23 = sub_402b58(x87control_1, float.t(i_4 + 2) / fconvert.t(3f))
            *(esp_8 - 8) = edx_23
            *(esp_8 - 0xc) = eax_52
            int32_t eax_54
            int32_t edx_25
            eax_54, edx_25 = sub_406807(ecx_8, 0, 4)
            *(esp_8 - 8) = edx_25
            *(esp_8 - 0xc) = eax_54
            sub_408e4c()
            int32_t var_40
            *(esp_8 - 8) = var_40
            *(esp_8 - 0xc) = ", finished at "
            
            if (add_overflow(edi, 4))
                sub_403010()
                noreturn
            
            int32_t var_44
            sub_408e1c(edi + 4, &var_44)
            *(esp_8 - 0x10) = var_44
            *(esp_8 - 0x14) = ", Bufsize = "
            sub_408e1c(i_4, &var_48)
            *(esp_8 - 0x18) = var_48
            char* var_3c
            sub_404138(&var_3c, 6)
            sub_403d58()
    
    *(esp_8 + 8)
    fsbase->NtTib.ExceptionList = *esp_8
    *(esp_8 + 8) = sub_4a0349
    sub_403e1c(&var_48, 7)
    sub_403e1c(&var_28, 3)
    int32_t* result = &var_10
    sub_403df8(result)
    return result
}
