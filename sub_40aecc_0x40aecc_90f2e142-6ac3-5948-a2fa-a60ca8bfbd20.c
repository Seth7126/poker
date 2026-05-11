// ============================================================
// 函数名称: sub_40aecc
// 虚拟地址: 0x40aecc
// WARP GUID: 90f2e142-6ac3-5948-a2fa-a60ca8bfbd20
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_403fb0, sub_408ebc
// [被调用的父级函数]: sub_40af44
// ============================================================

int32_t*sub_40aecc(char* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx_1 = 1
    
    while (true)
        if (*((ebx_1 << 2) + &data_5315d8) == 0xffffffff)
            int32_t ecx
            *((ebx_1 << 2) + &data_5315d8) = sub_408ebc(sub_403fb0(ecx, arg1), 0)
            break
        
        if (ebx_1 == 7)
            break
        
        ebx_1 += 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1 @ esi, int32_t arg2, int32_t arg3, int32_t arg4) =
        sub_40af38
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
