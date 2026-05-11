// ============================================================
// 函数名称: sub_417fbc
// 虚拟地址: 0x417fbc
// WARP GUID: bd22faa3-257f-5e73-a359-955ec5f19c99
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteObject
// [内部子函数调用]: sub_417d2c, sub_417d38
// [被调用的父级函数]: sub_418028
// ============================================================

int32_t __convention("regparm")sub_417fbc(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    sub_417d2c(arg1)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    for (int32_t* i = *(arg1 + 4); i != 0; i = *i)
        HGDIOBJ ho = i[2]
        
        if (ho != 0 && i[5] s< 0)
            DeleteObject(ho)
            i[2] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_418022
    return sub_417d38(arg1)
}
