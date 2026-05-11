// ============================================================
// 函数名称: sub_49f10c
// 虚拟地址: 0x49f10c
// WARP GUID: 4e3dc6ac-8b03-5978-aff2-7756eb1e01c4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404078, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_49f714
// ============================================================

int32_t __convention("regparm")sub_49f10c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = nullptr
    char* var_c = nullptr
    char* var_10 = nullptr
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (add_overflow(arg2, 1))
        sub_403010()
        noreturn
    
    if (arg2 + 1 s< (*(*arg1 + 0x14))())
        while (arg2 + 1 s< (*(*arg1 + 0x14))(var_8))
            (*(*arg1 + 0xc))()
            int32_t eax_7 = sub_404078(var_8)
            
            if (eax_7 s> 0)
                (*(*arg1 + 0xc))()
            
            if (eax_7 s<= 0 || *var_c != 0x20)
                (*(*arg1 + 0xc))()
                
                if (*var_10 != 9)
                    break
            
            (*(*arg1 + 0x44))()
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_49f1b7
    return sub_403e1c(&var_10, 3)
}
