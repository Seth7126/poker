// ============================================================
// 函数名称: sub_46ef88
// 虚拟地址: 0x46ef88
// WARP GUID: 8ac029d1-0905-56db-bce7-7d73e53b3329
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_404078, sub_40634c, sub_404248, sub_402824, sub_403df8
// [被调用的父级函数]: sub_46f000
// ============================================================

void** __convention("regparm")sub_46ef88(void* arg1, int32_t arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i_1 = sub_404078(var_8)
    
    if (i_1 s> 0)
        int32_t esi_1 = 1
        int32_t i
        
        do
            sub_40634c(arg4 - 0x14c, sub_404248(&var_8) + esi_1 - 1)
            sub_402824(arg4 - 0x14c)
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_46eff9
    void** result = &var_8
    sub_403df8(result)
    return result
}
