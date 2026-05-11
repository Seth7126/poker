// ============================================================
// 函数名称: sub_5255c0
// 虚拟地址: 0x5255c0
// WARP GUID: f9e4217a-a76e-51c6-8533-7786260265e1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_525ab8, sub_51e1c0
// [被调用的父级函数]: sub_4c62e8
// ============================================================

int32_t __convention("regparm")sub_5255c0(void* arg1)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    int32_t esi
    int32_t ecx = sub_525ab8(arg1, edx, esi)
    *(arg1 + 0x10004) = 3
    *(arg1 + 0x1014c) = 2
    int32_t edi
    return sub_51e1c0(ecx, 0, esi, edi)
}
