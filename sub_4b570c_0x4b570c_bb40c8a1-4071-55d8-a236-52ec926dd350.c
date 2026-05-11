// ============================================================
// 函数名称: sub_4b570c
// 虚拟地址: 0x4b570c
// WARP GUID: bb40c8a1-4071-55d8-a236-52ec926dd350
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: gethostbyaddr, inet_addr
// [内部子函数调用]: sub_40423c, sub_403fb0, sub_403df8, sub_40422c
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

void** __convention("regparm")sub_4b570c(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    void* var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_14 = inet_addr(sub_40423c(var_8), ExceptionList, var_28, var_24)
    int32_t var_c = 2
    int32_t var_10 = 4
    var_14 = &var_14
    int32_t* eax_4
    int32_t ecx
    eax_4, ecx = gethostbyaddr(var_14, var_10, var_c)
    
    if (eax_4 == 0)
        sub_403df8(arg2)
    else
        sub_403fb0(ecx, *eax_4)
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4b5782
    void** result = &var_8
    sub_403df8(result)
    return result
}
