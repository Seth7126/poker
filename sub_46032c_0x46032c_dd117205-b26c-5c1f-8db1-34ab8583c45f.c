// ============================================================
// 函数名称: sub_46032c
// 虚拟地址: 0x46032c
// WARP GUID: dd117205-b26c-5c1f-8db1-34ab8583c45f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_460570, sub_4668d0, sub_45f460, sub_4653e8
// ============================================================

void* __convention("regparm")sub_46032c(void* arg1)
{
    // 第一条实际指令: void* result = (**(arg1 + 4))()
    void* result = (**(arg1 + 4))()
    *(result + 0x111) = 0
    return result
}
