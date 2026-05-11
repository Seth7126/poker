// ============================================================
// 函数名称: sub_50e368
// 虚拟地址: 0x50e368
// WARP GUID: 705f5a5c-ee5f-5587-a22d-6454dca26bf1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_48380c, sub_40422c, sub_4040c4, sub_4837d0, sub_46910c, sub_51038c, sub_403df8, sub_403e1c
// [被调用的父级函数]: sub_4e6659, sub_50dbd4, sub_50732c, sub_50e22c, sub_507dbc, sub_507d3f, sub_4e649b
// ============================================================

void* __convention("regparm")sub_50e368(int32_t* arg1, char arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t var_20
    __builtin_memset(&var_20, 0, 0x1c)
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t* esi_1 = arg1
    sub_40422c(arg3)
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(esi_1 + 0x1b1f7) = 1
    *(esi_1 + 0x1b1f6) = 1
    int32_t edi
    
    if (arg3 == 0)
        int32_t var_1c
        ebp_1, esi_1 = sub_46910c(*data_530304, "f_trennen", &var_1c)
        int32_t var_38_1 = ebp_1[-6]
        sub_4040c4(&ebp_1[-7], esi_1[0xe], "?ACTION=CLOSE")
        sub_51038c(esi_1, ebp_1[-7], 7, esi_1, edi, &ebp_1[-5], 3)
    else
        void* var_38 = arg3
        char* var_14
        sub_4040c4(&var_14, esi_1[0xe], "?ACTION=CLOSE")
        int32_t var_10
        sub_51038c(esi_1, var_14, 7, esi_1, edi, &var_10, 3)
    *(esi_1 + 0x1b1f7) = 0
    *(esi_1 + 0x1b1f6) = 0
    
    if (arg2 == 0)
        sub_48380c(*data_530304, *data_5307d8)
    else
        sub_4837d0(*data_530304, *data_5307d8)
    
    fsbase->NtTib.ExceptionList = arg3
    __return_addr = sub_50e47a
    sub_403e1c(&ebp_1[-7], 5)
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
