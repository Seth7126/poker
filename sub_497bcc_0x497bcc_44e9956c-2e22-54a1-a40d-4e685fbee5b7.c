// ============================================================
// 函数名称: sub_497bcc
// 虚拟地址: 0x497bcc
// WARP GUID: 44e9956c-2e22-54a1-a40d-4e685fbee5b7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4040c4, sub_404138, sub_408e1c, sub_404080, sub_40401c, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_497dd4
// ============================================================

int32_t __convention("regparm")sub_497bcc(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_18
    __builtin_memset(&var_18, 0, 0x14)
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_c
    sub_408e1c(*(arg1 + 0x3200), &var_c)
    int32_t ecx = sub_4040c4(arg1 + 0x31fc, var_c, U"|")
    int32_t i_2 = *(arg1 + 0x31f8)
    
    if (add_overflow(i_2, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i_2 - 1 s>= 0)
        int32_t i_1 = i_2
        int32_t esi_1 = 0
        int32_t i
        
        do
            bool o_1 = unimplemented  {imul eax, esi, 0x1f}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(arg1 + esi_1 * 0x7c + 0x128) s<= 0x40)
                bool o_4 = unimplemented  {imul edx, esi, 0x1f}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                sub_40401c(ecx, arg1 + esi_1 * 0x7c + 0x130)
                ecx = sub_404080(arg1 + 0x31fc, var_18)
            else
                int32_t var_34_1 = *(arg1 + 0x31fc)
                bool o_2 = unimplemented  {imul edx, esi, 0x1f}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                int32_t ecx_1 = sub_40401c(ecx, arg1 + esi_1 * 0x7c + 0x130)
                int32_t var_10
                int32_t var_38_1 = var_10
                bool o_3 = unimplemented  {imul edx, esi, 0x1f}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                sub_40401c(ecx_1, arg1 + esi_1 * 0x7c + 0x171)
                int32_t var_14
                int32_t var_3c_1 = var_14
                ecx = sub_404138(arg1 + 0x31fc, 3)
            
            int32_t eax_5 = *(arg1 + 0x31f8)
            
            if (add_overflow(eax_5, 0xffffffff))
                sub_403010()
                noreturn
            
            if (esi_1 s< eax_5 - 1)
                ecx = sub_404080(arg1 + 0x31fc, sub_497d17+5)
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_28_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_497cfe
    return sub_403e1c(&var_18, 4)
}
