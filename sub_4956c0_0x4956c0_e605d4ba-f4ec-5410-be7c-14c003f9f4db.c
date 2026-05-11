// ============================================================
// 函数名称: sub_4956c0
// 虚拟地址: 0x4956c0
// WARP GUID: e605d4ba-f4ec-5410-be7c-14c003f9f4db
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: getsockname, inet_ntoa
// [内部子函数调用]: sub_4038c8, sub_4953dc, sub_403df8, sub_4953e8, sub_403fb0
// [被调用的父级函数]: sub_4e6659, sub_4e649b, sub_51497c, sub_4ec560
// ============================================================

int32_t __convention("regparm")sub_4956c0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    sub_4953dc(arg1)
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg2)
    
    if (*(arg1 + 4) == 0xffffffff)
        return sub_4038c8(ExceptionList, var_28)
    
    int32_t var_c = 0x10
    void var_1c
    
    if (getsockname(*(arg1 + 4), &var_1c, &var_c) == 0)
        int32_t var_18
        var_c = var_18
        char* eax_7
        int32_t ecx_1
        eax_7, ecx_1 = inet_ntoa(var_c)
        sub_403fb0(ecx_1, eax_7)
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_495746
    return sub_4953e8(arg1)
}
