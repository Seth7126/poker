// ============================================================
// 函数名称: sub_49ee10
// 虚拟地址: 0x49ee10
// WARP GUID: 3c57bffc-66a3-51b0-80d6-a31153827629
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402ef4, sub_404078, sub_408ad8, sub_404080, sub_403e1c, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_49f368
// ============================================================

int32_t __convention("regparm")sub_49ee10(void* arg1, char* arg2, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_74 = ebx
    int32_t esi
    int32_t var_78 = esi
    int32_t edi
    int32_t var_7c = edi
    char* var_70 = nullptr
    char* var_4c = nullptr
    void* var_48 = nullptr
    int32_t var_44
    __builtin_memcpy(&var_44, arg3, 0x20)
    int32_t* var_80 = &var_4
    int32_t (* var_84)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_10 = 1
    void** esi_2 = 1
    void** var_14 = 1
    void** edi_1 = nullptr
    char var_1d = 0x20
    char var_1e = 0
    int32_t eax_1 = sub_404078(arg1)
    void* eax_3 = sub_404078(arg2)
    sub_403df8(arg4)
    void** var_8c
    
    if (1 s<= eax_1)
        do
            enum COMPARESTRING_RESULT ebx_1
            ebx_1.b = *(arg1 + esi_2 - 1)
            enum COMPARESTRING_RESULT eax_6
            
            if (test_bit(*data_530a44, zx.d(ebx_1.b)))
                void** temp0_1 = esi_2
                esi_2 += 1
                
                if (add_overflow(temp0_1, 1))
                    sub_403010()
                    noreturn
                
                void* temp1_1 = var_10
                var_10 += 1
                
                if (add_overflow(temp1_1, 1))
                    sub_403010()
                    noreturn
            else if (ebx_1.b != *arg2)
                if (not(test_bit(var_44, zx.d(ebx_1.b))))
                    eax_6.b = ebx_1.b - 0x22
                    
                    if (ebx_1.b == 0x22)
                        if (ebx_1.b == var_1d)
                            var_1d = 0x20
                        else if (var_1d == 0x20)
                            var_1d = ebx_1.b
                else if (var_1d == 0x20)
                    edi_1 = esi_2
            else if (var_1d == 0x20)
                var_8c = &var_48
                sub_404280(eax_3, esi_2, arg1, var_8c)
                var_1e = sub_408ad8(arg2, var_48).b
                
                if (var_1e != 0)
                    if (add_overflow(eax_3, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    void** temp7_1 = esi_2
                    esi_2 += eax_3 - 1
                    
                    if (add_overflow(temp7_1, eax_3 - 1))
                        sub_403010()
                        noreturn
                    
                    edi_1 = esi_2
            
            void** temp3_1 = esi_2
            esi_2 += 1
            
            if (add_overflow(temp3_1, 1))
                sub_403010()
                noreturn
            
            void* temp4_1 = var_10
            var_10 += 1
            
            if (add_overflow(temp4_1, 1))
                sub_403010()
                noreturn
            
            eax_6.b = var_1d
            char temp6_1 = eax_6.b
            eax_6.b -= 0x22
            
            if (temp6_1 != 0x22)
                if (var_1e != 0)
                label_49ef74:
                    
                    if (add_overflow(esi_2, neg.d(edi_1)))
                        sub_403010()
                        noreturn
                    
                    var_10 = esi_2 - edi_1
                    var_8c = &var_4c
                    void* ecx_2 = edi_1 - var_14
                    
                    if (add_overflow(edi_1, neg.d(var_14)))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(ecx_2, 1))
                        sub_403010()
                        noreturn
                    
                    sub_404280(ecx_2 + 1, var_14, arg1, var_8c)
                    sub_404080(arg4, var_4c)
                    char temp12_1 = ebx_1.b
                    ebx_1.b -= 0x22
                    
                    if (temp12_1 != 0x22)
                        while (esi_2 s<= eax_1)
                            var_8c = esi_2
                            int32_t var_6c
                            __builtin_memcpy(&var_6c, &var_44, 0x20)
                            esi_2 = var_8c
                            int32_t ecx_4
                            ecx_4.b = 0x20
                            sub_402ef4(&var_6c, 0x49f084)
                            void* eax_18
                            eax_18.b = *(arg1 + esi_2 - 1)
                            
                            if (not(test_bit(var_6c, eax_18 & 0xff)))
                                break
                            
                            void** temp14_1 = esi_2
                            esi_2 += 1
                            
                            if (add_overflow(temp14_1, 1))
                                sub_403010()
                                noreturn
                    
                    if (var_1e == 0 && esi_2 s< eax_1)
                        sub_404080(arg4, arg2)
                    
                    void** temp13_1 = edi_1
                    edi_1 += 1
                    
                    if (add_overflow(temp13_1, 1))
                        sub_403010()
                        noreturn
                    
                    var_14 = edi_1
                    var_1e = 0
                else if (var_10 s> arg5 && edi_1 s> var_14)
                    goto label_49ef74
        while (esi_2 s<= eax_1)
    
    var_8c = &var_70
    sub_404280(0x7fffffff, var_14, arg1, var_8c)
    sub_404080(arg4, var_70)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_80_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_49f078
    sub_403df8(&var_70)
    return sub_403e1c(&var_4c, 2)
}
