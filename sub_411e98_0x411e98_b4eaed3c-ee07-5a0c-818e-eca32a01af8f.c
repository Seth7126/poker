// ============================================================
// 函数名称: sub_411e98
// 虚拟地址: 0x411e98
// WARP GUID: b4eaed3c-ee07-5a0c-818e-eca32a01af8f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4137a0, sub_4144e0, sub_4116b4, sub_415168, sub_4115f8
// [被调用的父级函数]: sub_411668
// ============================================================

int32_t __convention("regparm")sub_411e98(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_10 = 0
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_4144e0()
    sub_4115f8(arg1)
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0x40))(ExceptionList, var_24, var_20, ExceptionList_1, var_18, var_14, var_10, arg2)
    
    while (true)
        bool eax_6
        int32_t ecx_2
        eax_6, ecx_2 = sub_4137a0(arg2)
        
        if (eax_6 != 0)
            break
        
        sub_415168(arg2, &var_10, ecx_2)
        (*(*arg1 + 0x34))(arg1)
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_411f1e
    return sub_4116b4(arg1)
}
