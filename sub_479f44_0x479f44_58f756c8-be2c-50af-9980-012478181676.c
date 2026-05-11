// ============================================================
// 函数名称: sub_479f44
// 虚拟地址: 0x479f44
// WARP GUID: 58f756c8-be2c-50af-9980-012478181676
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_404078, sub_4042c0, sub_40423c, sub_404364, sub_403df8, sub_403010
// [被调用的父级函数]: sub_488509, sub_484e24
// ============================================================

void** __fastcallsub_479f44(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = arg1
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    void* i = arg1
    var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (i s> 0)
        int32_t ebx_1 = sub_404364(U"|", var_8)
        
        while (i s> 1)
            if (ebx_1 s<= 0)
                break
            
            sub_4042c0(&var_8, 1, ebx_1)
            ebx_1 = sub_404364(U"|", var_8)
            void* i_1 = i
            i -= 1
            
            if (add_overflow(i_1, 0xffffffff))
                sub_403010()
                noreturn
        
        if (ebx_1 s> 0)
            int32_t eax_5 = sub_404078(var_8)
            int32_t ecx_2 = eax_5 - ebx_1
            
            if (add_overflow(eax_5, neg.d(ebx_1)))
                sub_403010()
                noreturn
            
            if (add_overflow(ecx_2, 1))
                sub_403010()
                noreturn
            
            sub_4042c0(&var_8, ebx_1, ecx_2 + 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_479ffd
    void** result = &var_8
    sub_403df8(result)
    return result
}
