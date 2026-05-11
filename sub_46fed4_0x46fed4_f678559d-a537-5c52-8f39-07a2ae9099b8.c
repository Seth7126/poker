// ============================================================
// 函数名称: sub_46fed4
// 虚拟地址: 0x46fed4
// WARP GUID: f678559d-a537-5c52-8f39-07a2ae9099b8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_404078, sub_404080, sub_408e80, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_47d208, sub_46e24c
// ============================================================

void** __fastcallsub_46fed4(float* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t edi
    int32_t var_28 = edi
    char* var_18 = nullptr
    void* var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    while (sub_404078(var_8) s< 8)
        sub_404080(&var_8, U"0")
    
    int32_t i = 1
    float* ebx_1 = arg1
    
    do
        int32_t edx = i * 2
        bool o_1 = unimplemented  {imul edx, esi, 0x2}
        
        if (o_1)
            sub_403010()
            noreturn
        
        if (add_overflow(edx, 0xffffffff))
            sub_403010()
            noreturn
        
        sub_404280(2, edx - 1, var_8, &var_18)
        *ebx_1 = fconvert.s(fconvert.t(fconvert.d(float.t(sub_408e80(var_18)) / fconvert.t(99f))))
        i += 1
        ebx_1 = &ebx_1[1]
    while (i != 5)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_2c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_46ff91
    sub_403df8(&var_18)
    void** result = &var_8
    sub_403df8(result)
    return result
}
