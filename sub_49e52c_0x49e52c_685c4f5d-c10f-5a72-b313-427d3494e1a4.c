// ============================================================
// 函数名称: sub_49e52c
// 虚拟地址: 0x49e52c
// WARP GUID: 685c4f5d-c10f-5a72-b313-427d3494e1a4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_49e3f8, sub_404078, sub_49dd18, sub_49d4fc, sub_403df8
// [被调用的父级函数]: sub_4a1b34, sub_4ad544, sub_4ae620
// ============================================================

void** __convention("regparm")sub_49e52c(char* arg1, long double arg2 @ st0, long double arg3 @ st1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi
    int32_t edi
    sub_49d4fc(&var_8, esi, edi, arg2, arg3)
    double var_14 = fconvert.d(arg2)
    int16_t top = 1
    
    if (sub_404078(var_8) s>= 5)
        sub_49e3f8(var_8, arg3)
        double var_1c_1 = fconvert.d(arg3)
        top = 2
    else
        int64_t var_1c
        var_1c.d = 0
        var_1c:4.d = 0
    
    unimplemented  {fld st0, qword [ebp-0x18]}
    long double temp0 = fconvert.t(0f)
    unimplemented  {fcomp st0, dword [0x49e5d0]} f- temp0
    bool c0 = unimplemented  {fcomp st0, dword [0x49e5d0]} f< temp0
    bool c2 = is_unordered.t(unimplemented  {fcomp st0, dword [0x49e5d0]}, temp0)
    bool c3 = unimplemented  {fcomp st0, dword [0x49e5d0]} f== temp0
    unimplemented  {fcomp st0, dword [0x49e5d0]}
    
    if (not(test_bit(
            ((c0 ? 1 : 0) << 8 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | (top & 7) << 0xb):1.b, 0)))
        unimplemented  {fld st0, qword [ebp-0x10]}
        unimplemented  {fsub st0, qword [ebp-0x18]}
        double var_14_2 = fconvert.d(unimplemented  {fstp qword [ebp-0x10], st0})
        unimplemented  {fstp qword [ebp-0x10], st0}
    else
        unimplemented  {fld st0, qword [ebp-0x18]}
        unimplemented  {fabs }
        unimplemented  {fadd qword [ebp-0x10]}
        double var_14_1 = fconvert.d(unimplemented  {fstp qword [ebp-0x10], st0})
        unimplemented  {fstp qword [ebp-0x10], st0}
    
    sub_49dd18()
    unimplemented  {fadd qword [ebp-0x10]}
    double var_14_3 = fconvert.d(unimplemented  {fstp qword [ebp-0x10], st0})
    unimplemented  {fstp qword [ebp-0x10], st0}
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_49e5c9
    void** result = &var_8
    sub_403df8(result)
    return result
}
