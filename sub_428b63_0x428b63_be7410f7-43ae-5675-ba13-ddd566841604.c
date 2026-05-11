// ============================================================
// 函数名称: sub_428b63
// 虚拟地址: 0x428b63
// WARP GUID: be7410f7-43ae-5675-ba13-ddd566841604
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410070
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_428b63(char* arg1, char** arg2, int32_t* arg3 @ esi)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    void* entry_ebx
    *(entry_ebx + 0x72) += arg1:1.b
    *(arg2 + 0x65)
    return sub_410070(0x52e750, arg2, arg1, entry_ebx)
}
