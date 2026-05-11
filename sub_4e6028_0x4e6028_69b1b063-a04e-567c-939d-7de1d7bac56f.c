// ============================================================
// 函数名称: sub_4e6028
// 虚拟地址: 0x4e6028
// WARP GUID: 69b1b063-a04e-567c-939d-7de1d7bac56f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_4040c4, sub_404078, sub_406010, sub_404188, sub_405e46, sub_4088f0, sub_405f88, sub_404080, sub_405f4c, sub_402824, sub_403e1c, sub_4062e1, sub_403fa0, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_4e63cc, sub_4e6011
// ============================================================

int32_t __convention("regparm")sub_4e6028(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_170 = ebx
    int32_t esi
    int32_t var_174 = esi
    char* var_16c = nullptr
    void* var_164 = nullptr
    void* var_168 = nullptr
    char* var_160 = nullptr
    void* var_c = nullptr
    sub_40422c(arg1)
    int32_t* var_178 = &var_4
    int32_t (* var_17c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char ebx_1 = 0
    sub_403df8(arg2 - 4)
    sub_403df8(arg2 - 8)
    sub_403df8(arg2 - 0xc)
    sub_403df8(arg2 - 0x10)
    
    if (sub_404078(*(arg2 - 0x14)) s>= 1)
        sub_404280(1, sub_404078(*(arg2 - 0x14)), *(arg2 - 0x14), arg2 - 4)
    
    if (sub_404078(*(arg2 - 0x14)) s>= 2)
        int32_t eax_22 = sub_404078(*(arg2 - 0x14))
        
        if (add_overflow(eax_22, 0xffffffff))
            sub_403010()
            noreturn
        
        sub_404280(2, eax_22 - 1, *(arg2 - 0x14), arg2 - 8)
    
    if (sub_404078(*(arg2 - 0x14)) s>= 3)
        int32_t eax_29 = sub_404078(*(arg2 - 0x14))
        
        if (add_overflow(eax_29, 0xfffffffe))
            sub_403010()
            noreturn
        
        sub_404280(3, eax_29 - 2, *(arg2 - 0x14), arg2 - 0xc)
    
    int32_t eax_32 = sub_404078(*(arg2 - 0x14))
    bool z = eax_32 == 4
    
    if (eax_32 - 4 s< 0 == add_overflow(eax_32, 0xfffffffc))
        int32_t eax_36 = sub_404078(*(arg2 - 0x14))
        z = eax_36 == 3
        
        if (add_overflow(eax_36, 0xfffffffd))
            sub_403010()
            noreturn
        
        sub_404280(4, eax_36 - 3, *(arg2 - 0x14), arg2 - 0x10)
    
    sub_404188(*(arg2 - 4), 0x4e6338)
    
    if (z)
        ebx_1 = 1
    else
        sub_404188(*(arg2 - 4), 0x4e6344)
        
        if (z)
            ebx_1 = 1
        else
            sub_404188(*(arg2 - 8), 0x4e6350)
            
            if (z)
                ebx_1 = 1
            else
                sub_404188(*(arg2 - 0xc), 0x4e635c)
                
                if (z)
                    ebx_1 = 1
                else
                    sub_404188(*(arg2 - 0xc), 0x4e6368)
                    
                    if (z)
                        ebx_1 = 1
                    else
                        sub_404188(*(arg2 - 0xc), 0x4e6374)
                        
                        if (z)
                            ebx_1 = 1
                        else
                            sub_404188(*(arg2 - 0x10), "ETTE")
                            
                            if (z)
                                ebx_1 = 1
                            else
                                sub_404188(*(arg2 - 0x10), "INDE")
                                
                                if (z)
                                    ebx_1 = 1
                                else
                                    sub_404188(*(arg2 - 0x10), "ELLE")
                                    
                                    if (z)
                                        ebx_1 = 1
    
    if (ebx_1 == 0)
        sub_4040c4(&var_160, *(*(*(arg2 + 8) - 4) + 0xa64), "\data\help\namecheck.txt")
        void var_15c
        sub_405e46(&var_15c, var_160)
        sub_402824(sub_4062e1())
        sub_403df8(&var_c)
        
        while (true)
            uint32_t eax_72 = sub_405f88(&var_15c)
            sub_402824(eax_72)
            
            if (eax_72.b != 0)
                break
            
            if (ebx_1 != 0)
                break
            
            uint8_t var_d
            void* eax_64
            int32_t edx_12
            eax_64, edx_12 = sub_406010(&var_15c, &var_d)
            sub_402824(eax_64)
            uint8_t temp4_1 = var_d
            
            if (temp4_1 != 0x23)
                edx_12.b = var_d
                sub_403fa0()
                sub_404080(&var_c, var_16c)
            else
                sub_4088f0(var_c, &var_164)
                void* eax_66 = var_164
                sub_4088f0(arg1, &var_168)
                sub_404188(eax_66, var_168)
                
                if (temp4_1 == 0x23)
                    ebx_1 = 1
                
                sub_403df8(&var_c)
        
        sub_402824(sub_405f4c(&var_15c))
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_178_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_4e6328
    sub_403e1c(&var_16c, 4)
    return sub_403e1c(&var_c, 2)
}
