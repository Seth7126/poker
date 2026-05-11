// ============================================================
// 函数名称: sub_4a2b90
// 虚拟地址: 0x4a2b90
// WARP GUID: 76a172a5-66cb-537d-9d04-d4d1463b022a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49f520, sub_403e4c, sub_49f1c0, sub_4a1b34, sub_403e1c, sub_49df54, sub_408e80
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a2b90(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_20
    __builtin_memset(&var_20, 0, 0x1c)
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi_1 = *(arg1 + 8)
    sub_49f520(esi_1, "Location")
    char* var_c
    sub_403e4c(arg1 + 0x50, var_c)
    sub_49f520(esi_1, "Server")
    char* var_10
    sub_403e4c(arg1 + 0x54, var_10)
    sub_49f520(esi_1, "Proxy-Connection")
    char* var_14
    sub_403e4c(arg1 + 0x58, var_14)
    sub_49f520(esi_1, "Content-Range")
    int32_t var_8
    
    if (var_8 == 0)
        *(arg1 + 0x20) = 0
        *(arg1 + 0x1c) = 0
    else
        int32_t ecx
        ecx.b = 1
        char* var_18
        sub_49df54(ecx, 0x4a2d34, &var_8, &var_18, 1)
        int32_t ecx_1
        ecx_1.b = 1
        char* var_1c
        sub_49df54(ecx_1, 0x4a2d40, &var_8, &var_1c, 1)
        int32_t eax_10
        int32_t ecx_2
        eax_10, ecx_2 = sub_408e80(var_1c)
        *(arg1 + 0x20) = eax_10
        ecx_2.b = 1
        sub_49df54(ecx_2, 0x4a2d4c, &var_8, &var_20, 1)
        *(arg1 + 0x1c) = sub_408e80(var_20)
    
    (*(**(arg1 + 0x60) + 0x40))()
    sub_49f1c0(esi_1, "WWW-Authenticate", *(arg1 + 0x60))
    (*(**(arg1 + 0x5c) + 0x40))()
    sub_49f1c0(esi_1, sub_4a2d6f+5, *(arg1 + 0x5c))
    int32_t edi
    long double x87_r0
    long double x87_r1
    long double x87_r2
    sub_4a1b34(arg1, esi_1, edi, x87_r0, x87_r1, x87_r2)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4a2ccc
    return sub_403e1c(&var_20, 7)
}
