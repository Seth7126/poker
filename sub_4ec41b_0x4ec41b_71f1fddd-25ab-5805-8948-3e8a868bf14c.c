// ============================================================
// 函数名称: sub_4ec41b
// 虚拟地址: 0x4ec41b
// WARP GUID: 71f1fddd-25ab-5805-8948-3e8a868bf14c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4f2e8c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4ec41b(char* arg1, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: *arg2 += 1
    *arg2 += 1
    *arg1 += arg1.b
    *(arg3 + 0x50) += arg3.b
    *arg1 += arg1.b
    arg1.b = 1
    return sub_4f2e8c(arg1.b)
}
