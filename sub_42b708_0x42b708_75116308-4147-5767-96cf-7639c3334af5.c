// ============================================================
// 函数名称: sub_42b708
// 虚拟地址: 0x42b708
// WARP GUID: 75116308-4147-5767-96cf-7639c3334af5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42bf7c, sub_42c2ec, sub_433b34
// ============================================================

int32_t __convention("regparm")sub_42b708(void* arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0x98)
    int32_t result = *(arg1 + 0x98)
    
    if (result s<= 0)
        return *(arg1 + 0x3c)
    
    return result
}
