// ============================================================
// 函数名称: sub_515de8
// 虚拟地址: 0x515de8
// WARP GUID: a6b06c50-2603-5869-9fe6-01f8fcb2d50a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_4748fc, sub_402980, sub_49611c, sub_4040c4, sub_44cde0, sub_4953dc, sub_51300c, sub_40401c, sub_4953e8, sub_402bc0, sub_403e1c, sub_402b90, sub_403df8, sub_496288, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_515de8(void* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_4ac = ebx
    int32_t esi
    int32_t var_4b0 = esi
    void* edi
    void* var_4b4 = edi
    int32_t var_4a4 = 0
    int32_t var_4a8 = 0
    int32_t var_3a0 = 0
    int32_t var_348 = 0
    int32_t var_340 = 0
    int32_t var_344 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg2
    int32_t* var_4b8 = &var_4
    int32_t (* var_4bc)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4953dc(arg3)
    int32_t i_5
    
    if (*(arg1 + 0x345) == 0)
        i_5 = *(*data_530454 + 0x350)
        
        for (int32_t i = 1; i != 9; i += 1)
            int32_t edx = i * 0xe9
            bool o_1 = unimplemented  {imul edx, eax, 0xe9}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(arg1 + (edx << 2) - 0x50) == 1 && *(arg1 + (edx << 2) + 0x194) == arg3)
                i_5 = i
                break
    else
        i_5 = *(*data_530454 + 0x350)
    
    if (i_5 s<= 0 || i_5 s> 8)
        i_5 = 1
    
    int32_t* eax_8 = sub_496288()
    int32_t* var_14 = eax_8
    int32_t ebx_1 = i_5 * 0xe9
    bool o_2 = unimplemented  {imul ebx, dword [ebp-0x18], 0xe9}
    
    if (o_2)
        sub_403010()
        noreturn
    
    int32_t edx_2 = *(arg1 + (ebx_1 << 2) + 0x34c)
    
    if (add_overflow(eax_8, edx_2))
        sub_403010()
        noreturn
    
    if (eax_8 + edx_2 s> 0x7c)
        bool o_4 = unimplemented  {imul eax, dword [ebp-0x18], 0xe9}
        
        if (o_4)
            sub_403010()
            noreturn
        
        if (add_overflow(0x7c, neg.d(edx_2)))
            sub_403010()
            noreturn
        
        var_14 = 0x7c - edx_2
    
    void var_1ac
    void* ebp_1
    void* esi_2
    ebp_1, esi_2 = sub_49611c(arg3, &var_1ac, var_14)
    
    if (*(esi_2 + (ebx_1 << 2) + 0x34c) s> 0)
        *(ebp_1 - 0x18)
        bool o_6 = unimplemented  {imul eax, dword [ebp-0x18], 0xe9}
        
        if (o_6)
            sub_403010()
            noreturn
        
        int32_t i_6 = *(esi_2 + *(ebp_1 - 0x18) * 0x3a4 + 0x34c)
        
        if (i_6 s> 0)
            int32_t eax_14 = 1
            void* ecx_1 = ebp_1 - 0x338
            int32_t i_1
            
            do
                *(ebp_1 - 0x18)
                bool o_7 = unimplemented  {imul ebx, dword [ebp-0x18], 0xe9}
                
                if (o_7)
                    sub_403010()
                    noreturn
                
                void* ebx_3
                ebx_3.b = *(esi_2 + *(ebp_1 - 0x18) * 0x3a4 + eax_14 + 0x1b8)
                *ecx_1 = ebx_3.b
                eax_14 += 1
                ecx_1 += 1
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
    
    int32_t i_7 = *(ebp_1 - 0x10)
    
    if (i_7 s> 0)
        int32_t eax_15 = 1
        void* ecx_2 = ebp_1 - 0x1a8
        int32_t i_2
        
        do
            *(ebp_1 - 0x18)
            bool o_8 = unimplemented  {imul ebx, dword [ebp-0x18], 0xe9}
            
            if (o_8)
                sub_403010()
                noreturn
            
            int32_t ebx_5 = *(esi_2 + *(ebp_1 - 0x18) * 0x3a4 + 0x34c)
            
            if (add_overflow(ebx_5, eax_15))
                sub_403010()
                noreturn
            
            edi = ebp_1 + ebx_5 + eax_15 - 0x339
            int32_t ebx_6
            ebx_6.b = *ecx_2
            *edi = ebx_6.b
            eax_15 += 1
            ecx_2 += 1
            i_2 = i_7
            i_7 -= 1
        while (i_2 != 1)
    
    *(ebp_1 - 0x18)
    bool o_10 = unimplemented  {imul eax, dword [ebp-0x18], 0xe9}
    
    if (o_10)
        sub_403010()
        noreturn
    
    int32_t eax_17 = *(esi_2 + *(ebp_1 - 0x18) * 0x3a4 + 0x34c)
    
    if (add_overflow(eax_17, *(ebp_1 - 0x10)))
        sub_403010()
        noreturn
    
    *(ebp_1 - 0x14) = eax_17 + *(ebp_1 - 0x10)
    
    if (*(ebp_1 - 0x14) s< 0x7c)
        int32_t eax_39 = *(ebp_1 - 0x14)
        
        if (neg.d(eax_39) == 0x80000000)
            sub_403010()
            noreturn
        
        *(ebp_1 - 0xc) = neg.d(eax_39)
        int32_t i_9 = *(ebp_1 - 0x14)
        
        if (i_9 s> 0)
            int32_t eax_41 = 1
            void* ecx_15 = ebp_1 - 0x338
            int32_t i_3
            
            do
                *(ebp_1 - 0x18)
                bool o_16 = unimplemented  {imul ebx, dword [ebp-0x18], 0xe9}
                
                if (o_16)
                    sub_403010()
                    noreturn
                
                void* ebx_10
                ebx_10.b = *ecx_15
                *(esi_2 + *(ebp_1 - 0x18) * 0x3a4 + eax_41 + 0x1b8) = ebx_10.b
                eax_41 += 1
                ecx_15 += 1
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
    else
        int32_t ecx_3 = sub_402980(ebp_1 - 0x338, *(ebp_1 - 4), 0x7c)
        int32_t eax_21 = **(ebp_1 - 4)
        
        if (eax_21 != 0x3039 || *(*(ebp_1 - 4) + 0x78) != 0xd431)
            *(ebp_1 - 4)
            
            if (eax_21 != 0x3036)
                *(ebp_1 - 4)
                
                if (eax_21 != 0x3037)
                    *(ebp_1 - 4)
                    
                    if (eax_21 != 0x3038)
                        int32_t ecx_11
                        ecx_11, ebp_1 = sub_51300c(ebp_1 - 0x49c, *(ebp_1 - 4), esi_2, edi)
                        esp = &var_8
                        sub_40401c(ecx_11, ebp_1 - 0x49c)
                        sub_4040c4(ebp_1 - 0x4a0, sub_51621b+5, *(ebp_1 - 0x4a4))
                        *(ebp_1 - 0x4a0)
                        sub_44cde0()
                    else
                        int32_t ecx_9
                        ecx_9, ebp_1 = sub_51300c(ebp_1 - 0x49c, *(ebp_1 - 4), esi_2, edi)
                        esp = &var_8
                        sub_40401c(ecx_9, ebp_1 - 0x49c)
                        *(ebp_1 - 0x39c)
                        sub_44cde0()
                else
                    sub_402bc0(ebp_1 - 0x398, *(ebp_1 - 4) + 0x24)
                    sub_40401c(sub_402b90(ebp_1 - 0x398, *(ebp_1 - 4) + 0x65, 0x52), ebp_1 - 0x398)
                    *(ebp_1 - 0x344)
                    sub_44cde0()
            else
                int32_t var_4c4_1 = 0
                int32_t var_4c8_1 = 0
                void* var_4cc_1 = nullptr
                struct _EXCEPTION_REGISTRATION_RECORD* var_4d0 = nullptr
                int32_t ecx_4 = sub_40401c(ecx_3, *(ebp_1 - 4) + 0x65)
                void* eax_23 = *(ebp_1 - 0x33c)
                sub_40401c(ecx_4, *(ebp_1 - 4) + 0x24)
                esp = &var_4d0
                sub_4748fc(*data_530304, *(ebp_1 - 0x340), eax_23, var_4d0, var_4cc_1, var_4c8_1)
        
        *(ebp_1 - 0xc) = 1
        int32_t temp15_1 = *(ebp_1 - 0x14)
        *(ebp_1 - 0x14) -= 0x7c
        
        if (add_overflow(temp15_1, 0xffffff84))
            sub_403010()
            noreturn
        
        int32_t i_8 = *(ebp_1 - 0x14)
        
        if (i_8 s> 0)
            int32_t eax_38 = 1
            int32_t i_4
            
            do
                *(ebp_1 - 0x18)
                bool o_13 = unimplemented  {imul ecx, dword [ebp-0x18], 0xe9}
                
                if (o_13)
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_38, 0x7c))
                    sub_403010()
                    noreturn
                
                int32_t ebx_8
                ebx_8.b = *(ebp_1 + eax_38 + 0x7c - 0x339)
                *(esi_2 + *(ebp_1 - 0x18) * 0x3a4 + eax_38 + 0x1b8) = ebx_8.b
                eax_38 += 1
                i_4 = i_8
                i_8 -= 1
            while (i_4 != 1)
    
    *(ebp_1 - 0x18)
    int32_t ebx_11 = *(ebp_1 - 0x18) * 0xe9
    bool o_17 = unimplemented  {imul ebx, dword [ebp-0x18], 0xe9}
    
    if (o_17)
        sub_403010()
        noreturn
    
    *(esi_2 + (ebx_11 << 2) + 0x34c) = *(ebp_1 - 0x14)
    sub_4953e8(*(ebp_1 - 8))
    
    if (*(esi_2 + 0x344) != 0)
        *(esi_2 + (ebx_11 << 2) + 0x350) = GetTickCount()
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_51620b
    sub_403e1c(ebp_1 - 0x4a4, 2)
    sub_403df8(ebp_1 - 0x39c)
    return sub_403e1c(ebp_1 - 0x344, 3)
}
