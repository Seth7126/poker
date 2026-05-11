// ============================================================
// 函数名称: sub_50f7af
// 虚拟地址: 0x50f7af
// WARP GUID: c6a2eb0a-d667-5ad3-9bde-f65af8d07bd1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_50f7b8
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_50f7af(char* arg1, int32_t* arg2, char arg3, void* arg4 @ edi)
{
    // 第一条实际指令: *arg2 += 1
    *arg2 += 1
    *arg1 += arg1.b
    *(arg4 + 0x4b) += arg3
    *arg1 += arg1.b
    int32_t esi
    return sub_50f7b8(arg1, arg2, esi, arg4) __tailcall
}
