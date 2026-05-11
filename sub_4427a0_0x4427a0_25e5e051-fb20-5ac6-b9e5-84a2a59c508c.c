// ============================================================
// 函数名称: sub_4427a0
// 虚拟地址: 0x4427a0
// WARP GUID: 25e5e051-fb20-5ac6-b9e5-84a2a59c508c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_441b74, sub_431bcc, sub_4030d0, sub_40cc98, sub_403430, sub_4472cc, sub_444d94, sub_40ca2c, sub_40c9e0
// [被调用的父级函数]: sub_47ba07
// ============================================================

int32_t __convention("regparm")sub_4427a0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    sub_403430(arg1, arg2)
    char var_9 = arg2.b
    int32_t* var_8 = arg1
    
    if ((var_8[8].b & 8) == 0)
        sub_40c9e0(*data_530a10)
    
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (var_8[0x87].b != 0)
        (*(*var_8 + 0xc4))()
    
    sub_444d94(var_8, 0)
    
    if (sub_431bcc(var_8) != 0)
        (*(*var_8 + 0x9c))()
        esp = &var_8
    
    sub_4472cc(data_5317dc)
    sub_4030d0(var_8[0x88])
    sub_4030d0(var_8[0x8a])
    sub_40cc98(&var_8[0xb2])
    int32_t edx_3
    edx_3.b = var_9
    edx_3.b &= 0xfc
    sub_441b74(var_8, edx_3)
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_442871
    return sub_40ca2c(*data_530a10)
}
