// ============================================================
// 函数名称: sub_4b0427
// 虚拟地址: 0x4b0427
// WARP GUID: 7ada7378-b686-54e6-a395-b4ee360f5df6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_40422c, sub_4b0e20, sub_4b0e14, sub_4b19b0, sub_40b4b0, sub_4b16d0, sub_403e4c, sub_4128b4, sub_4afaf8, sub_4b06c8, sub_4b0fd8, sub_4b1160, sub_4b008c, sub_4afc9c, sub_4128a4, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b0427(char* arg1, uint16_t arg2, void* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: *0x63000000 += 1
    *0x63000000 += 1
    int32_t eflags
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg6, arg2, eflags)
    *edi = temp0
    int32_t esi = __outsd(arg2, *arg5, arg5, eflags)
    void* const* eax_10
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1
    TEB* fsbase
    bool c
    void* entry_ebx
    
    if (not(c))
        *arg1 += arg1.b
        *(entry_ebx + 0x7de8fc45) += arg3.b
        *arg1 |= arg1
        *(entry_ebx - 0x6f76f3ab) += arg3.b
        esp_1 = arg1
        eax_10 = &__return_addr
        __return_addr.b += &__return_addr
        *(entry_ebx + 0x60e8fc45) += arg3.b
        __return_addr |= &__return_addr
        *(arg3 - 0x3fcc87a8) += arg3.b
    else
        *arg1 += arg1.b
        *(arg4 - 0x75) += arg2.b
        arg1.b = __in_al_dx(arg2, eflags)
        void* var_14_1 = entry_ebx
        int32_t var_18_1 = esi
        uint8_t* var_1c_1 = edi
        *(arg4 - 0x10) = 0
        *(arg4 - 0xc) = arg3
        *(arg4 - 5) = arg2.b
        *(arg4 - 4) = arg1
        int32_t* ebx = *(arg4 + 8)
        sub_40422c(*(arg4 - 0xc))
        void* var_20_1 = arg4
        int32_t (* var_24_1)(void* arg1, void* arg2) = j_sub_4037f0
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        esp_1 = &ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        
        if (ebx != 0)
            sub_4128a4(ebx)
        
        sub_403e4c(sub_4b0e20(*(arg4 - 4)) + 0x8c, *(arg4 - 0xc))
        void* eax_7 = sub_4b0e20(*(arg4 - 4))
        *(eax_7 + 0x90) = *(arg4 - 5)
        void* eax_9 = sub_4b0e20(*(arg4 - 4))
        *(eax_9 + 0x94) = *(arg4 + 0xc)
        *(sub_4b0e14(*(arg4 - 4)) + 0x78) = ebx
        eax_10 = nullptr
    *(esp_1 - 4) = arg4
    *(esp_1 - 8) = j_sub_4037f0
    *(esp_1 - 0xc) = *(fsbase + eax_10)
    void* esp_4 = esp_1 - 0xc
    *(fsbase + eax_10) = esp_4
    
    while (true)
        void* eax_13 = *(arg4 - 4)
        int32_t temp1_1 = *(eax_13 + 0xf8)
        *(eax_13 + 0xf8) += 1
        
        if (add_overflow(temp1_1, 1))
            sub_403010()
            noreturn
        
        void* eax_15 = sub_4b0e20(*(arg4 - 4))
        sub_4afc9c(*(arg4 - 4), eax_15)
        *(esp_4 + 0x28) = sub_4b0e14(*(arg4 - 4))
        void* eax_20 = sub_4b0e20(*(arg4 - 4))
        void* ecx = *(esp_4 + 0x28)
        esp_4 += 0x2c
        sub_4b008c(*(arg4 - 4), eax_20, ecx)
        int32_t* ebx_1
        int32_t i
        
        do
            *(esp_4 - 4) = sub_4b0e14(*(arg4 - 4)) + 0x70
            *(esp_4 - 8) = 0xffffffff
            *(esp_4 - 0xc) = arg4 - 0x10
            (*(**(arg4 - 4) + 0x70))()
            sub_403e4c(*(esp_4 - 4), *(arg4 - 0x10))
            void* ebp = sub_4b16d0(*(*(arg4 - 4) + 0x108))
            *(esp_4 - 4) = sub_4b0e14(*(ebp - 4))
            int32_t eax_33 = sub_4b0e20(*(ebp - 4))
            ebx_1 = sub_4b06c8(*(ebp - 4), eax_33, *(esp_4 - 4))
            i, arg4 = sub_4b1160(sub_4b0e14(*(ebp - 4)))
        while (i == 0x64)
        void* eax_39
        int32_t edx_8
        eax_39, edx_8 = sub_4b19b0(*(*(arg4 - 4) + 0x108))
        
        switch (eax_39 & 0x7f)
            case nullptr
                if (ebx_1 == 0)
                    continue
                else
                    sub_4128b4(ebx_1)
                    (**ebx_1)()
                    continue
            case 1
                break
            case 2
                edx_8.b = 1
                sub_40b4b0(0x4988ec, edx_8, "Undefined situation")
                sub_403828()
                noreturn
            case 3
                void* eax_46 = sub_4b0e14(*(arg4 - 4))
                sub_4afaf8(*(arg4 - 4), eax_46)
                
                if (ebx_1 == 0)
                    continue
                else
                    sub_4128b4(ebx_1)
                    (**ebx_1)()
                    continue
            case 4
                void* eax_41 = *(arg4 - 4)
                int32_t temp2_1 = *(eax_41 + 0xf8)
                *(eax_41 + 0xf8) -= 1
                
                if (add_overflow(temp2_1, 0xffffffff))
                    sub_403010()
                    noreturn
                
                sub_403e4c(sub_4b0e20(*(arg4 - 4)) + 0x8c, *(arg4 - 0xc))
                continue
    
    *(esp_4 + 8)
    fsbase->NtTib.ExceptionList = *esp_4
    *(esp_4 + 8) = sub_4b0662
    char result
    void* ebp_1
    result, ebp_1 = sub_4b0fd8(sub_4b0e14(*(arg4 - 4)))
    
    if (result != 0)
        return result
    
    return (*(**(ebp_1 - 4) + 0x58))()
}
