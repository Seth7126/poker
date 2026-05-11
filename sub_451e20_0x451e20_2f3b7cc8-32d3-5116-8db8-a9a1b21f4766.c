// ============================================================
// 函数名称: sub_451e20
// 虚拟地址: 0x451e20
// WARP GUID: 2f3b7cc8-32d3-5116-8db8-a9a1b21f4766
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_404078, sub_4042c0, sub_40b454, sub_408e80, sub_403e1c, sub_404364, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_451ff4, sub_45174d
// ============================================================

void** __convention("regparm")sub_451e20(void* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    char* var_18 = nullptr
    char* var_14 = nullptr
    void* var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* var_34 = &var_4
    int32_t (* var_38)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_1 = sub_404364(U".", var_8)
    
    if (eax_1 s> 1 && eax_1 s< sub_404078(var_8))
        void* eax_4
        eax_4.b = *(var_8 + eax_1 - 2)
        eax_4.b -= 0x30
        char temp0_1 = eax_4.b
        eax_4.b -= 0xa
        
        if (temp0_1 u< 0xa)
            void* eax_5
            eax_5.b = *(var_8 + eax_1)
            eax_5.b -= 0x30
            char temp1_1 = eax_5.b
            eax_5.b -= 0xa
            
            if (temp1_1 u< 0xa)
                int32_t ebx_2 = eax_1 - 1
                
                if (add_overflow(eax_1, 0xffffffff))
                    sub_403010()
                    noreturn
                
                int32_t eax_8
                int32_t ebx_4
                
                while (true)
                    if (ebx_2 s> 0)
                        void* eax_6
                        eax_6.b = *(var_8 + ebx_2 - 1)
                        eax_6.b -= 0x30
                        char temp4_1 = eax_6.b
                        eax_6.b -= 0xa
                        
                        if (temp4_1 u< 0xa)
                            int32_t temp5_1 = ebx_2
                            ebx_2 -= 1
                            
                            if (not(add_overflow(temp5_1, 0xffffffff)))
                                continue
                            
                            sub_403010()
                            noreturn
                    
                    sub_4042c0(&var_8, 1, ebx_2)
                    eax_8 = sub_404364(U".", var_8)
                    ebx_4 = eax_8 + 1
                    break
                
                if (add_overflow(eax_8, 1))
                    sub_403010()
                    noreturn
                
                int32_t eax_13
                
                while (true)
                    if (ebx_4 s<= sub_404078(var_8))
                        void* eax_11
                        eax_11.b = *(var_8 + ebx_4 - 1)
                        eax_11.b -= 0x30
                        char temp7_1 = eax_11.b
                        eax_11.b -= 0xa
                        
                        if (temp7_1 u< 0xa)
                            int32_t temp9_1 = ebx_4
                            ebx_4 += 1
                            
                            if (not(add_overflow(temp9_1, 1)))
                                continue
                            
                            sub_403010()
                            noreturn
                    
                    sub_4042c0(&var_8, ebx_4, 0xff)
                    eax_13 = sub_404364(U".", var_8)
                    break
                
                if (add_overflow(eax_13, 0xffffffff))
                    sub_403010()
                    noreturn
                
                sub_404280(eax_13 - 1, 1, var_8, &var_14)
                *arg2 = sub_408e80(var_14)
                
                if (add_overflow(eax_13, 1))
                    sub_403010()
                    noreturn
                
                sub_404280(0xff, eax_13 + 1, var_8, &var_18)
                *arg3 = sub_408e80(var_18)
                fsbase->NtTib.ExceptionList = ExceptionList
                fsbase->NtTib.ExceptionList = ExceptionList_1
                int32_t (* var_28_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_451fe0
                sub_403e1c(&var_18, 2)
                void** result = &var_8
                sub_403df8(result)
                return result
    
    sub_40b454()
    noreturn
}
