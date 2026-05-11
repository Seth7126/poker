// ============================================================
// 函数名称: sub_496f54
// 虚拟地址: 0x496f54
// WARP GUID: 42f12cf2-0a3e-5386-83c1-da29b2581592
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: sub_4970c0
// ============================================================

int32_t __convention("regparm")sub_496f54(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    ecx.b = 6
    int32_t ebx
    ebx.w = 0xffff
    return sub_4032ac(*(arg1 + 0x34), *(arg1 + 0x30), ecx)
}
