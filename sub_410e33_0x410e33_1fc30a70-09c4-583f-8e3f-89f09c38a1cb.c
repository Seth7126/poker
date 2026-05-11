// ============================================================
// 函数名称: sub_410e33
// 虚拟地址: 0x410e33
// WARP GUID: 1fc30a70-09c4-583f-8e3f-89f09c38a1cb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_410e33(char* arg1, int32_t* arg2 @ esi)
{
    // 第一条实际指令: *arg2 += 1
    *arg2 += 1
    *arg1 += arg1.b
    *0x64255b73 += arg1:1.b
    *arg1 += arg1.b
    return *(arg1 + 4)
}
