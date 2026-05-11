// ============================================================
// 函数名称: sub_4060d0
// 虚拟地址: 0x4060d0
// WARP GUID: b29ef9e9-4a90-592a-8bde-e5a3822ba77f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4060e7
// [被调用的父级函数]: sub_404464
// ============================================================

int32_t __fastcallsub_4060d0(int32_t arg1, char* arg2)
{
    // 第一条实际指令: void* eax
    void* eax
    int32_t result
    char ecx
    result, ecx = sub_4060e7(eax, &arg2[1], arg1)
    *arg2 = ecx
    return result
}
