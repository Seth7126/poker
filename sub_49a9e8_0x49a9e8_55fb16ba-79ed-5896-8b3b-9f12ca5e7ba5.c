// ============================================================
// 函数名称: sub_49a9e8
// 虚拟地址: 0x49a9e8
// WARP GUID: 55fb16ba-79ed-5896-8b3b-9f12ca5e7ba5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d00
// [被调用的父级函数]: sub_49aa3c, sub_49a9b7
// ============================================================

int32_t __convention("regparm")sub_49a9e8(void* arg1)
{
    // 第一条实际指令: int32_t result = sub_402d00(arg1, 0x10, 0)
    int32_t result = sub_402d00(arg1, 0x10, 0)
    *(arg1 + 0xf) = 1
    return result
}
