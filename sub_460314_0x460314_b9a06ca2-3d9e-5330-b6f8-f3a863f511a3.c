// ============================================================
// 函数名称: sub_460314
// 虚拟地址: 0x460314
// WARP GUID: b9a06ca2-3d9e-5330-b6f8-f3a863f511a3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45f780, sub_460458
// ============================================================

void* __convention("regparm")sub_460314(void* arg1)
{
    // 第一条实际指令: void* result = (**(arg1 + 4))()
    void* result = (**(arg1 + 4))()
    *(result + 0x80) = 0
    return result
}
