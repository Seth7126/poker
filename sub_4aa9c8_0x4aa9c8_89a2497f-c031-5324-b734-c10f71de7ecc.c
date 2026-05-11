// ============================================================
// 函数名称: sub_4aa9c8
// 虚拟地址: 0x4aa9c8
// WARP GUID: 89a2497f-c031-5324-b734-c10f71de7ecc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a41b0, sub_4aa948, sub_41078c, sub_493fc0, sub_4a543c
// [被调用的父级函数]: sub_4ab3e8
// ============================================================

int32_tsub_4aa9c8()
{
    // 第一条实际指令: if (sub_4a41b0() == 0)
    if (sub_4a41b0() == 0)
        return 0
    
    sub_4a543c()
    (*data_5304d4)()
    int32_t eax_5
    int32_t edx_1
    eax_5, edx_1 = (*data_5305a4)()
    int32_t result
    result.b = eax_5 s> 0
    edx_1.b = 1
    int32_t* eax_6
    int32_t edx_2
    eax_6, edx_2 = sub_493fc0(sub_493cfc+0x1d4, edx_1)
    data_5325e4 = eax_6
    edx_2.b = 1
    int32_t* eax_7
    int32_t edx_3
    eax_7, edx_3 = sub_493fc0(sub_493cfc+0x1d4, edx_2)
    data_5325e8 = eax_7
    edx_3.b = 1
    int32_t* eax_8
    int32_t edx_4
    eax_8, edx_4 = sub_493fc0(sub_493cfc+0x1d4, edx_3)
    data_5325ec = eax_8
    edx_4.b = 1
    data_5325f0 = sub_41078c(sub_40eacb+0x141, edx_4)
    (*data_530180)(sub_4aa8dc)
    sub_4aa948()
    (*data_530534)(sub_4aa9bc)
    return result
}
