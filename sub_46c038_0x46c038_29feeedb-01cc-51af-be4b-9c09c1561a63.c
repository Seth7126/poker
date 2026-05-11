// ============================================================
// 函数名称: sub_46c038
// 虚拟地址: 0x46c038
// WARP GUID: 29feeedb-01cc-51af-be4b-9c09c1561a63
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_46c3d0, sub_402b4c, sub_46ba74, sub_403010
// [被调用的父级函数]: sub_488509, sub_484e24, sub_4fc3f8, sub_4fc834
// ============================================================

int32_t __convention("regparm")sub_46c038(void* arg1, int32_t arg2, char arg3, float arg4, int32_t arg5, int32_t arg6)
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
    
    if (*(arg1 + 0x10c8) != 3)
        float var_4c_1 = fconvert.s(fconvert.t(1f) / float.t(arg6) * data_46c3ac)
        float var_50_1 = fconvert.s(fconvert.t(1f) / float.t(arg5) * data_46c3ac)
        int32_t var_70_2 = 0
        int32_t var_74_2 = 0
        
        if (neg.d(arg5) == 0x80000000)
            sub_403010()
            noreturn
        
        int32_t var_7c
        var_7c.q = fconvert.d(float.t(neg.d(arg5)) / fconvert.t(497f))
        (*data_5306a4)(0, 0, var_7c)
        char eax_16
        
        if (arg5 s>= 0x64 || arg5 == 0x4d)
            if (arg3 == 0)
                eax_16 = 1
            else
                eax_16 = 0
        else if (arg5 != 0x35 || arg3 != 0)
            eax_16 = 0
        else
            eax_16 = 1
        
        int32_t var_44_1
        
        if (eax_16 == 0)
            var_44_1 = 0xd
            int32_t eax_21 = *(arg1 + 0xdc0)
            
            if (eax_21 == 3)
                var_44_1 = 9
            else if (eax_21 == 2)
                var_44_1 = 9
            else if (eax_21 == 1)
                var_44_1 = 7
        else
            var_44_1 = 0x11
            int32_t eax_18 = *(arg1 + 0xdc0)
            
            if (eax_18 == 3)
                var_44_1 = 0xd
            else if (eax_18 == 2)
                var_44_1 = 0xb
            else if (eax_18 == 1)
                var_44_1 = 7
        
        int32_t ebx_1
        
        if (eax_16 != 0)
            ebx_1 = 0
        else
            float var_4c_2 = fconvert.s(fconvert.t(1f) / float.t(arg6) * data_46c3b8)
            float var_50_2 = fconvert.s(fconvert.t(1f) / float.t(arg5) * data_46c3c4)
            ebx_1.b = 0xfe
            int32_t var_44_2 = var_44_1 - 3
            
            if (add_overflow(var_44_1, 0xfffffffd))
                sub_403010()
                noreturn
            
            if (*(arg1 + 0xdc0) == 1)
                ebx_1 = 0xffffffff
        
        for (int32_t i = 1; i != 5; i += 1)
            if (i s<= 3 || eax_16 != 0)
                int32_t eax_25 = *(arg1 + 0xdc0)
                int32_t eax_26 = eax_25 - i
                
                if (add_overflow(eax_25, neg.d(i)))
                    sub_403010()
                    noreturn
                
                int32_t edx = sx.d(ebx_1.b)
                
                if (add_overflow(eax_26, edx))
                    sub_403010()
                    noreturn
                
                if (eax_26 + edx s>= 0xffffffff)
                    if (i != 1)
                        (*data_52ffd4)(5)
                    else
                        (*data_52ffd4)(9)
                    
                    sub_46ba74(1, 0xffffffff, 1, 1, 0f, 0f, &var_4)
                    sub_46ba74(0xffffffff, 1, 0xffffffff, 1, 0f, 1f, &var_4)
                    sub_46ba74(0xffffffff, 0xffffffff, 1, 0xffffffff, 1f, 1f, &var_4)
                    sub_46ba74(1, 1, 0xffffffff, 0xffffffff, 1f, 0f, &var_4)
                    
                    if (i s>= 2)
                        sub_46ba74(1, 0xffffffff, 0x64, 1, 0f, 0f, &var_4)
                    
                    (*data_530a08)()
        
        (*data_53006c)(0xde1)
    else
        int32_t eax_2 = *(arg1 + 0x34)
        
        if (add_overflow(eax_2, 0xffffffdc))
            sub_403010()
            noreturn
        
        int32_t eax_4 = sub_402b4c(float.t(arg6))
        int32_t eax_5 = sub_402b4c(float.t(arg5))
        sub_46c3d0(*(arg1 + 0x30), 1, arg1, arg4, eax_5, eax_4, eax_2 - 0x24)
        int32_t var_70_1 = 0
        int32_t var_74_1 = 0
        
        if (neg.d(arg5) == 0x80000000)
            sub_403010()
            noreturn
        
        float var_7c_1
        var_7c_1.q = fconvert.d(float.t(neg.d(arg5)) / fconvert.t(497f))
        (*data_5306a4)(0, 0, var_7c_1)
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_46c398
    return 0
}
