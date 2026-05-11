// ============================================================
// 函数名称: sub_446c94
// 虚拟地址: 0x446c94
// WARP GUID: 439d3007-6969-55ab-b13d-b715a7f49568
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4301c8
// [被调用的父级函数]: 无
// ============================================================

bool* __stdcallsub_446c94(void* arg1 @ eax, bool* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_c = *arg3
    int32_t var_c = *arg3
    int32_t var_8 = arg3[1]
    *arg2 = sub_4301c8(arg1) == 0
    return arg2
}
