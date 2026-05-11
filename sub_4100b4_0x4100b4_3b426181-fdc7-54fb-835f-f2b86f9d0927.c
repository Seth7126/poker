// ============================================================
// 函数名称: sub_4100b4
// 虚拟地址: 0x4100b4
// WARP GUID: 3b426181-fdc7-54fb-835f-f2b86f9d0927
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FindResourceA
// [内部子函数调用]: sub_40423c, sub_412ea8, sub_412a1c, sub_4030d0
// [被调用的父级函数]: sub_41023c
// ============================================================

HRSRC __convention("regparm")sub_4100b4(int32_t arg1, HMODULE arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* var_8 = arg3
    HMODULE ExceptionList_1 = arg2
    
    if (ExceptionList_1 == 0)
        ExceptionList_1 = data_5314dc
    
    PSTR lpType = 0xa
    PSTR lpName = sub_40423c(arg1)
    HMODULE ExceptionList = ExceptionList_1
    HRSRC result
    int32_t edx
    result, edx = FindResourceA(ExceptionList, lpName, lpType)
    result.b = result != 0
    
    if (result.b == 0)
        return result
    
    edx.b = 1
    int32_t* eax_1 = sub_412ea8(ExceptionList_1, edx, sub_40f424+0x48, 0xa, arg1)
    int32_t* var_18_1 = &var_4
    int32_t (* var_1c_2)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *arg3 = sub_412a1c(eax_1, *arg3)
    fsbase->NtTib.ExceptionList = eax_1
    __return_addr = &data_41012f
    return sub_4030d0(eax_1)
}
