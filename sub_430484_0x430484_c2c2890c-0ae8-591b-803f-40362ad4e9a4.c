// ============================================================
// 函数名称: sub_430484
// 虚拟地址: 0x430484
// WARP GUID: c2c2890c-0ae8-591b-803f-40362ad4e9a4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b9bc, sub_440ee0
// [被调用的父级函数]: sub_4303b8
// ============================================================

void*sub_430484(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (sub_440ee0(arg1[-1]) != 0)
    if (sub_440ee0(arg1[-1]) != 0)
        sub_42b9bc()
    
    void* result = arg1[-2]
    *(result + 0xc) = 1
    *arg1
    return result
}
