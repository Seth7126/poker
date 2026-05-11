// ============================================================
// 函数名称: sub_42cd0f
// 虚拟地址: 0x42cd0f
// WARP GUID: 83c2d4db-4ad6-56c5-a887-8c5423c5924a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42cb24
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42cd0f(char* arg1, void* arg2)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    (*(*arg1 - 0x10))()
    int32_t ecx_1
    ecx_1.b = 2
    return sub_42cb24(ecx_1, arg2, arg1, 0)
}
