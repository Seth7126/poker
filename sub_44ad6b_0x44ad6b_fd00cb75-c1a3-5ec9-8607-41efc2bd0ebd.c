// ============================================================
// 函数名称: sub_44ad6b
// 虚拟地址: 0x44ad6b
// WARP GUID: fd00cb75-c1a3-5ec9-8607-41efc2bd0ebd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_44ad6b(int32_t arg1, int16_t arg2, int32_t arg3 @ edi)
{
    // 第一条实际指令: void* result
    void* result
    result:1.b = (arg1 - 1):1.b * 2
    *(arg3 * 5) += result:1.b
    *(result + 0x500044c2) += arg2:1.b
    return result
}
