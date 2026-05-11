// ============================================================
// 函数名称: sub_435eac
// 虚拟地址: 0x435eac
// WARP GUID: 19f8e452-cf14-5ce1-adab-89511e7d72cd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCurrentThreadId, GetCurrentProcessId, GlobalAddAtomA
// [内部子函数调用]: sub_435ac4, sub_447f54, sub_409a78, sub_446fc8, sub_40ff80, sub_41078c, sub_4498a0, sub_440bd0, sub_4358ec
// [被调用的父级函数]: sub_43600c
// ============================================================

int32_tsub_435eac()
{
    // 第一条实际指令: uint32_t var_18 = GetCurrentProcessId()
    uint32_t var_18 = GetCurrentProcessId()
    char var_14 = 0
    void string
    sub_409a78(&var_18, sub_435f97+1, &string, 0)
    data_53175c = GlobalAddAtomA(&string)
    int32_t var_10 = data_5314dc
    char var_c = 0
    uint32_t var_8 = GetCurrentThreadId()
    char var_4 = 0
    sub_409a78(&var_10, "ControlOfs%.8X%.8X", &string, 1)
    uint16_t eax_6
    int32_t edx
    eax_6, edx = GlobalAddAtomA(&string)
    data_53175e = eax_6
    edx.b = 1
    data_531790 = sub_41078c(sub_40eacb+0x141, edx)
    sub_435ac4()
    int32_t edx_1
    edx_1.b = 1
    int32_t* eax_8
    int32_t edx_2
    eax_8, edx_2 = sub_4358ec(sub_428819+0xa3, edx_1)
    data_531750 = eax_8
    edx_2.b = 1
    *data_530a18 = sub_446fc8(sub_440678+0xa0, edx_2)
    int32_t** edx_3
    edx_3.b = 1
    *data_530660 = sub_447f54(&data_4407f0, edx_3)
    int32_t** edx_4
    edx_4.b = 1
    sub_4498a0(*data_530660, edx_4.b)
    return sub_40ff80(sub_426d10, sub_428b80, 0x428b70)
}
