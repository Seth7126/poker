// ============================================================
// 函数名称: sub_442d98
// 虚拟地址: 0x442d98
// WARP GUID: 20755e30-c22d-5bae-b5ab-53f60912c478
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4157a8, sub_442dd0
// [被调用的父级函数]: sub_442cad
// ============================================================

int32_t __convention("regparm")sub_442d98(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t ecx
    eax_1, ecx = sub_442dd0(arg1)
    return sub_4157a8(arg2, eax_1, ecx)
}
