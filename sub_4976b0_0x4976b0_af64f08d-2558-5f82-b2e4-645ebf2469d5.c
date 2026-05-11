// ============================================================
// 函数名称: sub_4976b0
// 虚拟地址: 0x4976b0
// WARP GUID: af64f08d-2558-5f82-b2e4-645ebf2469d5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4976b0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* result = *(arg1 + 0x80)
    void* result = *(arg1 + 0x80)
    *arg2 = *(result + 0x70)
    arg2[1] = *(result + 0x74)
    return result
}
