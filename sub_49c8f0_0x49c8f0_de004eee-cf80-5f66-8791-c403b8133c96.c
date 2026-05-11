// ============================================================
// 函数名称: sub_49c8f0
// 虚拟地址: 0x49c8f0
// WARP GUID: de004eee-cf80-5f66-8791-c403b8133c96
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_49c8f0()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* var_8 = &var_4
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp0 = data_5324cc
    data_5324cc += 1
    
    if (temp0 == 0xffffffff && data_52fb50 != 0)
        (*data_530490)()
        esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_49c930
    return 0
}
