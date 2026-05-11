// ============================================================
// 函数名称: sub_50e8e4
// 虚拟地址: 0x50e8e4
// WARP GUID: 1ab37c38-7a4b-5f5b-93b5-4f71e0950032
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_51038c, sub_50da00, sub_4040c4, sub_403e1c
// [被调用的父级函数]: sub_50d82b, sub_50d838
// ============================================================

int32_t __convention("regparm")sub_50e8e4(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t var_c = 0
    char* var_10 = nullptr
    int32_t var_14 = 0
    char* var_18 = nullptr
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    arg1[0x6c7f] = GetTickCount()
    
    if (arg1[0x6c7e].b != 0 && *(arg1 + 0x1b1f6) == 6)
        ebp_1 = sub_50da00(arg1, arg2)
    else
        int32_t edi
        
        if (arg2 == 0)
            int32_t var_30_2 = 0
            sub_4040c4(&var_18, arg1[0xe], "?ACTION=IPREFRESH")
            sub_51038c(arg1, var_18, nullptr, arg1, edi, &var_14, 0)
            esp = &var_8
        else
            int32_t var_30_1 = 0
            sub_4040c4(&var_10, arg1[0xe], "?ACTION=IPREFRESH")
            sub_51038c(arg1, var_10, nullptr, arg1, edi, &var_c, 2)
            esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_50e99a
    return sub_403e1c(&ebp_1[-5], 4)
}
