// ============================================================
// 函数名称: sub_431978
// 虚拟地址: 0x431978
// WARP GUID: 2bbc5beb-23fe-5fb5-8dff-cc998689acca
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ClientToScreen
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_431978(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: *arg2 = 0
    *arg2 = 0
    arg2[1] = 0
    return ClientToScreen(sub_4318d0(arg1), arg2)
}
