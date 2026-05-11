// ============================================================
// 函数名称: sub_514c48
// 虚拟地址: 0x514c48
// WARP GUID: 9b19222a-4220-54ff-9e13-5ce3baa91e6a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4973e0, sub_50b624
// [被调用的父级函数]: sub_4e6659, sub_516c3c, sub_514ef8, sub_508844, sub_4c93fc, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_514c48(void* arg1)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    *(arg1 + 0x54) = 0
    *(arg1 + 0x1c8) = 0
    *(arg1 + 0x94)
    sub_4973e0()
    int32_t edx
    edx.b = 1
    (*(**(arg1 + 0x94) - 4))()
    *(arg1 + 0x345) = 0
    int32_t edi
    sub_50b624(3, nullptr, arg1, edi)
    return entry_result
}
