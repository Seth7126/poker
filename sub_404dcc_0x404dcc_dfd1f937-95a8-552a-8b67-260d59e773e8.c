// ============================================================
// 函数名称: sub_404dcc
// 虚拟地址: 0x404dcc
// WARP GUID: dfd1f937-95a8-552a-8b67-260d59e773e8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4050f0, sub_4050e8, sub_404e50
// [被调用的父级函数]: sub_404e50, sub_404e38
// ============================================================

int16_t* __convention("regparm")sub_404dcc(int16_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    int32_t* var_24 = arg3
    int16_t var_14
    __builtin_memcpy(&var_14, arg2, 0x10)
    enum VARENUM ecx = var_24
    sub_4050f0(&var_14)
    var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_5313ec(ExceptionList, var_28, var_24)
    sub_404e50(arg1, &var_14, ecx)
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_404e2f
    int16_t* result = &var_14
    sub_4050e8(result)
    return result
}
