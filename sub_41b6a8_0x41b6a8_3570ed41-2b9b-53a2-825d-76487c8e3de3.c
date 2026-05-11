// ============================================================
// 函数名称: sub_41b6a8
// 虚拟地址: 0x41b6a8
// WARP GUID: 3570ed41-2b9b-53a2-825d-76487c8e3de3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404188, sub_40401c, sub_410524, sub_40301c, sub_403df8
// [被调用的父级函数]: sub_41bda8
// ============================================================

void** __convention("regparm")sub_41b6a8(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_110 = ebx
    int32_t esi
    int32_t var_114 = esi
    int32_t edi
    int32_t var_118 = edi
    void* var_c = nullptr
    int32_t* var_11c = &var_4
    int32_t (* var_120)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i = arg1[2] - 1
    bool cond:0 = i == 0
    
    if (i s>= 0)
        do
            char var_10c[0x100]
            sub_40401c(sub_40301c(*sub_410524(arg1, i), &var_10c), &var_10c)
            sub_404188(var_c, arg2)
            
            if (cond:0)
                break
            
            i -= 1
            cond:0 = i == 0xffffffff
        while (i != 0xffffffff)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_11c_1)(int32_t* arg1 @ ebp, int32_t arg2 @ esi, int32_t arg3, int32_t arg4) =
        sub_41b72d
    void** result = &var_c
    sub_403df8(result)
    return result
}
