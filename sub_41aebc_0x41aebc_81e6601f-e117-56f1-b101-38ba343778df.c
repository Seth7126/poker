// ============================================================
// 函数名称: sub_41aebc
// 虚拟地址: 0x41aebc
// WARP GUID: 81e6601f-e117-56f1-b101-38ba343778df
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetIconInfo
// [内部子函数调用]: sub_41ad7c, sub_402d00, sub_41aeb0, sub_40276c, sub_41ade8, sub_40886c
// [被调用的父级函数]: sub_41f72c
// ============================================================

int32_t __fastcallsub_41aebc(char arg1, HICON arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_5c = ebx
    int32_t esi
    int32_t var_60 = esi
    int32_t edi
    int32_t var_64 = edi
    char var_5 = arg1
    void var_2e
    sub_402d00(&var_2e, 6, 0)
    void var_58
    sub_402d00(&var_58, 0x10, 0)
    ICONINFO piconinfo
    sub_41aeb0(GetIconInfo(arg2, &piconinfo))
    int32_t* var_68_1 = &var_4
    int32_t (* var_6c_1)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t var_14
    int32_t var_c
    sub_41ad7c(&var_14, &var_c, 2)
    int32_t var_18
    int32_t var_10
    sub_41ad7c(&var_18, &var_10, 0x10)
    int32_t var_1c = 0
    int32_t var_20 = 0
    int32_t var_24 = 0
    int32_t var_28 = 0
    int32_t* var_74_2 = &var_4
    int32_t (* var_78)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_7 = sub_40886c(var_c)
    int32_t eax_9 = sub_40886c(var_14)
    int32_t var_24_1 = sub_40886c(var_10)
    int32_t var_28_1 = sub_40886c(var_18)
    void* ebp_1 = sub_41ade8(piconinfo.hbmMask, nullptr, eax_7, 2, eax_9)
    int32_t* ebx_2
    void* ebp_2
    ebx_2, ebp_2 = sub_41ade8(*(ebp_1 - 0x34), nullptr, *(ebp_1 - 0x20), 0x10, *(ebp_1 - 0x24))
    
    if (*(ebp_2 - 1) != 0)
        *(ebp_2 - 0x30) = *(ebp_2 - 0xc) + 0x16 + *(ebp_2 - 0x14) + *(ebp_2 - 0x10)
        (*(*ebx_2 + 8))()
    
    *(ebp_2 - 0x28) = 1
    *(ebp_2 - 0x26) = 1
    (*(*ebx_2 + 8))()
    void* esi_4 = *(ebp_2 - 0x20)
    int16_t edx_4
    edx_4.b = *(esi_4 + 4)
    *(ebp_2 - 0x54) = edx_4.b
    edx_4.b = *(esi_4 + 8)
    *(ebp_2 - 0x53) = edx_4.b
    *(ebp_2 - 0x52) = *(esi_4 + 0xc) * *(esi_4 + 0xe)
    *(ebp_2 - 0x4c) = *(ebp_2 - 0xc) + *(ebp_2 - 0x14) + *(ebp_2 - 0x10)
    *(ebp_2 - 0x48) = 0x16
    (*(*ebx_2 + 8))()
    *(esi_4 + 8) *= 2
    *(ebp_2 - 0x20)
    *(ebp_2 - 0xc)
    (*(*ebx_2 + 8))()
    *(ebp_2 - 0x24)
    *(ebp_2 - 0x14)
    (*(*ebx_2 + 8))()
    *(ebp_2 - 0x1c)
    *(ebp_2 - 0x10)
    (*(*ebx_2 + 8))()
    fsbase->NtTib.ExceptionList = ExceptionList
    BOOL (* var_74_3)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) =
        sub_41b08a
    *(ebp_2 - 0xc)
    sub_40276c(*(ebp_2 - 0x20))
    *(ebp_2 - 0x14)
    sub_40276c(*(ebp_2 - 0x24))
    *(ebp_2 - 8)
    sub_40276c(*(ebp_2 - 0x18))
    *(ebp_2 - 0x10)
    return sub_40276c(*(ebp_2 - 0x1c))
}
