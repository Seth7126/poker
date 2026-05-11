// ============================================================
// 函数名称: sub_50f300
// 虚拟地址: 0x50f300
// WARP GUID: 881df145-59f9-514d-a1b9-4ff9c7b7ebc0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_40422c, sub_4836b0, sub_403df8, sub_403010
// [被调用的父级函数]: sub_50fa27, sub_50f288, sub_50f7b8
// ============================================================

void** __fastcallsub_50f300(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = arg1
    int32_t ebx
    int32_t var_c = ebx
    var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    long double x87_r0
    sub_47ab08(*data_530304, *data_530230, 2, x87_r0, var_8)
    void* eax_4 = data_530230
    *eax_4
    bool o = unimplemented  {imul eax, dword [eax], 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    if (*(*(*data_530304 + 0xab0) + *eax_4 * 0x81c0 + 1) == 0)
        sub_4836b0(*data_530304, *data_530230)
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_50f393
    void** result = &var_8
    sub_403df8(result)
    return result
}
