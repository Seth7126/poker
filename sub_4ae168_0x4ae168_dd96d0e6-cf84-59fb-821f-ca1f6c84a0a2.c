// ============================================================
// 函数名称: sub_4ae168
// 虚拟地址: 0x4ae168
// WARP GUID: dd96d0e6-cf84-59fb-821f-ca1f6c84a0a2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41281c, sub_4ade4c, sub_4040c4, sub_403260, sub_404078, sub_404138, sub_4088f0, sub_4030d0, sub_404080, sub_4accf4, sub_4030a0, sub_4ade74, sub_403010, sub_404364, sub_403df8, sub_4ae620
// [被调用的父级函数]: sub_4af710
// ============================================================

int32_t __convention("regparm")sub_4ae168(void* arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_38 = ebx
    int32_t esi
    int32_t var_3c = esi
    int32_t edi
    int32_t var_40 = edi
    void* var_28 = nullptr
    int32_t var_30 = 0
    void* var_34 = nullptr
    void* var_2c = nullptr
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = nullptr
    int32_t var_c = arg2
    int32_t* var_44 = &var_4
    int32_t (* var_48)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_4ae620(arg1)
    sub_403df8(&ExceptionList_2)
    int32_t* eax_4 = sub_4ade4c(*(arg1 + 0x40), 0)
    int32_t* var_50 = &var_4
    int32_t (* var_54)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_6
    int32_t ecx
    int32_t edx_1
    eax_6, edx_1, ecx =
        (*(*eax_4 + 0x14))(ExceptionList, var_54, var_50, ExceptionList_1, var_48, var_44)
    
    if (eax_6 s<= 0)
        fsbase->NtTib.ExceptionList = arg1
        __return_addr = sub_4ae3af
        return sub_4ade74(*(arg1 + 0x40), 0)
    
    edx_1.b = 1
    int32_t* eax_8 = sub_4030a0(ecx, edx_1)
    *(eax_8 + 0x19) = 1
    sub_41281c(eax_8, 1)
    int32_t* var_c_1 = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList_2 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_2
    int32_t i_3 = (*(*eax_4 + 0x14))(ExceptionList_2, var_10, var_c_1)
    
    if (add_overflow(i_3, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i_3 - 1 s>= 0)
        int32_t i_2 = i_3
        int32_t esi_1 = 0
        int32_t i
        
        do
            (*(*eax_4 + 0xc))(arg1)
            sub_4088f0(var_2c, &var_28)
            void* eax_16 = var_28
            sub_4040c4(&var_34, *(eax_16 + 0x18), *(eax_16 + 0x14))
            sub_4088f0(var_34, &var_30)
            
            if ((*data_530000)() s> 0)
                int32_t* eax_24 = (*(*eax_4 + 0x18))()
                sub_403260(eax_24, &data_4ac790)
                int32_t eax_26 = (*(*eax_24 + 0x14))()
                int32_t j = eax_26 - 1
                
                if (add_overflow(eax_26, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (j s>= 0)
                    do
                        if (sub_404364(*(sub_4accf4(eax_24) + 0x1c), *(eax_16 + 0x14)) == 1)
                            void* edi_1 = sub_4accf4(eax_24)
                            void* eax_33
                            eax_33.b = *(edi_1 + 0x20)
                            eax_33.b &= arg3
                            
                            if ((eax_33.b != 0 || *(edi_1 + 0x20) == 0) && *(edi_1 + 0x24) != 0)
                                sub_4accf4(eax_24)
                                *(edi_1 + 0x1c)
                                (*(*eax_8 + 0x38))()
                        
                        j -= 1
                    while (j != 0xffffffff)
            
            esi_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t eax_38 = (*(*eax_8 + 0x14))(arg1)
    int32_t i_1 = eax_38 - 1
    
    if (add_overflow(eax_38, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i_1 s>= 0)
        do
            if (sub_404078(ExceptionList_2) s> 0)
                sub_404080(&ExceptionList_2, "; ")
            
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_3 = ExceptionList_2
            int32_t var_10_1 = *(sub_4accf4(eax_8) + 0x18)
            ExceptionList_2 = &data_4ae404
            int32_t var_18_2 = *(sub_4accf4(eax_8) + 0x24)
            sub_404138(&ExceptionList_2, 4)
            i_1 -= 1
        while (i_1 != 0xffffffff)
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_4ae38d
    return sub_4030d0(eax_8)
}
