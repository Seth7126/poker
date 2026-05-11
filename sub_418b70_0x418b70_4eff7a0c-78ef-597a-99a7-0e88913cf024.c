// ============================================================
// 函数名称: sub_418b70
// 虚拟地址: 0x418b70
// WARP GUID: 4eff7a0c-78ef-597a-99a7-0e88913cf024
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MulDiv
// [内部子函数调用]: sub_418acc
// [被调用的父级函数]: sub_42b3f4, sub_442deb, sub_4187b0
// ============================================================

int32_t __convention("regparm")sub_418b70(void* arg1)
{
    // 第一条实际指令: return neg.d(MulDiv(sub_418acc(arg1), 0x48, *(arg1 + 0x1c)))
    return neg.d(MulDiv(sub_418acc(arg1), 0x48, *(arg1 + 0x1c)))
}
