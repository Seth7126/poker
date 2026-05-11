// ============================================================
// 函数名称: sub_4b4efc
// 虚拟地址: 0x4b4efc
// WARP GUID: ceda2d9f-3925-500b-adb2-d49494a47850
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b4e2c, sub_415df8, sub_42b7a8, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b4efc(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    void* var_c = nullptr
    int32_t ebx
    int32_t var_10 = ebx
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    arg1[0x91] = arg2
    
    if (arg2 != 0)
        sub_415df8(arg2, arg1)
        sub_4b4e2c(arg1, &var_8)
        
        if (var_8 == 0)
            ebp_1 = sub_42b7a8(arg1[0x91], arg1[0x8f])
            esp = &var_8
        else
            sub_4b4e2c(arg1, &var_c)
            ebp_1 = sub_42b7a8(arg1[0x91], var_c)
            esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4b4f84
    return sub_403e1c(&ebp_1[-2], 2)
}
