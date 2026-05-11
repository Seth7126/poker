// ============================================================
// 函数名称: sub_42c9b9
// 虚拟地址: 0x42c9b9
// WARP GUID: 7a11cdf4-3dc0-5a71-bdf8-d2a582acbfca
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413af4
// [被调用的父级函数]: 无
// ============================================================

bool __fastcallsub_42c9b9(int32_t arg1, int32_t arg2, char* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    void* entry_ebx
    *(entry_ebx + 0x56) += arg2.b
    bool result = sub_413af4()
    arg3[0x4e] = result
    return result
}
