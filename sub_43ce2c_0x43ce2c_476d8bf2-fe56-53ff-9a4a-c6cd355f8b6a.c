// ============================================================
// 函数名称: sub_43ce2c
// 虚拟地址: 0x43ce2c
// WARP GUID: 476d8bf2-fe56-53ff-9a4a-c6cd355f8b6a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43ccd8, sub_43ce1c, sub_43be3c, sub_43ce2c
// [被调用的父级函数]: sub_43cf80, sub_43ce2c
// ============================================================

void* const __convention("regparm")sub_43ce2c(int32_t* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: char var_5 = 1
    char var_5 = 1
    void* const var_c = *(*arg1 + 0x58)
    
    if (var_c != 0)
        var_5 = sub_43ce2c(arg3).b
    
    void* const result
    result.b = var_5
    
    if (result.b != 0)
        char temp0_1 = result.b
        result.b -= 3
        
        if (temp0_1 != 3)
            if (var_5 != 2)
            label_43ceef:
                
                if (*(*arg1 + 0x2d) == 0)
                    var_5 = 0
                else
                    int32_t __saved_ebp
                    int32_t* var_1c_2 = &__saved_ebp
                    int32_t (* var_20_1)() = j_sub_40353c
                    TEB* fsbase
                    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
                    fsbase->NtTib.ExceptionList = &ExceptionList
                    
                    if ((*(*(arg3 - 0xc) + 0x20) & 0x10) == 0)
                        sub_43be3c(*arg1)
                    
                    (*(**arg1 + 0x40))()
                    
                    if (*(arg3 - 4) == 0)
                        var_5 = 2
                    else if (*arg1 != *(arg3 - 4))
                        void* eax_18
                        eax_18.w = *(*(arg3 - 4) + 0x54)
                        
                        if (eax_18.w != *(arg3 - 6))
                            var_5 = 2
                    
                    fsbase->NtTib.ExceptionList = ExceptionList
            else
                void* eax_4
                
                if (*(arg3 - 4) != 0)
                    eax_4.w = *(*(arg3 - 4) + 0x54)
                
                if (*(arg3 - 4) != 0 && eax_4.w == *(arg3 - 6))
                label_43cecc:
                    *arg1 = sub_43ce1c(*(arg3 - 4), arg2)
                    
                    if (*arg1 != 0 && *(*arg1 + 0x58) == var_c)
                        if (arg2 == 0)
                            var_5 = 1
                        
                        goto label_43ceef
                else
                    *(arg3 - 6)
                    void* ecx
                    ecx.b = 2
                    sub_43ccd8(*(arg3 - 0xc))
                    *(arg3 - 4) = 0
                    
                    if (*(arg3 - 4) != 0)
                        goto label_43cecc
                    
                    var_5 = 3
    
    result.b = var_5
    return result
}
