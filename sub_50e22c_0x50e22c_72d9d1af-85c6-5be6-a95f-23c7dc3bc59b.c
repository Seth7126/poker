// ============================================================
// 函数名称: sub_50e22c
// 虚拟地址: 0x50e22c
// WARP GUID: 72d9d1af-85c6-5be6-a95f-23c7dc3bc59b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_48380c, sub_50e4b0, sub_4040c4, sub_50deb4, sub_50e368, sub_46910c, sub_51038c, sub_403e1c, sub_50e9c0
// [被调用的父级函数]: sub_4e6659, sub_507d3f, sub_507dbc, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_50e22c(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t var_c = 0
    int32_t var_10 = 0
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t* esi_1 = arg1
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char eax = *(esi_1 + 0x1b1f6)
    int32_t edi
    
    if (eax - 6 u< 2)
        if (esi_1[0x6c7e].b != 0)
            ebp_1, esi_1 = sub_46910c(*data_530304, "f_verlassen", &var_c)
            int32_t var_28_1 = ebp_1[-2]
            sub_4040c4(&ebp_1[-3], esi_1[0xe], "?ACTION=CLOSE&PARAM1=1")
            sub_51038c(esi_1, ebp_1[-3], 7, esi_1, edi, &ebp_1[-1], 0)
            esi_1[0x6c7e].b = 0
        
        *(esi_1 + 0x1b1f6) = 5
        sub_50e9c0(esi_1, esi_1, edi)
        esp = &var_8
    else if (eax == 5)
        *(esi_1 + 0x1b1f6) = 4
        sub_50e4b0(esi_1, 1)
    else if (eax != 0)
        sub_50e368(esi_1, 0, nullptr)
        esp = &var_8
    else
        *(esi_1 + 0x1b1f6) = 5
        sub_48380c(*data_530304, *data_530438)
        sub_50deb4(esi_1, 0, esi_1)
        int32_t edx_5
        edx_5.b = 1
        sub_50e9c0(esi_1, esi_1, edi)
        esp = &var_8
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_50e32c
    return sub_403e1c(&ebp_1[-3], 3)
}
