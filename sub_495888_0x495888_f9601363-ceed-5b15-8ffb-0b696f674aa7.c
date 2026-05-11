// ============================================================
// 函数名称: sub_495888
// 虚拟地址: 0x495888
// WARP GUID: f9601363-ceed-5b15-8ffb-0b696f674aa7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: getpeername, inet_ntoa
// [内部子函数调用]: sub_494e64, sub_4038c8, sub_4953dc, sub_403df8, sub_4953e8, sub_403fb0
// [被调用的父级函数]: sub_4ec560
// ============================================================

int32_t __convention("regparm")sub_495888(void* arg1, int32_t* arg2)
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
    
    if (*(arg1 + 8) == 0)
        return sub_4038c8(ExceptionList, var_28)
    
    int32_t var_c = 0x10
    void var_1c
    void* ebp_1 = sub_494e64(getpeername(*(arg1 + 4), &var_1c, &var_c))
    var_c = *(ebp_1 - 0x14)
    char* eax_7
    int32_t ecx
    eax_7, ecx = inet_ntoa(var_c)
    sub_403fb0(ecx, eax_7)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_495914
    return sub_4953e8(*(ebp_1 - 4))
}
