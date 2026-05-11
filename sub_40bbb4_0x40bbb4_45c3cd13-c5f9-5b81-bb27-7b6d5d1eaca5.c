// ============================================================
// 函数名称: sub_40bbb4
// 虚拟地址: 0x40bbb4
// WARP GUID: 45c3cd13-c5f9-5b81-bb27-7b6d5d1eaca5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405ae8, sub_40b4b0, sub_403e1c
// [被调用的父级函数]: sub_40da04
// ============================================================

int32_tsub_40bbb4()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    char* var_c = nullptr
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_405ae8(data_530158, &var_8)
    int32_t edx_1
    edx_1.b = 1
    data_531600 = sub_40b4b0(sub_407df4+0x48, edx_1, var_8)
    sub_405ae8(data_5305d4, &var_c)
    int32_t edx_3
    edx_3.b = 1
    data_531604 = sub_40b4b0(sub_407f00+0x3c4, edx_3, var_c)
    *data_52ff78 = 0x40b730
    *data_5302b0 = sub_40bba4
    *data_530118 = 0x407d24
    *data_530270 = sub_40b8f8
    *data_5302d4 = sub_40bad8
    *data_53064c = sub_40b830
    *data_52ff44 = sub_40b84c
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_40bc7c
    return sub_403e1c(&var_c, 2)
}
