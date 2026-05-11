// ============================================================
// 函数名称: sub_446f98
// 虚拟地址: 0x446f98
// WARP GUID: c6800073-d137-5e94-a5c7-0d31bceced60
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_4103c8
// [被调用的父级函数]: sub_446fc8
// ============================================================

int32_t __stdcallsub_446f98(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    edx.b = 1
    int32_t ecx
    void* eax_1 = sub_4030a0(ecx, edx)
    *(eax_1 + 4) = arg1
    *(eax_1 + 8) = arg2[2]
    sub_4103c8(arg2, eax_1)
    int32_t result
    result.b = 1
    return result
}
