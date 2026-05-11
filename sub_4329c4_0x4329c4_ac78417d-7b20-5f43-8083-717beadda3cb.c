// ============================================================
// 函数名称: sub_4329c4
// 虚拟地址: 0x4329c4
// WARP GUID: ac78417d-7b20-5f43-8083-717beadda3cb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_419794, sub_419bc0
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4329c4(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    
    if (*(arg2 + 4) == 0)
        return 
    
    sub_419794(arg1[0x48])
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_419bc0(arg1[0x48], *(arg2 + 4))
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0x84))(ExceptionList, var_20, var_1c, ExceptionList_1, var_14, var_10)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_432a43
    sub_419bc0(arg1[0x48], 0)
}
