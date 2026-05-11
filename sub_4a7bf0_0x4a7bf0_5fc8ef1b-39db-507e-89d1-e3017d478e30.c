// ============================================================
// 函数名称: sub_4a7bf0
// 虚拟地址: 0x4a7bf0
// WARP GUID: 5fc8ef1b-39db-507e-89d1-e3017d478e30
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408b34, sub_403df8, sub_404078, sub_403010
// [被调用的父级函数]: sub_4a8988
// ============================================================

void** __convention("regparm")sub_4a7bf0(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    void* var_10 = nullptr
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg3)
    int32_t esi_1 = 0
    
    while (true)
        if (sub_404078(*arg3) != 0 || esi_1 s>= arg2)
            fsbase->NtTib.ExceptionList = ExceptionList
            int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4a7c76
            void** result = &var_10
            sub_403df8(result)
            return result
        
        int32_t temp0_1 = esi_1
        esi_1 += 1
        
        if (add_overflow(temp0_1, 1))
            break
        
        (*(*arg1 + 0x70))(&var_10, 0xffffffff)
        sub_408b34(var_10, arg3)
    
    sub_403010()
    noreturn
}
