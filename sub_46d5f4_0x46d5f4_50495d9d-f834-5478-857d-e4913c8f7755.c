// ============================================================
// 函数名称: sub_46d5f4
// 虚拟地址: 0x46d5f4
// WARP GUID: 50495d9d-f834-5478-857d-e4913c8f7755
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_46ce9c, sub_403010
// [被调用的父级函数]: sub_4fb834, sub_488509, sub_484e24
// ============================================================

int32_t __convention("regparm")sub_46d5f4(void* arg1, int32_t arg2, float arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_58 = ebx
    int32_t esi
    int32_t var_5c = esi
    int32_t edi
    int32_t var_60 = edi
    int32_t* var_64 = &var_4
    int32_t (* var_68)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 != 0)
        if (*(arg1 + 0xce9) == 0)
            (*data_530034)(0xde1)
        
        (*data_53036c)(0xde1, arg2)
        void var_50
        __builtin_memcpy(&var_50, arg1 + 0x1088, 0x10)
        float var_44
        (*data_530518)(0x3f8000003f800000, 0x3f800000, 
            fconvert.s(fconvert.t(var_44) * fconvert.t(arg3)))
    
    float var_14 = fconvert.s(fconvert.t(1f) / float.t(arg5) * fconvert.t(2f))
    float var_18 = fconvert.s(fconvert.t(1f) / float.t(arg4) * fconvert.t(2f))
    
    if (neg.d(arg4) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_5306a4)(0, 0, fconvert.d(float.t(neg.d(arg4)) / fconvert.t(497f)), 0, 0)
    char var_3d = 1
    int32_t var_c = 8
    int32_t eax_13 = *(arg1 + 0xdc0)
    
    if (eax_13 == 3)
        int32_t var_c_1 = 6
    else if (eax_13 == 2)
        int32_t var_c_2 = 6
    else if (eax_13 == 1)
        int32_t var_c_3 = 4
    
    float i = 1.40129846e-45f
    
    do
        if (i s<= 2 || var_3d != 0)
            int32_t eax_16 = *(arg1 + 0xdc0)
            
            if (add_overflow(eax_16, neg.d(i)))
                sub_403010()
                noreturn
            
            if (eax_16 i- i s>= 0)
                if (i != 1)
                    (*data_52ffd4)(5)
                else
                    (*data_52ffd4)(9)
                
                sub_46ce9c(1, 0xffffffff, 1, 1, 0f, 0f, &var_4)
                sub_46ce9c(0xffffffff, 1, 0xffffffff, 1, 0f, 1f, &var_4)
                sub_46ce9c(0xffffffff, 0xffffffff, 1, 0xffffffff, 1f, 1f, &var_4)
                i = 0f
                sub_46ce9c(1, 1, 0xffffffff, 0xffffffff, 1f, i, &var_4)
                
                if (i s>= 2)
                    i = 0f
                    sub_46ce9c(1, 0xffffffff, 0x64, 1, 0f, i, &var_4)
                
                (*data_530a08)()
        
        i += 1
    while (i != 4)
    
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_46d84a
    return 0
}
