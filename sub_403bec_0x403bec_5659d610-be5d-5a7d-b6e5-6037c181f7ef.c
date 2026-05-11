// ============================================================
// 函数名称: sub_403bec
// 虚拟地址: 0x403bec
// WARP GUID: 5659d610-be5d-5a7d-b6e5-6037c181f7ef
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_403c20
// ============================================================

int32_tsub_403bec()
{
    // 第一条实际指令: data_5314bc
    data_5314bc
    int32_t* ebp = data_5314b8
    int32_t var_4 = data_5314c0
    int32_t var_8 = data_5314c4
    __builtin_memcpy(&data_5314a4, data_5314a4, 0x2c)
    int32_t temp0 = data_531038
    data_531038 = 0
    int32_t eax_1 = neg.d(temp0)
    *ebp
    return sbb.d(eax_1, eax_1, temp0 != 0) + 1
}
