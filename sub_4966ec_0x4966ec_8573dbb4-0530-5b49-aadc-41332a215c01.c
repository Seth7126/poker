// ============================================================
// 函数名称: sub_4966ec
// 虚拟地址: 0x4966ec
// WARP GUID: 8573dbb4-0530-5b49-aadc-41332a215c01
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_494048, sub_410580, sub_494050
// [被调用的父级函数]: sub_496eb0
// ============================================================

int32_t __convention("regparm")sub_4966ec(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    sub_494048(*(arg1 + 0x68))
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_410580(*(arg1 + 0x64), arg2) s< 0)
        sub_4103c8(*(arg1 + 0x64), arg2)
        
        if (*(*(arg1 + 0x64) + 8) s<= *(arg1 + 0x5c))
            *(arg2 + 0x40) = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_496762
    return sub_494050(*(arg1 + 0x68))
}
