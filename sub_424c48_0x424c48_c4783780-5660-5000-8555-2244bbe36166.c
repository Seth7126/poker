// ============================================================
// 函数名称: sub_424c48
// 虚拟地址: 0x424c48
// WARP GUID: c4783780-5660-5000-8555-2244bbe36166
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_424338
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_424c48(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_424338(arg1, arg2)
    sub_424338(arg1, arg2)
    int32_t ebx
    ebx.w = 0xffce
    int32_t eax_3 = sub_4032ac(arg1) & 0x7f
    int32_t edx_1
    edx_1.b = arg1[0x83].b
    int32_t ecx
    ecx.b = *(arg1 + 0x20e)
    int32_t edx_5
    edx_5.b = *(arg1 + 0x20d)
    int32_t result = *(eax_3 * 0xc + &data_52e6c4 + (edx_1 << 2))
        | (arg2[1] & not.d(*((ecx << 2) + &data_52e6ec))) | 4 | *((edx_5 << 2) + &data_52e6dc)
    arg2[1] = result
    return result
}
