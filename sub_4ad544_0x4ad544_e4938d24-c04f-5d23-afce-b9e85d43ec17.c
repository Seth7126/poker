// ============================================================
// 函数名称: sub_4ad544
// 虚拟地址: 0x4ad544
// WARP GUID: e4938d24-c04f-5d23-afce-b9e85d43ec17
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_404078, sub_402b58, sub_49e52c, sub_40a074, sub_4acf9c, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4ad544(int32_t arg1, char* arg2, long double arg3 @ st0)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    sub_40422c(arg2)
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* ecx
    
    if (sub_404078(arg2) s> 0)
        int32_t* var_30_1 = &var_4
        int32_t (* var_34_1)() = j_sub_40353c
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        long double x87_r1
        ebp_1 = sub_49e52c(arg2, arg3, x87_r1)
        *(ebp_1 - 0x10) = fconvert.d(arg3)
        long double x87_r2
        long double st0_1 = sub_40a074(x87_r1, x87_r2)
        int32_t eax_4
        int32_t edx
        int16_t x87control
        eax_4, edx = sub_402b58(x87control, 
            (fconvert.t(*(ebp_1 - 0x10)) - st0_1) * fconvert.t(86400000f) / fconvert.t(1000f))
        void* ecx_1 = ebp_1[-1]
        *(ecx_1 + 0x30) = eax_4
        *(ecx_1 + 0x34) = edx
        ecx = var_30_1
        fsbase->NtTib.ExceptionList = ExceptionList
    
    void* ebp_2 = sub_4acf9c(ebp_1[-1], ebp_1[-2], ecx)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_4ad5ed
    sub_403df8(ebp_2 - 8)
    return ebp_2 - 8
}
